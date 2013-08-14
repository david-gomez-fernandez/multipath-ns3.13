/*

  Network Simulation Cradle ns-2 agent
 
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
#ifndef NS_NSC_H
#define NS_NSC_H

#include "agent.h"
#include "trafgen.h"
#include "packet.h"
#include <string>
#include <list>

class NSCAgent;
class ISendCallback;
class IInterruptCallback;

class SoftInterruptTimer : public TimerHandler {
public:
    SoftInterruptTimer(NSCAgent *b) 
        : b_(b), delay_(0.01)
        { 
            sched(delay_);
        }
    virtual void expire(Event *e);
    void set_delay(double delay) { delay_ = delay; resched(delay_); }

protected:
    NSCAgent *b_;
    double delay_;
};

class WakeupTimer : public TimerHandler {
public:
    WakeupTimer(NSCAgent *b) : b_(b)
    {}

    virtual void expire(Event *e);
protected:
    NSCAgent *b_;
};

class NSCAgent 
    : public Agent, ISendCallback, IInterruptCallback 
{
public:
    NSCAgent(const char *);
    virtual ~NSCAgent();

    virtual void sendmsg(int nbytes, const char *flags = 0)
    {
        sendmsg(nbytes, NULL, flags);
    }
    virtual void sendmsg(int nbytes, AppData* data, const char *flags = 0);
    virtual void recv(Packet* pkt, Handler*);
    virtual int command(int argc, const char*const* argv);

    virtual void software_interrupt();
    virtual void send_callback(const void *data, int datalen);
    virtual void wakeup();
    virtual void gettime(unsigned int *, unsigned int *);

    void wakeup_expire();
    void increment_ticks() { stack_->increment_ticks(); }
    void sendlow(int);
    void readlow();

protected:
    SoftInterruptTimer soft_timer_;
    WakeupTimer wakeup_timer_;
    INetStack *stack_;
    INetStreamSocket *con_, *con2_;
    long long to_snd_;
    int packet_size_;
    int wnd_size_;
    bool packet_dump_enabled_;
    bool has_received_;
    bool close_on_empty_;
    enum { InfiniteBuffers, NoBuffers } send_type_;
    unsigned int bytes_sent_, bytes_recv_;
    pcap_dumper_t *pdump_;
    pcap_t        *pcap_;
    std::list<int> precon_sndbuf_;

    void dump(const void *d, int size);

    void LoadStack(const char *name);

    bool get_connection_var(const char *var, char *buf, int buflen);

public:
    // command() functions:
    void init_stack(int hz);
    void add_interface(const char *, const char *);
    void set_default_gw(const char *);
    void tcp_connect(const char *, int);
    void tcp_listen(int);
};

/** Designed as a drop-in replacement for Agent/TCP and Agent/TCPSink. It's
 * really more of a replacement for Agent/TCP/FullTcp, as it requires a
 * 'listen' command like that agent to function. */
class NSCSimpleAgent : public NSCAgent
{
private:
    bool initialised_;
    bool connected_;
    std::string stack_type_;
    std::list<std::string> to_set_cmd_, to_set_val_;
    
    void make_ip_addr(char *, unsigned int, int);
    void do_init();
    void do_connect();
    void do_listen();
    void bind_tcp_vars();
public:
    NSCSimpleAgent(const char *);
    virtual void sendmsg(int nbytes, const char *flags = 0);
    virtual void recv(Packet* pkt, Handler*);
    virtual int command(int argc, const char*const* argv);
    virtual void software_interrupt();
    virtual int delay_bind_dispatch(const char *varName, 
            const char *localName, TclObject *tracer);
};


#endif
