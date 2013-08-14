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

#include <vector>
#include <list>
#include <map>

#include "sim_interface.h"
#include "sim_errno.h"
#include "num_stacks.h"

extern "C" {
#include "lwip/tcp.h"
}

extern "C" {
    err_t nsc_accept_callback(void *arg, struct tcp_pcb *newpcb, err_t err);
    err_t nsc_connect_callback(void *arg, struct tcp_pcb *tpcb, err_t err);
    err_t nsc_recv_callback(void *arg, struct tcp_pcb *tpcb, struct pbuf *p, 
            err_t err);
    err_t nsc_if_init_callback(struct netif *ifp);
    err_t nsc_if_output_callback(struct netif *ifp, struct pbuf *p, 
            struct ip_addr *ipaddr);

    int get_stack_id();
    int new_stack_id();
    int get_num_stacks();
    void set_stack_id(int id);
    int nsc_convert_syserr_to_nscerr(int error);
}


// ------------------------------------------------------------------------
// globals
class lwIPStack;

std::vector<lwIPStack *> stacks;

// ------------------------------------------------------------------------

class lwIPStack : public INetStack
{
private:
    IInterruptCallback  *interrupt_callback;
    ISendCallback       *send_callback;

    class TCPSocket : public INetStreamSocket
    {
    private:
        lwIPStack *parent;

        struct tcp_pcb *pcb;

        bool connecting;
        bool connected;
        int recved;

    public:
        TCPSocket(lwIPStack *p)
            : parent(p), connecting(false), connected(false), recved(0)
        {
            set_stack_id(parent->stack_id);
            pcb = tcp_new();
            assert(pcb);

            tcp_recv(pcb, nsc_recv_callback);

            parent->tcp_sockets[ pcb ] = this;
        }

        TCPSocket(lwIPStack *p, struct tcp_pcb *npcb)
            : parent(p), pcb(npcb), connecting(false), connected(true),
              recved(0)
        {
            set_stack_id(parent->stack_id);
            tcp_recv(pcb, nsc_recv_callback);

            parent->tcp_sockets[ pcb ] = this;
        }

        virtual ~TCPSocket()
        {
            
        }

        virtual void connect(const char *dest, int dest_port)
        {
            if(!connecting) {
                struct ip_addr dest_addr;
                inet_aton(dest, (struct in_addr *)&dest_addr.addr);
                set_stack_id(parent->stack_id);
                tcp_connect(pcb, &dest_addr, (u16_t)dest_port, 
                        nsc_connect_callback);
                connecting = true;

                // Not needed:
                //tcp_output(pcb);
            }
        }
        
        virtual void disconnect()
        {
            set_stack_id(parent->stack_id);
            tcp_close(pcb);
        }

        virtual void listen(int port)
        {
            set_stack_id(parent->stack_id);
            tcp_bind(pcb, NULL, port);
            // The next returns a tcp_pcb: need to do some research on how
            // it works; does it actually accept a connection as well? It
            // shouldn't, as there is a tcp_accept
            pcb = tcp_listen(pcb);
            tcp_accept(pcb, nsc_accept_callback);
        }
        
        virtual int accept(INetStreamSocket **sock)
        {
            set_stack_id(parent->stack_id);

            if(parent->accepted.size() > 0) {
	        fprintf(stderr, "accept ok\n");
                *sock = parent->accepted.front();
                parent->accepted.pop_front();
                return 0;
            }
            
            return NSC_EAGAIN;
        }
        
        virtual int send_data(const void *data, int datalen)
        {
            int error;

            if (!connected)
                return NSC_ENOTCONN;

            set_stack_id(parent->stack_id);
            if (datalen > 0xFFFF)
              datalen = 0xFFFF; // tcp_write() length argument is uint16_t
            error = tcp_write(pcb, data, datalen, 1);

            if(error == ERR_OK)
                return datalen;

            if(error == ERR_MEM) {
                // Chances are that datalen is too large to fit in the send
                // buffer. If it is really large (larger than a typical MSS,
                // say), we should try segmenting the data ourselves.
                int written = 0;

                if(datalen < 1460)
                   return NSC_EAGAIN;

                do {
                    error = tcp_write(pcb, ((const char *)data) + written,
                            1460, 1);
                    if(error == ERR_OK) {
                        written += 1460;
                        datalen -= 1460;
		    }
                } while(error == ERR_OK && datalen >= 1460);

                if(written > 0)
                    return written;
            }
            // Q: should we call tcp_output() now?
            // try calling tcp_output() at this point and see how the
            // behaviour changes
            // A: It doesn't seem to change too much. Everything still seems
            // to work.
            //tcp_output(pcb);
            return nsc_convert_syserr_to_nscerr(error);
        }
        
        // XXX: we don't actually copy the data back into the simulator for
        // this stack. This is fine for now, but maybe someday later we will
        // want this functionality.
        virtual int read_data(void *buf, int *buflen)
        {
	    if (recved == 0)
               return NSC_EAGAIN;
            if(*buflen >= recved) {
                *buflen = recved;
                recved = 0;
            } else {
                recved -= *buflen;
            }
            return 0;
        }
        
        virtual int setsockopt(char *optname, void *val, size_t valsize)
        {
            int v = *(int *)val;

            if(valsize != 4)
                return 0;

            if(strcmp(optname, "SO_SNDBUF") == 0) {
//                pcb->snd_buf = (u16_t)v;
                fprintf(stderr, "Setting snd_buf to: %d\n", v);
            }
            else if(strcmp(optname, "SO_RCVBUF") == 0) {
//                pcb->rcv_wnd = (u16_t)v;
                fprintf(stderr, "Setting rcv_wnd to: %d\n", v);
            }
            else {
                fprintf(stderr, "Unsupported setsockopt in lwip.\n");
            }
            
            return 0;
        }

        virtual void print_state(FILE *) 
        {
            assert(0);
        }
        
        virtual bool is_connected()
        {
            return connected;
        }
        
        virtual bool is_listening()
        {
            return pcb->state == LISTEN;
        }

        virtual bool get_var(const char *var, char *result, int rlen)
        {
            if       (strcmp(var, "srtt_") == 0) {
                // no srtt
                snprintf(result, rlen, "%u", (unsigned int)(pcb->sa >> 3));
                return 1;
            } else if(strcmp(var, "rttvar_") == 0) {
                // From what I can tell, lwip uses the following:
                //srtt == pcb->sa >> 3
                //rttvar == pcb->sv >> 2
                // Nice variable names, eh?
                snprintf(result, rlen, "%u", (unsigned int)(pcb->sv >> 2));
                return 1;
            } else if(strcmp(var, "cwnd_") == 0) {
                snprintf(result, rlen, "%hu", pcb->cwnd);
                return 1;
            } else if(strcmp(var, "ssthresh_") == 0) {
                snprintf(result, rlen, "%hu", pcb->ssthresh);
                return 1;
            } else if(strcmp(var, "seqno_") == 0) {
                snprintf(result, rlen, "%u", (unsigned int)pcb->snd_nxt);
                return 1;
            } else if(strcmp(var, "ack_") == 0) {
                snprintf(result, rlen, "%u", (unsigned int)pcb->rcv_nxt);
                return 1;
            } else if(strcmp(var, "rxtcur_") == 0) {
                snprintf(result, rlen, "%hu", pcb->rto);
                return 1;
            }
            return 0;
        }

        // ----
        err_t connect_callback(void *arg, err_t err)
        {
            connected = true;
            return ERR_OK;
        }

        void recv_callback(struct pbuf *p)
        {
            recved += p->len;
            tcp_recved(pcb, p->len);
        }

    };

    friend class TCPSocket;

    typedef std::map<void *, TCPSocket *> TCPSocketMap;
    TCPSocketMap tcp_sockets;

    std::list<TCPSocket *> accepted;
    int stack_id;
    struct netif *interface;

public:
    lwIPStack(ISendCallback *s, IInterruptCallback *i)
        : interrupt_callback(i), send_callback(s)
    {
        stack_id = new_stack_id();
        
        if(stack_id <= (signed)stacks.size()) {
            stacks.resize(stack_id + 1);
        }

        stacks[stack_id] = this;
    }

    virtual ~lwIPStack()
    {
    }
    
    virtual void init(int hz_)
    {
        // Only support an hz_ of 4 for now.
        assert(hz_ == 4);
        set_stack_id(stack_id);
        netif_init(); // XXX: do we need to call this?
        tcp_init();
    }

    virtual void if_receive_packet(int if_id, const void *data, int datalen)
    {
        // we only support 1 interface at the moment
        struct pbuf *p;
        
        assert(if_id == 0);

        set_stack_id(stack_id);

        p = pbuf_alloc(PBUF_RAW, datalen, PBUF_RAM);
        memcpy(p->payload, data, datalen);

        interface->input(p, interface);
    }

    virtual void if_send_packet(const void *data, int datalen)
    {
        // this function is not needed
        assert(0);
    }

    virtual void if_send_finish(int ifid)
    {
        // no-op
    }

    virtual void if_attach(const char *addr, const char *mask, int mtu)
    {
        struct netif *ifp = new struct netif;
        struct ip_addr ipaddr, netmask, gw;

        inet_aton(addr, (struct in_addr *)&ipaddr.addr);
        inet_aton(mask, (struct in_addr *)&netmask.addr);

        assert(mtu == 1500);
        // Sorry, but MTU/MSS is all hardcoded in lwIP. Can't easily set it
        // programmatically - it opens a whole kettle of worms.
        //
        // Better to just use an MTU of 1500 I'm afraid!

        // Make up a default gw:
        inet_aton(addr, (struct in_addr *)&gw.addr);
        gw.addr = htonl( ntohl(gw.addr) + 1 );

        set_stack_id(stack_id);
        netif_add(ifp,    // interface
                &ipaddr,  // address
                &netmask, // netmask
                &gw,      // gateway - we don't know this yet!
                NULL,     // state - driver specific state
                nsc_if_init_callback, // init function 
                ip_input); // input function
        netif_set_up(ifp);

        ifp->output = nsc_if_output_callback;
        ifp->name[0] = 's';
        ifp->name[1] = 'a';
        ifp->mtu = mtu;
        ifp->num = get_stack_id();

        interface = ifp;
    }

    virtual void add_default_gateway(const char *addr)
    {
        struct ip_addr gw;

        assert(interface);

        inet_aton(addr, (struct in_addr *)&gw.addr);

        set_stack_id(stack_id);
        netif_set_gw(interface, &gw);

        // This seems to set the real default gateway
        netif_set_default(interface);
    }

    virtual int get_id()
    {
        return stack_id;
    }

    virtual const char *get_name()
    {
        return "lwip";
    }

    virtual int get_hz()
    {
        return 4;
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
        tcp_tmr();
    }

    virtual void nsi_interrupt()
    {
        // Not needed
    }

    virtual void wakeup(void *)
    {
        // Not needed
    }
    
    virtual void increment_ticks()
    {
        // do we need timing information? 
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

    virtual void buffer_size(int size)
    {
        // Don't think changing this is supported. Maybe should check
        // up on this further.
    }


    // ----
    err_t accept_callback(void *arg, struct tcp_pcb *newpcb, err_t err)
    {
        TCPSocket *sock = new TCPSocket(this, newpcb);

        accepted.push_back( sock );
	fprintf(stderr, "accept callback\n");
        return ERR_OK;
    }
    
    err_t connect_callback(void *arg, struct tcp_pcb *tpcb, err_t err)
    {
        TCPSocketMap::iterator i = tcp_sockets.find(tpcb);
        
        if(i != tcp_sockets.end()) {
            return i->second->connect_callback(arg, err);
        } 

        assert(0 && "Unknown socket connect_callback ?");
        return -1;
    }

    err_t recv_callback(void *arg, struct tcp_pcb *tpcb, struct pbuf *p, 
            err_t err)
    {
        if(!p) {
            return ERR_OK; // We got a FIN in this case
        }

        TCPSocketMap::iterator i = tcp_sockets.find(tpcb);
        
        if(i != tcp_sockets.end()) {
            i->second->recv_callback(p);
        }
        
        tcp_recved(tpcb, p->len);
        pbuf_free(p);
        return ERR_OK;
    }

    err_t if_output_callback(struct netif *ifp, struct pbuf *p,
        struct ip_addr *ipaddr)
    {
        unsigned char buf[4096];
        unsigned int len = p->tot_len;
        unsigned char *bufp = buf;

        assert( len <= sizeof(buf) );
        
        do {
            memcpy(bufp, p->payload, p->len);
            bufp += p->len;
            p = p->next;
        } while(p);

        send_callback->send_callback(buf, len);

        return ERR_OK;
    }
};

CREATE_STACK_FUNC(send_callback, int_callback, rand_func)
{
    // should maybe use rand_func at some point
    // except lwIP doesn't seem to need random numbers; initial sequence
    // numbers don't use them anyway...
    return new lwIPStack(send_callback, int_callback);
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

// ------------------------------------------------------------------------
extern "C" err_t nsc_accept_callback(void *arg, struct tcp_pcb *newpcb, 
        err_t err)
{
    assert(get_stack_id() < (signed)stacks.size());

    return stacks[ get_stack_id() ]->accept_callback(arg, newpcb, err);
}

extern "C" err_t nsc_connect_callback(void *arg, struct tcp_pcb *tpcb, 
        err_t err)
{
    assert(get_stack_id() < (signed)stacks.size());

    return stacks[ get_stack_id() ]->connect_callback(arg, tpcb, err);
}

extern "C" err_t nsc_recv_callback(void *arg, struct tcp_pcb *tpcb,
        struct pbuf *p, err_t err)
{
    assert(get_stack_id() < (signed)stacks.size());

    return stacks[ get_stack_id() ]->recv_callback(arg, tpcb, p, err);
}

extern "C" err_t nsc_if_init_callback(struct netif *ifp)
{
    return ERR_OK;
}

extern "C" err_t nsc_if_output_callback(struct netif *ifp, struct pbuf *p,
        struct ip_addr *ipaddr)
{
    assert(get_stack_id() < (signed)stacks.size());

    return stacks[ get_stack_id() ]->if_output_callback(ifp, p, ipaddr);
}
