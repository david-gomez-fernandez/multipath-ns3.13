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
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <errno.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdarg.h>

#include <vector>
#include <list>
#include <map>

#include "sim_interface.h"
#include "nsc.h"
#include "num_stacks.h"

extern "C" {
    int get_stack_id();
    int new_stack_id();
    int get_num_stacks();
    void set_stack_id(int id);

    void nsc_sysctl_a();

    void nsc_gettime(unsigned int *sec, unsigned int *usec);
}
// ------------------------------------------------------------------------
// globals
class LinuxStack;

std::vector<LinuxStack *> stacks;
int nsc_g_l26_diagnostic = 0;
// ------------------------------------------------------------------------
class LinuxStack : public INetStack
{
private:
    IInterruptCallback  *interrupt_callback;
    ISendCallback       *send_callback;

    class TCPSocket : public INetStreamSocket
    {
    protected:
        LinuxStack *parent;
        void *so;
        bool listening;

    public:
        TCPSocket(LinuxStack *p)
            : parent(p), listening(false)
        {
            so = nsc_socreate_tcp();
        }

        TCPSocket(LinuxStack *p, void *sock)
            : parent(p), so(sock), listening(false)
        {
        }

        TCPSocket()
        {
        }

        virtual ~TCPSocket()
        {
            disconnect();
        }

        virtual void connect(const char *dest, int dest_port)
        {
            unsigned int ip_dest;
            unsigned short ip_port;

            inet_aton(dest, (struct in_addr *)&ip_dest);
            ip_port = htons(dest_port);

            set_stack_id(parent->stack_id);
            nsc_soconnect(so, ip_dest, ip_port);
            set_stack_id(-1);
        }
        
        virtual void disconnect()
        {
            set_stack_id(parent->stack_id);
            nsc_sodisconnect(so);
            set_stack_id(-1);
        }
        
        virtual void listen(int port)
        {
            set_stack_id(parent->stack_id);
            nsc_solisten(so, htons(port));
            listening = true;
            set_stack_id(-1);
        }
        
        virtual int accept(INetStreamSocket **sock)
        {
            void *s;
            int ret;
            
            set_stack_id(parent->stack_id);

            ret = nsc_accept(so, &s);
            if (ret == 0) {
                *sock = new TCPSocket(parent, s);
                return 0;
            }
            set_stack_id(-1);
	    assert(ret < 0);
            return nsc_convert_syserr_to_nscerr(ret);
        }
        
        virtual int send_data(const void *data, int datalen)
        {
            set_stack_id(parent->stack_id);
            int ret = nsc_sosend(so, (void *)data, datalen);
            return nsc_convert_syserr_to_nscerr(ret);
        }
        
        virtual int read_data(void *buf, int *buflen)
        {
            set_stack_id(parent->stack_id);
            int ret = nsc_soreceive(so, buf, buflen);
            return nsc_convert_syserr_to_nscerr(ret);
        }
        
        virtual int setsockopt(char *optname, void *val, size_t valsize) 
        {
            /* XXX: Currently we do not support setting SO_SNDBUF and SO_RCVBUF
             * because it doesn't seem to work. It is of dubious value at the
             * best of time due to the fact that Linux dynamically grows it's
             * buffers anyway. Indeed, I am unsure what setting the sndbuf or
             * rcvbuf actually DOES. It would be nice to have an explanation
             * for why this doesn't work, of course, but for now it is safe to
             * leave it. -stj2 April 29, 2005. */
            if(strncmp(optname, "SO_RCVBUF", 9) == 0 ||
               strncmp(optname, "SO_SNDBUF", 9) == 0) {
                return -1;
            }
            
            set_stack_id(parent->stack_id);
            int ret = nsc_setsockopt(so, optname, val, valsize);
	    return nsc_convert_syserr_to_nscerr(ret);
        }
        
        virtual void print_state(FILE *) 
        {
            assert(0);
        }
        
        virtual bool is_connected()
        {
            set_stack_id(parent->stack_id);
            return nsc_is_connected(so);
        }
        
        virtual bool is_listening()
        {
            return listening;
        }

        bool get_var(const char *var, char *result, int result_len)
        {
            if(nsc_get_tcp_var(so, var, result, result_len))
                return true;

            return false;
        }
    };

    class SCTPSocket : public TCPSocket
    {
    public:
        SCTPSocket(LinuxStack *p)
            : TCPSocket()
        {
            so = nsc_socreate_sctp();
            parent = p;
            listening = false;
        }
    
        SCTPSocket(LinuxStack *p, void *sock)
            : TCPSocket()
        {
            parent = p;
            so = sock;
            listening = false;
        }


        virtual ~SCTPSocket()
        {
        }
        
        virtual int accept(INetStreamSocket **sock)
        {
            void *s;
            int ret;
            set_stack_id(parent->stack_id);

            ret = nsc_accept_sctp(so, &s);
            if (ret == 0) {
                *sock = new SCTPSocket(parent, s);
                return 0;
            }

	    assert(ret < 0);
	    return nsc_convert_syserr_to_nscerr(ret);
        }
        
        int dummy;
        virtual int *var_rtt() { return &dummy; }
        virtual int *var_ssthresh() { return &dummy; }
        virtual int *var_cwnd() { return &dummy; }
        virtual int *var_srtt() { return &dummy; }
        virtual int *var_rttvar() { return &dummy; }
        virtual int *var_rxtcur() { return &dummy; }

    };

    friend class TCPSocket;
    friend class SCTPSocket;

    typedef std::map<void *, TCPSocket *> TCPSocketMap;
    TCPSocketMap tcp_sockets;

    int stack_id;
    std::vector<void *> interfaces;

public:
    LinuxStack(ISendCallback *s, IInterruptCallback *i)
        : interrupt_callback(i), send_callback(s)
    {
        stack_id = new_stack_id();
        
        if(stack_id <= (signed)stacks.size()) {
            stacks.resize(stack_id + 1);
        }

        stacks[stack_id] = this;
    }

    virtual ~LinuxStack()
    {
    }
    
    virtual void init(int hz_)
    {
        (void)hz_; // XXX
        set_stack_id(stack_id);
        nsc_init();
        set_stack_id(-1);
    }

    virtual void show_config()
    {
        nsc_sysctl_a();
    }

    virtual void if_receive_packet(int if_id, const void *data, int datalen)
    {
        set_stack_id(stack_id);
        nsc_if_receive_packet(interfaces[if_id], data, datalen);
        set_stack_id(-1);
    }

    virtual void if_send_packet(const void *data, int datalen)
    {
        set_stack_id(stack_id);
        send_callback->send_callback(data, datalen);
        //set_stack_id(-1); // we can't do this here, because we return back
        // into the stack after this function.
    }

    virtual void if_send_finish(int if_id)
    {
    }

    virtual void if_attach(const char *addr, const char *mask, int mtu)
    {
        unsigned int ip_addr, ip_mask;
        set_stack_id(stack_id);
        inet_aton(addr, (struct in_addr *)&ip_addr);
        inet_aton(mask, (struct in_addr *)&ip_mask);
        void *ifp = nsc_newif(ip_addr, ip_mask, mtu);
        assert(ifp);
        interfaces.push_back(ifp);
        set_stack_id(-1);
    }

    virtual void add_default_gateway(const char *addr)
    {
        unsigned int ip_addr;
        inet_aton(addr, (struct in_addr *)&ip_addr);

        set_stack_id(stack_id);
        nsc_add_default_gw(ip_addr);
        set_stack_id(-1);
    }

    virtual int get_id()
    {
        return stack_id;
    }

    virtual const char *get_name()
    {
        return "linux26";
    }

    virtual int get_hz()
    {
        return 1000;
    }

    virtual int get_ticks()
    {
        // we could return global_tcp_ticks or something if we cared. But
        // I don't see why I even have this function...
        return 0;
    }

    virtual void timer_interrupt()
    {
        set_stack_id(stack_id);
        nsc_timer_interrupt();
        set_stack_id(-1);
    }

    virtual void nsi_interrupt()
    {
    }

    virtual void wakeup(void *)
    {
    }
    
    virtual void increment_ticks()
    {
        set_stack_id(stack_id);
        nsc_timer_tick();
        set_stack_id(-1);
    }
    
    virtual struct INetDatagramSocket *new_udp_socket()
    {
        assert(0 && "UDP is not yet supported!");
        return NULL; 
    }
    
    virtual struct INetStreamSocket *new_tcp_socket()
    {
        set_stack_id(stack_id);
        return new TCPSocket(this);

        // The following allows us to use SCTP in the place of TCP!
        //return new SCTPSocket(this);
    }

    virtual int sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen)
    {
        set_stack_id(stack_id);
        int ret = nsc_do_sysctl(sysctl_name, oldval, oldlenp, newval, newlen);
        return nsc_convert_syserr_to_nscerr(ret);
    }


    virtual void buffer_size(int size)
    {
        // net/core/wmem_default = 106496
        // net/core/wmem_max = 131071
        size_t oldval, oldlen = sizeof(oldval);
        size_t newval = size, newlen = sizeof(newval);
        size_t oldval3[3], newval3[3];
        int err;

        newval = size;
        oldlen = sizeof(oldval);
        err = sysctl("net/core/wmem_max", &oldval, &oldlen, &newval, newlen);
        //fprintf(stderr, "sysctl returned %d (%d, %d)\n", err, oldval, newval);
        assert(err == 0);

        newval = size;
        oldlen = sizeof(oldval);
        err = sysctl("net/core/rmem_max", &oldval, &oldlen, &newval, newlen);
        //fprintf(stderr, "sysctl returned %d (%d, %d)\n", err, oldval, newval);
        assert(err == 0);

        newlen = sizeof(newval3);

        newval3[0] = 4096;
        newval3[1] = size;
        newval3[2] = size;
        oldlen = sizeof(oldval3);
        err = sysctl("net/ipv4/tcp_rmem", oldval3, &oldlen, newval3, newlen);
        /*fprintf(stderr, "sysctl returned %d ([%d,%d,%d], [%d,%d,%d])\n", 
                err, 
                oldval3[0], oldval3[1], oldval3[2], 
                newval3[0], newval3[1], newval3[2]
               );*/
        assert(err == 0);

        newval3[0] = 4096;
        newval3[1] = size;
        newval3[2] = size;
        oldlen = sizeof(oldval3);
        err = sysctl("net/ipv4/tcp_wmem", oldval3, &oldlen, newval3, newlen);
        /*fprintf(stderr, "sysctl returned %d ([%d,%d,%d], [%d,%d,%d])\n", 
                err, 
                oldval3[0], oldval3[1], oldval3[2], 
                newval3[0], newval3[1], newval3[2]
               );*/
        assert(err == 0);


        set_stack_id(-1);
    } 

    void gettime(unsigned int *second, unsigned int *microseconds)
    {
        interrupt_callback->gettime(second, microseconds);
    }

    void wakeup()
    {
        interrupt_callback->wakeup();
    }

    virtual void set_diagnostic(int level)
    {
        nsc_g_l26_diagnostic = level;
    }
};

CREATE_STACK_FUNC(send_callback, int_callback, rand_func)
{
    // should maybe use rand_func at some point (or maybe not?)
    return new LinuxStack(send_callback, int_callback);
}

// ------------------------------------------------------------------------
// Stack id stuff
int cur_stack_id = 0;
int num_stacks = 0;

extern "C" int get_stack_id()
{
    return cur_stack_id;
}

extern "C" int new_stack_id()
{
    assert(num_stacks < NUM_STACKS);
    return num_stacks++;
}

extern "C" int get_num_stacks()
{
    return num_stacks;
}

extern "C" void set_stack_id(int id)
{
    cur_stack_id = id;
}
// ------------------------------------------------------------------------

extern "C" void nsc_assert(int x, const char *str)
{
    if(!x) {
        fprintf(stderr, "assert: %s\n", str);
    }
    assert(x);
}

extern "C" void nsc_debugf(const char *fmt, ...)
{
    if(!nsc_g_l26_diagnostic)
        return;
    
    char p[512];
    va_list ap;
    unsigned int sec, usec;

    nsc_gettime(&sec, &usec);

    va_start(ap, fmt);
    vsnprintf(p, 512, fmt, ap);
    va_end(ap);

    fprintf(stderr, "%d] %d.%06d) ", get_stack_id(), sec, usec);
    fprintf(stderr, p);
}

extern "C" int printk(const char * a, ...)
{
    char p[512];
    va_list ap;

    va_start(ap, a);
    vsnprintf(p, 512, a, ap);
    va_end(ap);

    if(nsc_g_l26_diagnostic > 1)
        nsc_debugf("printk[%d]: %s", get_stack_id(), p);
 
    return 0;
}

extern "C" void panic(const char * a, ...)
{
    char p[512];
    va_list ap;

    va_start(ap, a);
    vsnprintf(p, 512, a, ap);
    va_end(ap);

    // We really want out panic message printed out!
    nsc_g_l26_diagnostic = 1;
    nsc_debugf("linux-2.6: panic: %s", p);
    
    assert(0);
    while(1) ;
}

extern "C" void *nsc_malloc(int size)
{
    void *s = malloc(size);
    return s;
}

extern "C" void nsc_free(void *o)
{
    free(o);
}

extern "C" void *nsc_memcpy(void *to, const void *from, unsigned len)
{
    return memcpy(to, from, len);
}

extern "C" void nsc_if_send_packet(void *ifp, void *data, unsigned int size)
{
    assert( (unsigned)get_stack_id() < stacks.size() );

    // XXX: Should check against interface really, if we ever want to support
    // multiple interfaces.
    stacks[ get_stack_id() ]->if_send_packet(data, size);
}

extern "C" void nsc_gettime(unsigned int *sec, unsigned int *usec)
{
    assert( (unsigned)get_stack_id() < stacks.size() );

    stacks[ get_stack_id() ]->gettime(sec, usec);
}

extern "C" void nsc_wakeup()
{
    assert( (unsigned)get_stack_id() < stacks.size() );

    stacks[ get_stack_id() ]->wakeup();
}
