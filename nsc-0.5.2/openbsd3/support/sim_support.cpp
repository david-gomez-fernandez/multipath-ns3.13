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
#include <vector>
#include <list>
#include <map>

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <assert.h>
#include <errno.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "sim_interface.h"
#include "nsc_sockaddr_host.h"
#include "nsc.h"
#include "num_stacks.h"

//
extern "C" {
    int new_stack_id();
    int get_stack_id();
    void set_stack_id(int);
    int in_cksum(void *,int);

    void ipintr(); // in net/ip_input.c
}    

// ------------------------------------------------------------------------
// globals
class OpenBSDStack;

std::vector<OpenBSDStack *> stacks;

// ------------------------------------------------------------------------
class OpenBSDStack : public INetStack
{
private:
    IInterruptCallback  *interrupt_callback;
    ISendCallback       *send_callback;

    class TCPSocket : public INetStreamSocket
    {
    private:
        OpenBSDStack *parent;
        void *so;

    public:
        TCPSocket(OpenBSDStack *p)
            : parent(p)
        {
            set_stack_id(parent->stack_id);
            so = nsc_socreate_tcp();
        }

        virtual ~TCPSocket()
        {
            
        }

        virtual void connect(const char *dest, int dest_port)
        {
            int port = htons((short)dest_port);	 	 
            unsigned int addr;
            inet_aton(dest, (in_addr *)&addr);

            set_stack_id(parent->stack_id);
            nsc_soconnect(so, port, addr);
        }
        
        virtual void disconnect()
        {
            set_stack_id(parent->stack_id);
            nsc_sodisconnect(so);
        }
        
        virtual void listen(int port)
        {
            set_stack_id(parent->stack_id);
            nsc_solisten(so, port);
        }
        
        virtual int accept(INetStreamSocket **sock)
        {
            int err = 0;
            void *s;

            set_stack_id(parent->stack_id);

            err = nsc_soaccept(so, &s);

            if(err == 0) {
                TCPSocket *tcp = new TCPSocket(parent);
                tcp->so = s;
                *sock = tcp;
            }

            return nsc_convert_syserr_to_nscerr(err);
        }

	virtual int getpeername(struct sockaddr *sa, size_t *salen)
	{
		set_stack_id(parent->stack_id);
		struct nsc_sockaddr nsc_sa;
		int err = nsc_getsockpeername(so, &nsc_sa, 1);
		if (err == 0)
			nsc_convert_nscsockaddr(&nsc_sa, sa, salen);
                return nsc_convert_syserr_to_nscerr(err);
	}

	virtual int getsockname(struct sockaddr *sa, size_t *salen)
	{
		set_stack_id(parent->stack_id);
		struct nsc_sockaddr nsc_sa;
		int err = nsc_getsockpeername(so, &nsc_sa, 0);
		if (err == 0)
			nsc_convert_nscsockaddr(&nsc_sa, sa, salen);
                return nsc_convert_syserr_to_nscerr(err);
	}

        virtual int send_data(const void *data, int datalen)
        {
            set_stack_id(parent->stack_id);
            int err = nsc_sosend(so, NULL, data, datalen);
	    if (err >= 0)
		    return err;
	    err *= -1;
            return nsc_convert_syserr_to_nscerr(err);
        }
        
        virtual int read_data(void *buf, int *buflen)
        {
            set_stack_id(parent->stack_id);
            int err = nsc_soreceive(so, (unsigned char *)buf, buflen);
            return nsc_convert_syserr_to_nscerr(err);
        }
        
        virtual int setsockopt(char *optname, void *val, size_t valsize)
        {
            int err = nsc_setsockopt(so, optname, val, valsize);
            return nsc_convert_syserr_to_nscerr(err);
        }
        
        virtual void print_state(FILE *) 
        {
            assert(0);
        }
        
        virtual bool is_connected()
        {
            return nsc_soisconnected(so);
        }
        
        virtual bool is_listening()
        {
            return nsc_islistening(so);
        }

        virtual bool get_var(const char *var, char *result, int result_len)
        {
            if(nsc_get_tcp_var(so, var, result, result_len))
                return true;

            return false;
        }

    };

    friend class TCPSocket;

    typedef std::map<void *, TCPSocket *> TCPSocketMap;
    typedef std::vector<void *> InterfaceArray;
    TCPSocketMap tcp_sockets;
    InterfaceArray interfaces;

    int stack_id;

public:
    OpenBSDStack(ISendCallback *s, IInterruptCallback *i)
        : interrupt_callback(i), send_callback(s)
    {
        stack_id = new_stack_id();
        
        if(stack_id <= (signed)stacks.size()) {
            stacks.resize(stack_id + 1);
        }

        stacks[stack_id] = this;
    }

    virtual ~OpenBSDStack()
    {
    }
    
    virtual void init(int hz_)
    {
        set_stack_id(stack_id);
        nsc_init(hz_);
    }

    virtual void if_receive_packet(int if_id, const void *data, int datalen)
    {
        assert(if_id < (signed)interfaces.size());

        set_stack_id(stack_id);
        fake_ether_input(interfaces[if_id], data, datalen);
    }

    virtual void if_send_packet(const void *data, int datalen)
    {
        send_callback->send_callback(data, datalen);
    }

    virtual void if_send_finish(int ifid)
    {
      // no-op
    }
    
    virtual void if_attach(const char *addr, const char *mask, int mtu)
    {
        void *ifp;
        unsigned int naddr, nmask;

        inet_aton(addr, (in_addr *)&naddr);
        inet_aton(mask, (in_addr *)&nmask);

        set_stack_id(stack_id);
        ifp = nsc_if_attach(naddr, nmask, mtu);

        interfaces.push_back(ifp);
    }

    virtual void add_default_gateway(const char *addr)
    {
        unsigned int naddr;

        inet_aton(addr, (in_addr *)&naddr);

        set_stack_id(stack_id);
        nsc_default_gw_init(naddr);
    }

    virtual int get_id()
    {
        return stack_id;
    }

    virtual const char *get_name()
    {
        return "openbsd3";
    }

    virtual int get_hz()
    {
        return 100;
    }

    virtual int get_ticks()
    {
        set_stack_id(stack_id);
        return nsc_get_ticks();
    }

    virtual void timer_interrupt()
    {
        set_stack_id(stack_id);
        nsc_timer_interrupt();
    }

    virtual void nsi_interrupt()
    {
        // Probably not needed.
    }

    virtual void wakeup(void *)
    {
        // for now. Might well be enough!
        interrupt_callback->wakeup();
    }
    
    virtual void increment_ticks()
    {
        // This functionality happens in timer_interrupt.
        // TODO: check that this behaviour is OK
    }
    
    virtual struct INetDatagramSocket *new_udp_socket()
    {
        assert(0 && "UDP is not yet supported!");
        return NULL; 
    }
    
    virtual struct INetStreamSocket *new_tcp_socket()
    {
        return new TCPSocket(this);
    }

    virtual int sysctl_set(const char *name, const char *value)
    {
        size_t oldlen = 0;
        char *endptr = 0;
        int int_value = (int)strtol(value, &endptr, 10);
        if (*endptr != '\0') {
            return -1;
        }
        return sysctl(name, 0, &oldlen, &int_value, sizeof(int_value));
    }

    virtual int sysctl_get(const char *name, char *value, size_t len)
    {
        int int_value = 0;
        size_t int_len = sizeof(int_value);
        int error = sysctl(name, &int_value, &int_len, 0, 0);
        if (error == 0) {
            snprintf(value, len, "%d", int_value);
        }
        return error;
    }


    virtual int sysctl(const char *sysctl_name, void *oldval, size_t *oldlenp,
        void *newval, size_t newlen)
    {
        set_stack_id(stack_id);
        int err = nsc_sysctl(sysctl_name, oldval, oldlenp, newval, newlen);
        return nsc_convert_syserr_to_nscerr(err);
    }

    virtual void buffer_size(int size)
    {
        size_t oldval, oldlen = sizeof(oldval);
        size_t newval = size, newlen = sizeof(newval);
        int err;

        /* OpenBSD has a hardcoded limit of 256k. It can be patched to be
         * something else, but we're not so interested in that. The variable
         * to change is SB_MAX in sys/socketvar.h. */
        if(size > 256*1024) {
            fprintf(stderr, "openbsd3: request for sockets of size %d, but "
                    "only %d supported.\n"
                    "openbsd3: setting size to %d.\n",
                    size, 
                    233016, 233016);
            size = 233016;
            // Note that in the kernel the amount is rounded down. This
            // rounded value is 233016.
        }
        
        set_stack_id(stack_id);

        newval = size;
        err = sysctl("net/inet/tcp/recvspace", &oldval, &oldlen, &newval, newlen);
        newval = size;
        oldlen = sizeof(oldval);
        err |= sysctl("net/inet/tcp/sendspace", &oldval, &oldlen, &newval, newlen);

        assert(err == 0);
    }

};

FRandom sim_rand = NULL;

CREATE_STACK_FUNC(send_callback, int_callback, rand_func)
{
    sim_rand = rand_func;
    return new OpenBSDStack(send_callback, int_callback);
}

extern "C" void *nsc_malloc(size_t s)
{
    return malloc(s);
}

extern "C" void nsc_free(void *m)
{
    free(m);
}

extern "C" unsigned int nsc_random()
{
    return 100563;
//    return sim_rand();
}

extern "C" void nsc_if_send_packet(void *ifp, void *data, unsigned int size)
{
    assert(static_cast<size_t>(get_stack_id()) < stacks.size());

    // XXX: Should check against interface really, if we ever want to support
    // multiple interfaces.
    stacks[get_stack_id()]->if_send_packet(data, size);
}

int cur_stack_id = 0;
int max_stack_id = 0;

extern "C" int new_stack_id()
{
    assert(max_stack_id < NUM_STACKS);
    return max_stack_id++;
}

extern "C" int get_stack_id()
{
    return cur_stack_id;
}

extern "C" void set_stack_id(int id)
{
    cur_stack_id = id;
}

extern "C" void nsc_debugf(const char *fmt, ...)
{
#if 0
    char p[512];
    va_list ap;

    va_start(ap, fmt);
    vsnprintf(p, 512, fmt, ap);
    va_end(ap);

    fprintf(stderr, "%d] ", get_stack_id());
    fputs(p, stderr);
    fflush(stderr);
    
    fprintf(stderr, "%s", p);
#endif
}

// This is in here because this file includes normal libc stuff (including
// stdarg.h) which we can't really include in support/support.c.
extern "C" void       panic(const char *a, ...)
{
    char p[512];
    va_list ap;

    va_start(ap, a);
    vsnprintf(p, 512, a, ap);
    va_end(ap);

    nsc_debugf("%s\n", p);
    
    assert(0);
}

extern "C" void nsc_wakeup()
{
    assert( get_stack_id() < stacks.size() );

    stacks[ get_stack_id() ]->wakeup(NULL);
}
