/*
  Network Simulation Cradle
  Copyright (C) 2003-2005 Sam Jansen

  This program is free software; you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by the Free
  Software Foundation; either version 2 of the License, or (at your option)
  any later version.

  This program is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
  more details.

  You should have received a copy of the GNU General Public License along
  with this program; if not, write to the Free Software Foundation, Inc., 59
  Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/
// $Id$
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


#include <vector>
#include <map>
using namespace std;

#include "sim_interface.h"
#include "nsc_sockaddr_host.h"
#include "sim_support.h"
#include "num_stacks.h"

/* External C functions */
extern "C" {
    /* exported from support/interface.c */
    void 
    fake_ether_input(void *ifp, const void *packetdata, int packetlen);

    /* exported from support/support.c */
    int new_stack_id();
    void set_stack_id(int id);
    void lock_stack();
    void unlock_stack();
    void nsc_socreate_tcp(void **so);
    void nsc_socreate_udp(void **so);
    int nsc_sosend(void *so, struct sockaddr_in *dest, 
            const void *data, int *datalen);
    int nsc_soreceive(void *so, unsigned char *buf, int *buflen,
            struct sockaddr **from);
    void nsc_soconnect(void *so, int port, unsigned int addr);
    void nsc_soclose(void *so);
    int nsc_getsockpeername(void *so, struct nsc_sockaddr *, int peername);
    int nsc_sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen);

    /* ? */
    void init_param1();
    void init_param2(long physpages);
    void kern_init();

    /* support/interrupt.c */
    void timer_interrupt();
    void nsc_increment_ticks();

    /* support/default_route.c */
    void def_gw_init(unsigned int addr);

    /* support/support2.c */
    void *new_interface(unsigned int addr,unsigned int mask, int mtu);
    void tcplisten(void *socket, int port);
    void *tcpaccept(void *socket, int *err);
    int tcpisconnecting(void *socket);
    int nsc_setsockopt(void *socket, char *optname, void *val, size_t valsize);
    int tcpisconnected(void *socket);
    void tcpdisconnect(void *socket);

    /* support/support.c */
    int nsc_convert_syserr_to_nscerr(int ret);
};

//! The mapping type of interface pointer -> BSDStack.
typedef map< void *, BSDStack * > InterfaceMapType;

//! Keeps a mapping of interface pointer to stack.
InterfaceMapType interface_map;
//! Keeps an array of stacks which have been created. We index this array by
//! stack id. To get the current stack we go: stacks[ get_stack_id() ].
vector< BSDStack * > stacks;

FRandom ns2_random = NULL;

/* The only function that needs to be exported from this shared lib. */
CREATE_STACK_FUNC(a, b, rand_func)
{
    ns2_random = rand_func;
    return new BSDStack(a, b);
}


FILE *debug_log = NULL;
int nsc_fbsd_g_diagnostic = 0;

extern "C" int debugf(const char *fmt, ...)
{
#if 0
    char p[512];
    va_list ap;

    va_start(ap, fmt);
    vsnprintf(p, 512, fmt, ap);
    va_end(ap);

    if(!debug_log) {
        debug_log = fopen("debug.txt", "w");
    }

    if(debug_log) {
        fprintf(debug_log, "%d] ", get_stack_id());
        fprintf(debug_log, p);
        fflush(debug_log);
    }
    fprintf(stderr, "%s", p);
    return strlen(p);
#else
    return 0;
#endif
}

extern "C" int nsc_printf(const char *fmt, ...)
{
    char p[1024];
    va_list ap;

    if(!nsc_fbsd_g_diagnostic)
        return 0;

    va_start(ap, fmt);
    vsnprintf(p, 1024, fmt, ap);
    va_end(ap);

    fputs(p, stderr);

    return 0;
}

/** Global function used when a packet is to be sent through
 * the wire. This is called by the network stack. It looks up the correct
 * stack for the given interface and calls the input routine of that stack.
 *
 * @param ifp The interface the packet is to be sent out of
 * @param data A pointer to the data in the packet
 * @param datalen The length of the data */
extern "C" void nsc_if_send_packet(void *ifp, void *data, int datalen)
{
    // Lookup BSDStack (from stack_id)
    InterfaceMapType::const_iterator fi = interface_map.find(ifp);

    if(fi == interface_map.end()) {
        fprintf(stderr, "Attempting to ouput packet to non-existent "
                "interface?\n");
        assert(0);
    }

    fi->second->if_send_packet(data, datalen);
}

/** The following is ugly, but works for now I guess... It's all because 
 * assert is a macro and not a function! We need this so other files can
 * access the libc assert. Could be implemented better I guess. */
#include <dlfcn.h>
extern "C" void nsc_assert(int expr)
{
    if(expr == 0) {
#ifdef Dl_info
        fprintf(stderr, "Assertion failed. Call stack:\n");
        for(int i = 0; i < 8; i++) {
            Dl_info info;
            void *addr = stack[i];

            if(addr == 0)
                continue;

            if(dladdr(addr, &info) == 0) {
                fprintf(stderr, "%d] dladdr error (%p)\n", addr);
                continue;
            }
            
            fprintf(stderr, "%d] %s %p:%p %s ", i, info.dli_fname,
                    info.dli_saddr, addr, info.dli_sname);
            if(info.dli_saddr != addr)
                fprintf(stderr, "(approx)\n");
            else
                fprintf(stderr, "\n");
        }
#endif

        
        int *sam = 0;
        *sam = 1; // crash
        //assert(0);
    }
}

/** Function to allow other files to get at the libc memset. */
extern "C" void nsc_bzero(void *buf, int n)
{
    memset(buf, 0, n);
}

/** The stack calls the wakeup function when something interesting happens
 * on a socket. Pass on to the stack function. */
extern "C" void nsc_wakeup(void *ident)
{
    assert( (signed)stacks.size() > get_stack_id() );
    assert( stacks[ get_stack_id() ] );

    stacks[ get_stack_id() ]->wakeup(ident);
}

extern "C" void nsc_schedule_nsi()
{
    assert( (signed)stacks.size() > get_stack_id() );
    assert( stacks[ get_stack_id() ] );

    stacks[ get_stack_id() ]->timer_interrupt();
}

/** Calls to random() functions in the kernel will call this function. The
 * main and perhaps only reason I know of is TCP initial sequence numbers. It
 * is useful to have these start at 0 in simulation.
 *
 * The problem is, that it is used as a seed to do some more work, FreeBSD 5.3+
 * (and possibly earlier?) use MD5s and such to create ISNs. So it's pretty
 * hard to get these to start from 0.
 *
 * During a simple test, the only time it was called was to generate these
 * ISN seeds/secrets.
 */
extern "C" int nsc_random(void)
{
    return 0;
//    return ns2_random();
}

#ifdef __linux__
/** Compatibility function needed on linux because glibc does not provide
 * such a function. Just a simple random function suffices. */
extern "C" u_int32_t arc4random(void)
{
    return nsc_random();
}
/** glibc doesn't provide strlcpy on linux. However, it doesn't ever seem to
 * be called, even if it is needed for linking. We just assert(0) here. */
extern "C" size_t strlcpy(char *dst, const char *src, size_t size)
{
    strncpy(dst, src, size - 1);
    return strlen(src);
}

/** FreeBSD version of realloc that does a "free" when realloc fails. */
extern "C"  void *reallocf(void *ptr, size_t size)
{
    void *r = realloc(ptr, size);
    if(r == NULL)
        free(ptr);
    return r;
}

#endif

BSDStack::BSDStack(ISendCallback *c, IInterruptCallback *i) 
    : send_callback(c), interrupt_callback(i)
{
    stack_id = -1;
}

BSDStack::~BSDStack()
{
}

//extern "C" int hz;
extern "C" void nsc_set_hz(int hz);
void BSDStack::init(int hz)
{
    debugf("BSDStack::init\n");

    stack_id = new_stack_id();

    if(stack_id >= NUM_STACKS - 1) {
        fprintf(stderr, "Too many stacks created! Increase NUM_STACKS and "
                "recompile.\n");
        exit(1);
    }

    if((signed)stacks.size() <= stack_id + 1)
        stacks.resize(stack_id + 2);

    stacks[ stack_id ] = this;

    set_stack_id(stack_id);
    nsc_set_hz(hz);

    init_param1();
    init_param2(24); // 24=Number of physical pages. Don't think its important.
    kern_init();

    debugf("BSDStack::uninit (%d)\n", stack_id);
}

void BSDStack::add_default_gateway(const char *addr)
{
    struct in_addr n_addr;

    inet_aton(addr, &n_addr);

    lock_stack();
    set_stack_id(stack_id);
    def_gw_init(n_addr.s_addr);
    unlock_stack();
}

/* The interface if_id of this stack has received a packet from the link
 * layer. */
void BSDStack::if_receive_packet(int if_id, const void *data, int datalen)
{
    assert(if_id < (signed)interfaces.size());

    lock_stack();
    set_stack_id(stack_id);
    fake_ether_input(interfaces[if_id], data, datalen);
    unlock_stack();
}

/* This will be called via a callback; this call is generated from network
 * stack activity. It should pass the data onto ns-2. */
void BSDStack::if_send_packet(const void *data, int datalen)
{
    unlock_stack();

    //fprintf(stderr, "%d] sending: %s\n", get_stack_id());
    send_callback->send_callback(data, datalen);

    lock_stack();
}

void BSDStack::if_send_finish(int ifid)
{
  // no-op
}

void BSDStack::if_attach(const char *addr, const char *mask, int mtu)
{
    void *ifp;
    struct in_addr n_addr, n_mask;

    inet_aton(addr, &n_addr);
    inet_aton(mask, &n_mask);

    lock_stack();
    set_stack_id(stack_id);
    ifp = new_interface(n_addr.s_addr, n_mask.s_addr, mtu);
    unlock_stack();

    // Add to our interface list
    interfaces.push_back(ifp);
    // Add to global interface mapping
    interface_map[ ifp ] = this;
}

void BSDStack::timer_interrupt()
{
    lock_stack();
    set_stack_id(stack_id);
    ::timer_interrupt();
    unlock_stack();
}

void BSDStack::wakeup(void *ident)
{
    // for now. Might well be enough!
    interrupt_callback->wakeup();
}

void BSDStack::increment_ticks()
{
    lock_stack();
    set_stack_id(stack_id);
    ::nsc_increment_ticks();
    unlock_stack();
}

int BSDStack::sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
    void *newval, size_t newlen)
{
    set_stack_id(stack_id);
    int ret = nsc_sysctl(sysctl_name, oldval, oldlenp, newval, newlen);
    return nsc_convert_syserr_to_nscerr(ret);
}

int BSDStack::sysctl_set(const char *name, const char *value)
{
    char *endptr = 0;
    int int_value = (int)strtol(value, &endptr, 10);
    if (*endptr != '\0') {
        return -1;
    }
    return sysctl(name, 0, 0, &int_value, sizeof(int_value));
}

int BSDStack::sysctl_get(const char *name, char *value, size_t len)
{
    int int_value = 0;
    size_t int_len = sizeof(int_value);
    int error = sysctl(name, &int_value, &int_len, 0, 0);
    if (error == 0) {
        snprintf(value, len, "%d", int_value);
    }
    return error;
}

void BSDStack::buffer_size(int size)
{
    size_t oldval, oldlen;
    size_t newval, newlen;
    int err;
    
    set_stack_id(stack_id);

    newval = size * 2;

    // Don't set maxsockbuf too small, it will break other buffers (eg.
    // for routing sockets, setting interface address)
    if(newval < 128 * 1024)
        newval = 128 * 1024;
    
    newlen = sizeof(newval);
    oldlen = sizeof(oldval);
    err = sysctl("kern.ipc.maxsockbuf", &oldval, &oldlen, &newval, newlen);
    
    newval = size;
    newlen = sizeof(newval);
    oldlen = sizeof(oldval);
    err |= sysctl("net.inet.tcp.recvspace", &oldval, &oldlen, &newval, newlen);

    newval = size;
    newlen = sizeof(newval);
    oldlen = sizeof(oldval);
    err |= sysctl("net.inet.tcp.sendspace", &oldval, &oldlen, &newval, newlen);

    assert(err == 0);
}

void BSDStack::set_diagnostic(int level)
{
    nsc_fbsd_g_diagnostic = level;
}

BSDStack::UDPSocket::UDPSocket(BSDStack *p) : parent(p)
{
    nsc_socreate_udp(&so);
}

BSDStack::UDPSocket::~UDPSocket()
{
    // XXX: should delete/cleaup socket here?
}

void BSDStack::UDPSocket::set_destination(const char *d, int port)
{
    inet_aton(d, &dest);
    dest_port = port;
}

void BSDStack::UDPSocket::send_data(const void *data, int datalen)
{
    struct sockaddr_in s_dest;

    assert(0); // This wont work in linux. Fix me.

    s_dest.sin_family = AF_INET;	 	 
#ifdef __FreeBSD__
    s_dest.sin_len = sizeof(struct sockaddr_in);	 	 
#endif
    s_dest.sin_port = htons((short)dest_port);	 	 
    memcpy(&s_dest.sin_addr, &dest, sizeof(dest));

    lock_stack();
    set_stack_id(parent->stack_id);
    assert( nsc_sosend(so, &s_dest, data, &datalen) == 0 );
    unlock_stack();
}

BSDStack::TCPSocket::TCPSocket(BSDStack *p) : parent(p)
{
    lock_stack();
    set_stack_id(parent->stack_id);
    nsc_socreate_tcp(&so);
    unlock_stack();
    listening = false;
}

BSDStack::TCPSocket::~TCPSocket()
{
    // XXX: close connection+delete socket here?
    lock_stack();
    set_stack_id(parent->stack_id);
    nsc_soclose(so);
    unlock_stack();
}

void BSDStack::TCPSocket::connect(const char *dest, int dest_port)
{
    int port = htons((short)dest_port);	 	 
    unsigned int addr;
    inet_aton(dest, (in_addr *)&addr);

    lock_stack();
    set_stack_id(parent->stack_id);
    nsc_soconnect(so, addr, port);
    unlock_stack();
    /* At this point the socket is marked as connecting. It is NOT yet
     * connected. */
}

void BSDStack::TCPSocket::listen(int port)
{
    lock_stack();
    set_stack_id(parent->stack_id);

    tcplisten(so, port);

    unlock_stack();

    listening = true;
}

int BSDStack::TCPSocket::accept(INetStreamSocket **sock)
{
    int err = 0;

    lock_stack();
    set_stack_id(parent->stack_id);

    void *s = tcpaccept(so, &err);

    if(err == 0) {
        TCPSocket *tcp = new TCPSocket(parent);
        tcp->so = s;
        //(BSDStack::TCPSocket *)
			*sock = tcp;
    }

    unlock_stack();
    return nsc_convert_syserr_to_nscerr(err);
}

int BSDStack::TCPSocket::getsockname(struct sockaddr *sa, size_t *salen)
{
    int err;
    struct nsc_sockaddr nsc_sa;

    lock_stack();
    set_stack_id(parent->stack_id);
    err = nsc_getsockpeername(so, &nsc_sa, 0);
    if (err == 0)
        nsc_convert_nscsockaddr(&nsc_sa, sa, salen);
    unlock_stack();
    return nsc_convert_syserr_to_nscerr(err);
}

int BSDStack::TCPSocket::getpeername(struct sockaddr *sa, size_t *salen)
{
    int err;
    struct nsc_sockaddr nsc_sa;

    lock_stack();
    set_stack_id(parent->stack_id);
    err = nsc_getsockpeername(so, &nsc_sa, 1);
    if (err == 0)
        nsc_convert_nscsockaddr(&nsc_sa, sa, salen);
    unlock_stack();
    return nsc_convert_syserr_to_nscerr(err);
}

int BSDStack::TCPSocket::send_data(const void *data, int datalen)
{
    int error = 0;

    lock_stack();
    set_stack_id(parent->stack_id);

    /* Check if we are connecting... */
    if (tcpisconnecting(so)) {
        /* XXX: do something here! 
           ... or maybe not. I don't think this should ever happen
           in normal operation? or am I wrong in assuming that?
           */

        assert(0);
    }

    error = nsc_sosend(so, NULL, data, &datalen);

    unlock_stack();

    if(error == 0)
        return datalen;

    // If we were able to send just some of the data, return that we sent that
    // amount.
    if(datalen > 0)
        return datalen;
    
    return nsc_convert_syserr_to_nscerr(error);
}

int BSDStack::TCPSocket::read_data(void *buf, int *buflen)
{
    int err;

    lock_stack();
    set_stack_id(parent->stack_id);

    err = (nsc_soreceive(so, (unsigned char *)buf, buflen, NULL));

    unlock_stack();

    return nsc_convert_syserr_to_nscerr(err);
}

/* Why does this even return a value? tcpsetsockopt doesn't. */
int BSDStack::TCPSocket::setsockopt(char *optname, void *val, size_t valsize)
{
    int error = 0;
    lock_stack();
    set_stack_id(parent->stack_id);

    error = nsc_setsockopt(so, optname, val, valsize);
    //tcpsetsockopt(so, optname, val, valsize);
    unlock_stack();

    return nsc_convert_syserr_to_nscerr(error);
}

void BSDStack::TCPSocket::disconnect()
{
    lock_stack(); set_stack_id(parent->stack_id);
    tcpdisconnect(so);
    unlock_stack();
}

bool BSDStack::TCPSocket::is_connected()
{
    return tcpisconnected(so);
}

// TODO: remove print_state
void BSDStack::TCPSocket::print_state(FILE *out)
{
    lock_stack(); set_stack_id(parent->stack_id);

    unlock_stack();
}

extern "C" int nsc_get_tcp_var(void *, const char *, char *, int);

bool BSDStack::TCPSocket::get_var(const char *var, char *result, int result_len)
{
    if(nsc_get_tcp_var(so, var, result, result_len))
        return true;

    return false;
}

