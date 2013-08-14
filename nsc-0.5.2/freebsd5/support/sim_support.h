#ifndef _SIM_SUPPORT_H__
#define _SIM_SUPPORT_H__
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

//struct ifnet;
struct in_addr;
struct socket;
struct callout;
struct mbuf;

class BSDStack : public INetStack {
    private:
        int stack_id;
        ISendCallback *send_callback;
        IInterruptCallback *interrupt_callback;
        std::vector<void *> interfaces; // MXRK

    public:
        BSDStack(ISendCallback *, IInterruptCallback *);
        virtual ~BSDStack();

        class UDPSocket : public INetDatagramSocket {
            BSDStack *parent;
            struct in_addr dest; // MXRK
            int dest_port;
            void *so; // MXRK

            UDPSocket(BSDStack *);
        public:
            virtual ~UDPSocket();
            virtual void set_destination(const char *, int);
            virtual void send_data(const void *data, int datalen);

            friend class BSDStack;
        };

        class TCPSocket : public INetStreamSocket {
            BSDStack *parent;
            void *so; // MXRK
            bool listening;

            TCPSocket(BSDStack *);

        public:
            TCPSocket() {}

            virtual ~TCPSocket();
            virtual void connect(const char *, int);
            virtual void disconnect();
            virtual int getpeername(struct sockaddr *, size_t *len);
            virtual int getsockname(struct sockaddr *, size_t *len);
            virtual void listen(int);
            virtual int accept(INetStreamSocket **);
            virtual int send_data(const void *data, int datalen);
            virtual int read_data(void *buf, int *buflen);
            virtual int setsockopt(char *optname, void *val, size_t valsize);
            virtual void print_state(FILE *);
            virtual bool is_connected();

            virtual bool is_listening() { return listening; }

            virtual bool get_var(const char *, char *, int);

            friend class BSDStack;
        };

        friend class UDPSocket;
        friend class TCPSocket;

        virtual class UDPSocket *new_udp_socket() {
            return new UDPSocket(this);
        }

        virtual class TCPSocket *new_tcp_socket() {
            return new TCPSocket(this);
        }

        virtual void init(int);
        virtual void if_receive_packet(int if_id, const void *data, int datalen);
        virtual void if_send_packet(const void *data, int datalen);	
        virtual void if_send_finish(int ifid);
        virtual void if_attach(const char *addr, const char *mask, int mtu);

        virtual void add_default_gateway(const char *);

        virtual const char *get_name() { return "freebsd5"; }
        virtual int get_id() { return stack_id; }
        virtual int get_hz() { return 100; }
        virtual int get_ticks() { return 0; }


        virtual void timer_interrupt();
        virtual void wakeup(void *);
        virtual void increment_ticks();
        virtual void buffer_size(int);
        virtual int sysctl(const char *sysctl_name, void *oldval, 
                size_t *oldlenp, void *newval, size_t newlen);
        virtual int sysctl_set(const char *name, const char *value);
        virtual int sysctl_get(const char *name, char *value, size_t len);
        virtual void set_diagnostic(int);
};

#endif // _SIM_SUPPORT_H__
