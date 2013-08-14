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


  $Id$
  
  */

/* This file is pretty ugly. I'd try to avoid reading it if I were you. */

#include <vector>
#include <netinet/in.h>
#include <sys/types.h>
#include <stdio.h>
#include <map>
#include <limits.h>
#include <errno.h>
#include <dlfcn.h>
#include <stdlib.h>

#include <sstream>
#include <string>
#include <iterator>

extern "C" {
#include <pcap.h>
}

#include "sim_interface.h"
#include "nsc.h"

#include "rtp.h"
#include "random.h"
#include "address.h"
#include "ip.h"
#include "node.h"

//#define DBG_MSGS 1
#define UNUSED __attribute__((unused))

/* functions from the stack and supporting code... These are mostly legacy
 * and aren't really used anymore. */
extern "C" {
    int external_rand()
    {
        return (int)(Random::uniform() * INT_MAX);
    }

    void decode_packet(void *);
}

/* New class that allows us to specify the shared library to load as a 
 * constructor argument. This means new stacks can be used without having
 * to recompile ns-2. */
static class GenericNSCAgentClass : public TclClass {
    public:
        GenericNSCAgentClass() : TclClass("Agent/NSC") {}
        TclObject* create(int argc, const char * const * argv) {
            return new NSCAgent(NULL);
        }
} class_generic_nsc_agent;


//-----

void SoftInterruptTimer::expire(Event *e)
{
    b_->increment_ticks();
    b_->software_interrupt();

    // Make it continue raising interrupts
    resched(delay_);
}

void WakeupTimer::expire(Event *e)
{
    b_->wakeup_expire();
}
//-----

int auto_conf_ = 1;

NSCAgent::NSCAgent(const char *libname)
    : Agent(PT_TCP), 
    soft_timer_(this), wakeup_timer_(this), stack_(NULL), con_(NULL), 
    con2_(NULL), to_snd_(0), packet_size_(1500), wnd_size_(20), 
    packet_dump_enabled_(false), has_received_(false), close_on_empty_(false),
    send_type_(NoBuffers), bytes_sent_(0), bytes_recv_(0), pdump_(NULL), 
    pcap_(NULL)
{
    bind("bytes_", &bytes_recv_);
    bind_bool("autoConf_", &auto_conf_);

    if(auto_conf_) {
        bind("packetSize_", &packet_size_);
        bind("window_", &wnd_size_);
    }

    if(libname)
        LoadStack(libname);
}

NSCAgent::~NSCAgent()
{
    if(pcap_) {
        pcap_dump_close(pdump_);
        pcap_close(pcap_);
    }
    delete con_;
    delete con2_;
    delete stack_;
}

void NSCAgent::LoadStack(const char *stackname)
{
    void *handle = NULL;
    FCreateStack create = NULL;

    handle = dlopen(stackname, RTLD_NOW);
    if(!handle) {
        fputs(dlerror(), stderr);
        fputs("\n", stderr);
        exit(1);
    }

    create = (FCreateStack)dlsym(handle, "nsc_create_stack");
    if(!create) {
        fputs(dlerror(), stderr);
        fputs("\n", stderr);
        exit(1);
    }

    stack_ = create(this, this, external_rand);
    
}

/** This is an application attempting to send a message. It is not too hard
 * to write to a socket, but there is one big question to answer here:
 *
 * What do we do when the write fails for whatever reason? (not connected,
 * socket buffer full, etc.)
 *
 * Network applications work a couple of different ways: by blocking on the
 * write, which is not an option here, or by having an EAGAIN returned as a
 * failure, which also is not an option here.
 *
 * So what do we do? We can buffer an infinite amount of data (the actual
 * data written is never really important in simulation, a number for the
 * amount of bytes to be written is all we need for a buffer) but is that the
 * correct model? In somes cases yes, but not always.
 *
 * This needs to be able to be controlled of course. So setting what is
 * going on via Tcl is what we want to be able to do. We should check what
 * other ns-2 TCP agents do, but our real goal at the moment is to make
 * things work like real applications.
 *
 * Now, we do get some information back from the stack: when wakeup is
 * called, we know we might be able to read or write data. This would mean
 * the application would normally wake up from blocking or whatever. So we
 * can try and write what is in our buffer at that time.
 */
void NSCAgent::sendmsg(int nbytes, AppData* data, const char* flags)
{
    if(nbytes && (data == NULL)) {
        /* Ok, the application is VERY simple and wants us to send nbytes
         * bytes, but didn't give us any data to write. Guess we need to
         * create some outselves for the stack to sort out. 
         *
         * This always seems to be the case.
         */
    }

    if(data != NULL) {
        fprintf(stderr, "Application data!\n");
    }

#ifdef DBG_MSGS
    fprintf(stderr, "sendmsg: %d %p %s\n", nbytes, data, flags);
#endif

    if(flags && strcmp(flags, "MSG_EOF") == 0)
        close_on_empty_ = true;

    if( !((con_ && con_->is_connected()) || (con2_ && con2_->is_connected())) )
    {
#ifdef DBG_MSGS
        fprintf(stderr, "Attempt to send data when not connected!\n");
#endif

        // Don't let it grow to large for a TCP flow that never gets around
        // to connecting.
        if(precon_sndbuf_.size() > 20) {
            precon_sndbuf_.back() += nbytes;
        } else {
            precon_sndbuf_.push_back(nbytes);
        }
        return;
    }

    if(send_type_ == InfiniteBuffers)
        to_snd_ += nbytes;

    
    sendlow(nbytes);
}

void NSCAgent::sendlow(int datalen)
{
    /* Send to stack here, it should reach us via a callback function 
     * later which will be called by the network stack code. */
    size_t packetsize = datalen;
    INetStreamSocket *sock = NULL;
    const size_t buf_size = 65535;
    static unsigned char buf[buf_size];

    if(packetsize > buf_size) {
        sendlow(buf_size);
        sendlow(datalen - buf_size);
        return;
    }

#ifdef DBG_MSGS
    double local_time = Scheduler::instance().clock();
    fprintf(stderr, "sendlow: %f %d\n", local_time, datalen);
#endif

    if(con_ && con_->is_connected()) sock = con_;
    else if(con2_ && con2_->is_connected()) sock = con2_;
    else {
        return;
    }

    if(datalen == -1) {
        // Send indefinitely
        packetsize = datalen = 1400;
        if(send_type_ == InfiniteBuffers) {
            to_snd_ = INT_MAX;
        } else {
            // What do we do here? Don't have a quick way of sending forever
            // here.
            // TODO: look into this situation some more.
            fprintf(stderr, "Sending indefinitely by sending -1 bytes not "
                    "supported in this mode of NSCAgent.\n");
            return;
        }
    }


    int error = 1;

    /* Exactly how we model a sending application is a good question...
       I don't think there is a particularly good answer here. Should
       probably have the option of various types. NoBuffers == the way
       it is done in iperf-hacked.

       InfiniteBuffers is the way it is done... in something. I know
       there is a reason I implemented it.
       */
    switch(send_type_) {
        case InfiniteBuffers:
            {
                do {
                    int size = packetsize;
                    if(to_snd_ >= 0 && size > to_snd_)
                        size = to_snd_;
                    error = sock->send_data(buf, size);
                    if(error > 0) {
#ifdef DBG_MSGS
                        fprintf(stderr, "Sent %d bytes. (of %lld)\n", error, 
                                to_snd_);
#endif
                        to_snd_ -= error;
                        error = 0;
                    }
                } while(error == 0 && to_snd_ > 0);

                if(close_on_empty_ && to_snd_ <= 0) {
#ifdef DBG_MSGS
                    fprintf(stderr, "%f closing due to close_on_empty_\n",
                            Scheduler::instance().clock());
#endif
                            
                    // This isn't well tested.
                    delete con_; // closes socket
                    con_ = stack_->new_tcp_socket();

                    Tcl::instance().evalf("%s done", this->name());
                }
            }
            break;

        case NoBuffers:
            {
                error = sock->send_data(buf, packetsize);
            }
            break;
    }

#ifdef DBG_MSGS
    fprintf(stderr, "Error: %d '%s'\n", error,
            error == 0 ? "" : strerror(error));
#endif


}

/** Dumps a packet out to (pcap) file. This is for making packet traces. */
void NSCAgent::dump(const void *d, int size)
{
    const int snaplen = 400;

    if(!pcap_) {
        char fname[256];
        sprintf(fname, "node-%s-%d.pcap", stack_->get_name(),
                stack_->get_id());

        pcap_ = pcap_open_dead(DLT_RAW, snaplen);
        pdump_ = pcap_dump_open(pcap_, fname);
        assert(pcap_ && pdump_);
    }

    double local_time = Scheduler::instance().clock();
    struct pcap_pkthdr header;
    unsigned char *user = (unsigned char *)pdump_;

    header.ts.tv_sec = (unsigned)local_time;
    header.ts.tv_usec = (unsigned)(
            (local_time - (double)(unsigned)local_time) * 1000000.);
    header.caplen = size > snaplen ? snaplen : size;
    header.len = size;

    pcap_dump(user, &header, (const u_char *)d);

    pcap_dump_flush(pdump_);
}

/** A packet has been received from the wire. Pass on to the network stack
 * then free the packet. 
 *
 * The problem in this function is that we do not currently know what
 * interface a packet arrives from. This makes receiving the packet in the
 * stack harder; it needs to know what interface the packet came from.
 *
 * For some reason the mbuf has an rcvif which needs to be set to an
 * interface. Should investigate this some more; I wonder how important it
 * is. @todo Look into allowing more than one interface per stack via
 * checking necessity of rcvif in mbufs in fake_ether_input.
 */
void NSCAgent::recv(Packet* pkt, Handler*)
{
    AppData *data = pkt->userdata();
    PacketData *pdata = dynamic_cast<PacketData *>(data);

#ifdef DGB_MSGS
    fprintf(stderr, "%d] NSCAgent::recv time: %lf   ", 
            stack->get_id(),
            Scheduler::instance().clock());
#endif

    has_received_ = true;

    if(packet_dump_enabled_)
        dump(pdata->data(), pdata->size());
    /* The problem here is we don't know what interface it came in on. We
     * always assume interface 0 at the moment; this limits us to one 
     * interface per stack. */
    stack_->if_receive_packet(0, pdata->data(), pdata->size() );

    // The packet needs to be freed here. I believe this
    // frees the data buffer in the packet too. (it must, otherwise we would
    // have huge memory leaks)
    Packet::free(pkt);

    //wakeup_expire();
    if(to_snd_ > 0) {
        sendlow(to_snd_ > packet_size_ ? packet_size_ : to_snd_);
    }

    // haxor, want to check this:
    readlow();
}

bool NSCAgent::get_connection_var(const char *var, char *buf, int buflen)
{
    if(con2_)
        return con2_->get_var(var, buf, buflen);
    if(con_)
        return con_->get_var(var, buf, buflen);
    
    return false;
}


int NSCAgent::command(int argc, const char*const* argv)
{
    int ret;
    Tcl& tcl = Tcl::instance();

#ifdef DBG_MSGS
    fprintf(stderr, "NSCAgent::command(%d, ", argc);
    for(int i = 0; i < argc; i++) {
        fprintf(stderr, "%s", argv[i]);
        if(i < argc-1)
            fprintf(stderr, ", ");
    }
    fprintf(stderr, ")\n");
#endif
    if (argc == 2) {
        if (strcmp(argv[1], "init-stack") == 0) {
            init_stack(stack_->get_hz()); 

            return TCL_OK;
        } else if (strcmp(argv[1], "tcp-disconnect") == 0) {
            con_->disconnect();
            return TCL_OK;
        } else if (strcmp(argv[1], "stats-clear") == 0) {
            bytes_recv_ = 0;
            bytes_sent_ = 0;
            return TCL_OK;
        } else if (strcmp(argv[1], "tcp-new-socket") == 0) {
            // Temporary. Really need a better solution here
            if(con_) delete con_;
            con_ = stack_->new_tcp_socket();
            return TCL_OK;
        } else if (strcmp(argv[1], "enable-packet-dump") == 0) {
            packet_dump_enabled_ = true;
            return TCL_OK;
        } else if (strcmp(argv[1], "show-config") == 0) {
            stack_->show_config();
            return TCL_OK;
        } else if (strcmp(argv[1], "flush-packet-dump") == 0) {
            assert(packet_dump_enabled_);
            pcap_dump_flush(pdump_);
            return TCL_OK;
        }
    } else if (argc == 3) {
        if (strcmp(argv[1], "load-stack") == 0) {
            LoadStack(argv[2]);
            return TCL_OK;
        }
        else if (strcmp(argv[1], "nsc_get") == 0) {
            char buf[512];
            int buflen = 511;
            if(strcmp(argv[2], "window_") == 0) {
                // TODO
            } else if(strcmp(argv[2], "packetSize_") == 0) {
                tcl.resultf("%d", packet_size_); 
            } else if(
                        strcmp(argv[2], "srtt_") == 0 ||
                        strcmp(argv[2], "rttvar_") == 0 ||
                        strcmp(argv[2], "backoff_") == 0 ||
                        strcmp(argv[2], "cwnd_") == 0 ||
                        strcmp(argv[2], "seqno_") == 0 ||
                        strcmp(argv[2], "ack_") == 0 ||
                        strcmp(argv[2], "ssthresh_") == 0 ||
                        strcmp(argv[2], "rxtcur_") == 0
                     ) 
            {
                if(get_connection_var(argv[2], buf, buflen)) {
                    tcl.result(buf);
                    return TCL_OK;
                } 
                tcl.resultf("Variable '%s' unknown!", argv[2]);
                return TCL_ERROR;
            }
            tcl.resultf("%f", -1.0f);
            return TCL_OK;
        } else if (strcmp(argv[1], "init-stack") == 0) {
            int hz = atoi(argv[2]);
            init_stack(hz);

            return TCL_OK;
        } else if (strcmp(argv[1], "print") == 0) {
            printf("%s", argv[2]);
            return TCL_OK;
        } else if (strcmp(argv[1], "tcp-listen") == 0) {
            tcp_listen(atoi(argv[2]));
            return TCL_OK;
        } else if (strcmp(argv[1], "default-gw") == 0) {
            set_default_gw(argv[2]);
            return TCL_OK;
        } else if (strcmp(argv[1], "send-type") == 0) {
            if (strcmp(argv[2], "InfiniteBuffers") == 0) {
                send_type_ = InfiniteBuffers;
                return TCL_OK;
            } else if (strcmp(argv[2], "NoBuffers") == 0) {
                send_type_ = NoBuffers;
                return TCL_OK;
            }
        } else if (strcmp(argv[1], "buffer-size") == 0) {
            stack_->buffer_size(atoi(argv[2]));
            return TCL_OK;
        } else if (strcmp(argv[1], "set-diagnostic") == 0) {
            stack_->set_diagnostic(atoi(argv[2]));
            return TCL_OK;
        }
    } else if (argc == 4) {
        if (strcmp(argv[1], "nsc_set") == 0) {
            fprintf(stderr, "NSC: %s %s %s %s\n",
                    argv[0],argv[1],argv[2],argv[3]);
	      if(strcmp(argv[2], "window_") == 0) {
                int val = atoi(argv[3]), error = 0;

                val *= packet_size_ - 40;

                //fprintf(stderr, "NSC: set window_ to %d bytes.\n", val);
                
                if(con2_) {
                    error = con2_->setsockopt("SO_SNDBUF", &val, sizeof val);
                    error |= con2_->setsockopt("SO_RCVBUF", &val, sizeof val);
                }
                else {
                    error = con_->setsockopt("SO_SNDBUF", &val, sizeof val);
                    error |= con_->setsockopt("SO_RCVBUF", &val, sizeof val);
                }
                if(error != 0)
                    fprintf(stderr, "setsockopt: error %d\n", error);

                return TCL_OK;
            } else if(strcmp(argv[2], "packetSize_") == 0) {
                packet_size_ = strtol(argv[3], (char **)NULL, 10);
                if(con_ || con2_) {
                    tcl.resultf("Setting packetSize_ ignored due to "
                            "connection already being up.");
                    return TCL_ERROR;
                }
                return TCL_OK;
            } else
            {
                tcl.resultf("Cannot set '%s'!", argv[2]);
                return TCL_ERROR;
            }
            return TCL_OK;
        } else if (strcmp(argv[1], "send") == 0) {
            PacketData* data = new PacketData(1 + strlen(argv[3]));
            strcpy((char*)data->data(), argv[3]);
            sendmsg(atoi(argv[2]), data);
            return (TCL_OK);
        } else if (strcmp(argv[1], "add-interface") == 0) {
            add_interface(argv[2], argv[3]);
            return TCL_OK;
        } else if (strcmp(argv[1], "tcp-connect") == 0) {
            tcp_connect(argv[2], atoi(argv[3]));
            return TCL_OK;
        } else if (strcmp(argv[1], "setsockopt") == 0) {
            int error = 0;
            int val = atoi(argv[3]); // only support ints for now
            // if we want to support any other sort of setsockopt we'll have
            // to support the different types here

            if(con2_)
                error = con2_->setsockopt((char *)argv[2], &val, sizeof val);
            else	
                error = con_->setsockopt((char *)argv[2], &val, sizeof val);

            if(error != 0)
                fprintf(stderr, "setsockopt: error %d\n", error);

            return TCL_OK;
        } else if (strcmp(argv[1], "sysctl") == 0) {
            /* Bit of a hack to allow this Linux sysctl that uses a string. Should
               really have a more general interface here. */
            if (strcmp(argv[2], "net/ipv4/tcp_congestion_control") == 0) {
                char oldval[1024];
                char newval[1024];

                size_t oldvalsize = sizeof(oldval);

                oldval[0] = 0;

                strncpy(newval, argv[3], 1023);

                int error = stack_->sysctl(argv[2], oldval, &oldvalsize, newval,
                        sizeof(newval));

                // add debugging info
                 printf("sysctl: %s, oldval=%s, newval=%s, error=%d\n",
			argv[2], oldval, newval, error); 

                assert(error == 0);

                return TCL_OK;
            }
            
            int val, oldval;
	    if (strncmp(argv[3], "0x", 2) == 0)
	      val = strtoll(argv[3]+2, (char **)NULL, 16);
	    else
	      val = atoi(argv[3]);
            size_t oldvalsize = sizeof(int);
            int error __attribute__((__unused__)) =
            stack_->sysctl(argv[2], &oldval, &oldvalsize, &val, sizeof(val));
            assert(error == 0);
            return TCL_OK;
        } else if (strcmp(argv[1], "sendmsg") == 0) {
            sendmsg(atoi(argv[2]), argv[3]);
            return TCL_OK;
        }
    } else if (argc == 5) {
        if (strcmp(argv[1], "sendmsg") == 0) {
            PacketData* data = new PacketData(1 + strlen(argv[3]));
            strcpy((char*)data->data(), argv[3]);
            sendmsg(atoi(argv[2]), data, argv[4]);
            return (TCL_OK);
        } else if (strcmp(argv[1], "add-interface") == 0) {
            add_interface(argv[2], argv[3]); 
            return TCL_OK;
        }
	else if (strcmp(argv[1], "sysctl") == 0) {
           unsigned int val[2], oldval[2];
	    if (strncmp(argv[3], "0x", 2) == 0)
	      val[0] = strtoll(argv[3]+2, (char **)NULL, 16);
	    else
	      val[0] = atoi(argv[3]);
	    if (strncmp(argv[4], "0x", 2) == 0)
	      val[1] = strtoll(argv[4]+2, (char **)NULL, 16);
	    else
	      val[1] = atoi(argv[4]);
            size_t oldvalsize = sizeof(oldval);
            int error __attribute__((__unused__)) =
            stack_->sysctl(argv[2], oldval, &oldvalsize, val, sizeof(val));
            assert(error == 0);
            return TCL_OK;	  
	}
    } else if (argc == 6) {
        /* Another hack to support other sysctls. This interface really needs to be
           updated so we no longer need to go this. */
        if (strcmp(argv[1], "sysctl") == 0) {
            if ((strcmp(argv[2], "net/ipv4/tcp_rmem") == 0) ||
                    (strcmp(argv[2], "net/ipv4/tcp_wmem") == 0) ||
                    (strcmp(argv[2], "net/ipv4/tcp_mem") == 0)
               ){

                int oldval[3];
                int newval[3];
                size_t oldvalsize = sizeof(oldval);

                oldval[0] = 0;
                oldval[1] = 0;
                oldval[2] = 0;

                newval[0] = atoi(argv[3]);
                newval[1] = atoi(argv[4]);
                newval[2] = atoi(argv[5]);

                /*
                   char oldval[1024];
                   char newval[1024];
                   size_t oldvalsize = sizeof(oldval);

                   oldval[0] = 0;

                   snprintf(newval,1023,"%d %d
                   %d",atoi(argv[3]),atoi(argv[4]),atoi(argv[5]));
                   */

                int UNUSED error = stack_->sysctl(argv[2], oldval, &oldvalsize, newval,
                        sizeof(newval));

                // add debugging info
                /*fprintf(stderr, "sysctl: %s
                        values=%d,%d,%d\n",argv[2],newval[0],newval[1],newval[2]);
                fprintf(stderr, "sysctl: %s, oldval=%s, newval=%s, error=%d\n",
                argv[2], oldval, newval, error);*/

                assert(error == 0);

                return TCL_OK;
            }
        }
    } 
    
    if (argc > 2 && strcmp(argv[1], "stack_cmd") == 0) {
      // Allows sending arbitrary text commands to a stack
      std::ostringstream oss;
      std::copy(argv + 2, argv + argc, std::ostream_iterator<const char *>(oss, " "));
      std::string str = oss.str();
      str = str.substr(0, str.size() - 1);

      stack_->cmd(str.c_str());

      return TCL_OK;
    }
    ret = (Agent::command(argc, argv));
#ifdef DBG_MSGS
    fprintf(stderr, "Agent::command() finished.\n");
#endif
    return ret;
}

void NSCAgent::gettime(unsigned int *sec, unsigned int *usec)
{
    double time = Scheduler::instance().clock();

    *sec = (unsigned int)time;
    *usec = (unsigned int)((time - (double)*sec) * 1000000.0f);
}

/** This is called once every tick, and is responsible for calling the
 * stacks timer_interrupt routine. For now it also gets the application to
 * read data, but this might not be necessary in the future. */
void NSCAgent::software_interrupt()
{
#ifdef DBG_MSGS
    fprintf(stderr, "%f [%d] NSCAgent::software_interrupt() ticks:%u\n",
            Scheduler::instance().clock(), stack_->get_id(), 
            stack_->get_ticks());
#endif

    while(!precon_sndbuf_.empty()) {
        int n = precon_sndbuf_.front();
        if(con_ && con_->is_connected()) {
            sendlow(n);
        } else if(con2_ && con2_->is_connected()) {
            sendlow(n);
        } else {
#ifdef DBG_MSGS
            fprintf(stderr, "%f Data to send, but not yet connected.\n",
                    Scheduler::instance().clock());
#endif
            break;
        }
        precon_sndbuf_.pop_front();
    }

    // Causes packets to be processed and so on
    stack_->timer_interrupt();

    // Do we need this here? yes.
    readlow();
}

/** This is the application reading data or accepting a connection. It is
 * a pretty ugly function, I'd like it to be a lot more flexible. */
void NSCAgent::readlow()
{
    if(has_received_) {
        int buflen = 1500, err = 1;

        if(con_->is_listening()) {
            if(con_->accept(&con2_) == 0) {
#ifdef DBG_MSGS
                fprintf(stderr, "%d] Got connection\n", stack_->get_id());
#endif
            }
        }


        do {
            PacketData *data = new PacketData(8192);
            buflen = 8192;

            if(con2_) {
                if(con2_->is_connected())
                    err = con2_->read_data(data->data(), &buflen);
                else
                    buflen = 0;
            } else if(con_->is_connected()){
                err = con_->read_data(data->data(), &buflen);
#ifdef DBG_MSGS
#if DBG_MSGS > 2
                con_->print_state(NULL);
#endif
#endif
            } else {
                buflen = 0;
            }

            if(buflen && !err) {
                bytes_recv_ += buflen;
#ifdef DBG_MSGS
                fprintf(stderr, "%f read: %d\n",
                        Scheduler::instance().clock(),
                        buflen);
#endif
            }
            if(buflen && app_ && !err) {
#ifdef DBG_MSGS
                fprintf(stderr, "%f app recv %d bytes\n",
                        Scheduler::instance().clock(),
                        buflen);
#endif

                app_->recv(buflen); // process_data(buflen, data);
                delete data;
            } else if(buflen && !err) {
                // No app....
                delete data;
            } else {
                delete data;
            }

        } while(buflen);

        /* Attempting to accept whenever we do a read is not the nicest way
         * of doing things. I theorise that this will actually slow us down
         * quite a lot in some cases since the accept will create a new
         * socket, attempt to accept to that socket, then delete the socket
         * on a failed accept. How this is modelled is another interaction
         * that needs some thought.
         */
        if(con_->is_listening()) {
            int err = 0;
            INetStreamSocket *sock = NULL;
            err = con_->accept(&sock);
            if(sock != NULL) {
                // Wow....
                con2_ = sock;
                //fprintf(stderr, "%d] w00t! ACCEPT\n", stack.get_id());
            } else {
                //fprintf(stderr, "%d] NO ACCEPT\n", stack.get_id());
            }
        }
        has_received_ = false;
    }
}


/** Called from the stack when a packet needs to be output to the wire. */
void NSCAgent::send_callback(const void *data, int datalen)
{
    Packet* pkt = allocpkt();
    PacketData *pdata = new PacketData(datalen);

    // set the packet size in the ns-2 header. This tells ns-2 how long
    // this packet is supposed it be. Nothing more.
    hdr_cmn::access(pkt)->size() = datalen;

    if(packet_dump_enabled_)
        dump(data, datalen);

    // Performance improvement: copy at most 100 bytes.
    // ahh stuffit. Headers can be ridiculously large in the case of SCTP,
    // it's not worth the buggering around with.
    //if(datalen > 100)
    //    datalen = 100;
    // ------------------------------------------------
    //

    hdr_tcp *th = hdr_tcp::access(pkt);
    assert(th);

    /* The following two structures are from include files on Linux. The
     * license below is specific only to the following two structure
     * definitions. */
/*
 * Copyright (c) 1982, 1986, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 */
    struct nsc_iphdr
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        unsigned int ihl:4;
        unsigned int version:4;
#elif __BYTE_ORDER == __BIG_ENDIAN
        unsigned int version:4;
        unsigned int ihl:4;
#else
# error	"Please fix <bits/endian.h>"
#endif
        u_int8_t tos;
        u_int16_t tot_len;
        u_int16_t id;
        u_int16_t frag_off;
        u_int8_t ttl;
        u_int8_t protocol;
        u_int16_t check;
        u_int32_t saddr;
        u_int32_t daddr;
        /*The options start here. */
    };
    

    struct nsc_tcphdr
    {
        u_int16_t th_sport;		/* source port */
        u_int16_t th_dport;		/* destination port */
        uint32_t th_seq;		/* sequence number */
        uint32_t th_ack;		/* acknowledgement number */
#  if __BYTE_ORDER == __LITTLE_ENDIAN
        u_int8_t th_x2:4;		/* (unused) */
        u_int8_t th_off:4;		/* data offset */
#  endif
#  if __BYTE_ORDER == __BIG_ENDIAN
        u_int8_t th_off:4;		/* data offset */
        u_int8_t th_x2:4;		/* (unused) */
#  endif
        u_int8_t th_flags;
        enum {
            TH_FIN=0x01,TH_SYN=0x02,TH_RST=0x04,TH_PUSH=0x08,TH_ACK=0x10,
            TH_URG=0x20
        };
        u_int16_t th_win;		/* window */
        u_int16_t th_sum;		/* checksum */
        u_int16_t th_urp;		/* urgent pointer */
    };

    nsc_iphdr  *nih = (nsc_iphdr *)(data);
    nsc_tcphdr *nth = (nsc_tcphdr *)( (char *)nih + nih->ihl * 4 );

    //th->tcp_flags_ = nth->th_flags; // ????
    th->hlen_ = nih->ihl * 4 + nth->th_off * 4; // total TCP+IP header length

    /* Try and set the seqno_ field for tracing correctly so we can make nice
     * graphs like the ns-2 test suite and many other simulation scripts do.
     * Note that this is designed to emulate the unidirectional TCP agents,
     * since they are the ones used the most by far. To do this, we need to
     * put the acknowledgement number in the seqno_ field when we see an ACK
     * without any data in it.
     *
     * Note that this whole scheme is screwed in the case we have bidirectional
     * data or anything. In that case we shouldn't rely on this sort of tracing
     * (there are other options available, such as PCAP packet dumping).
     *
     * Also note that 1 packet in the general case will be wrong - the last
     * packet of the 3-way handshake used in connection establishment. If we
     * assume that all data is sent in the direction of the initial connection
     * (the initial SYN), then this last packet of the handshake is the only
     * pure ACK to go in the forward direction. This looks slightly bad on the
     * graph but I don't see any easy way to fix it.
     *
     * -stj2 10 May 2005 
     */
    if(ntohs(nih->tot_len) == th->hlen_ && nth->th_flags & nsc_tcphdr::TH_ACK)
    {
        th->seqno_ = ntohl(nth->th_ack) / (packet_size_ - 40);
        hdr_cmn::access(pkt)->ptype_ = PT_ACK;
    }
    else
        th->seqno_ = ntohl(nth->th_seq) / (packet_size_ - 40);

    // This is only used for FullTcp stuff anyway, nobody bothers using
    // FullTcp.
    th->ackno_ = ntohl(nth->th_ack) / (packet_size_ - 40);

    memcpy(pdata->data(), data, datalen);

    pkt->setdata(pdata);

    // Send to lower level (link layer or whatever)
    target_->recv(pkt);

    // New method: if_send_finish. This should be called by the nic
    // driver code when there is space in it's queue. Unfortunately
    // we don't know whether that is the case from here, so we just
    // call it immediately for now. **THIS IS INCORRECT**. It should
    // only be called when a space becomes free in the nic queue.
    stack_->if_send_finish(0); // XXX: hardcoded if id

    // XXX: Do we need this?
    idle();
}

/** This is called when something interesting happened to a socket. Perhaps
 * a socket can now be written to or read from or something. We cannot
 * directly do things like read or write from the socket, because this is
 * not what happens in the real FreeBSD: it normally puts the application or
 * thread blocking on the socket in question on the run queue.
 *
 * To simulate this behaviour we wait a very small amount of time (this is
 * sort of simulating processing delay) then call wakeup_expire. The
 * important thing is that we return here and actually do the reading/writing
 * at a later time.
 */
void NSCAgent::wakeup()
{
    // schedule software_interrupt + sendmsg
    if (wakeup_timer_.status() == TIMER_IDLE) {
        wakeup_timer_.resched(0.000001); // 1us
    }
}

/** When we get a wakeup we know something interesting has happened to a
 * socket. So we should try to read and write and accept on the sockets we
 * have. */
void NSCAgent::wakeup_expire()
{
    // hmm. This function needs some thought.
    if(to_snd_ > 0) {
        sendlow(to_snd_ > packet_size_ ? packet_size_ : to_snd_);
    }
    readlow();
}

void NSCAgent::init_stack(int hz)
{
    stack_->init(hz);
    // Disable automatic setting of buffer here. It doesn't work properly for
    // all (any?) of the stacks. It would be nice to get this right so we can
    // set TCP receive window size correctly. Until then, we'll have to use
    // the stack defaults (which isn't such a bad idea anyway).
    if(auto_conf_)
        stack_->buffer_size(wnd_size_ * packet_size_);

    soft_timer_.set_delay(1.0 / (double)hz);
}

void NSCAgent::add_interface(const char *a, const char *b)
{
    stack_->if_attach(a, b, packet_size_);

    con_ = stack_->new_tcp_socket();
}

void NSCAgent::set_default_gw(const char *dest)
{
    stack_->add_default_gateway(dest);
}

void NSCAgent::tcp_connect(const char *a, int b)
{
    con_->connect(a, b);
}

void NSCAgent::tcp_listen(int port)
{
    if(con_->is_listening()) {  // this is hacky!
        delete con_; // closes socket
        con_ = stack_->new_tcp_socket();
    }

    con_->listen(port);
}
// -----------------------------------------------------------------------

#define REGISTER_SIMPLE_NSC_TCP_AGENT(name,filename) \
  static class NscTcpSimpleAgentClass_##name : public TclClass { \
      public: \
          NscTcpSimpleAgentClass_##name() : TclClass("Agent/TCP/NSC/"#name) {} \
          TclObject* create(int, const char*const*) { \
              return (new NSCSimpleAgent(filename)); \
          } \
  } class_nsc_tcp_simple_agent_##name

REGISTER_SIMPLE_NSC_TCP_AGENT(Linux24,        "liblinux2.4.28.so");
REGISTER_SIMPLE_NSC_TCP_AGENT(Linux26,        "liblinux2.6.10.so");
REGISTER_SIMPLE_NSC_TCP_AGENT(Linux26142,     "liblinux2.6.14.2.so");
REGISTER_SIMPLE_NSC_TCP_AGENT(Linux2618,      "liblinux2.6.18.so");
REGISTER_SIMPLE_NSC_TCP_AGENT(Linux2619,      "liblinux2.6.19.so");
REGISTER_SIMPLE_NSC_TCP_AGENT(Linux2620,      "liblinux2.6.20.so");
REGISTER_SIMPLE_NSC_TCP_AGENT(Linux2621,      "liblinux2.6.21.so");
REGISTER_SIMPLE_NSC_TCP_AGENT(Linux2622,      "liblinux2.6.22.so");
REGISTER_SIMPLE_NSC_TCP_AGENT(Linux2626,      "liblinux2.6.26.so");

REGISTER_SIMPLE_NSC_TCP_AGENT(lwIP,           "liblwip.so");
REGISTER_SIMPLE_NSC_TCP_AGENT(FreeBSD5,       "libfreebsd5.3.so");
REGISTER_SIMPLE_NSC_TCP_AGENT(OpenBSD3,       "libopenbsd3.5.so");

static class GenericNSCSimpleAgentClass : public TclClass {
    public:
        GenericNSCSimpleAgentClass() : TclClass("Agent/TCP/NSC") {}
        TclObject* create(int argc, const char*const* argv) {
            return (new NSCSimpleAgent(NULL));
        }
} class_generic_nsc_simple_agent;


NSCSimpleAgent::NSCSimpleAgent(const char *stack_name)
    : NSCAgent(stack_name), initialised_(false), connected_(false)
{
    if(stack_name)
        stack_type_ = stack_name;
/*  delay_bind_init_one("rtt_");
    delay_bind_init_one("cwnd_");
    delay_bind_init_one("ssthresh_");
    delay_bind_init_one("srtt_");
    delay_bind_init_one("rttvar_"); // RTT variance
    delay_bind_init_one("rxtcur_"); // Retransmit timer value (ticks on freebsd)
    */

#ifdef DBG_MSGS
    fprintf(stderr, "%f new NSCSimpleAgent %s\n",
            Scheduler::instance().clock(), stack_name);
#endif
}

void NSCSimpleAgent::software_interrupt()
{
    if(!initialised_)
        do_init();

    NSCAgent::software_interrupt();
}

int NSCSimpleAgent::delay_bind_dispatch(const char *varName, 
        const char *localName, TclObject *tracer)
{
    /* Note that we can't really bind these variables like this due to the
     * different types used in the stacks; we can't get a general pointer
     * due to the fact that there are different types used for the same
     * variable among different stacks. We really need to call a function
     * to get the value of a variable rather than obtaining a pointer.
     */

    return Agent::delay_bind_dispatch(varName, localName, tracer);
}

void NSCSimpleAgent::bind_tcp_vars()
{
/*    if( con->is_connected() ) {
        int *i;

        i = con->var_rtt();
        if(i) bind("rtt_", i);
        i = con->var_cwnd();
        if(i) bind("cwnd_", i);
        i = con->var_ssthresh();
        if(i) bind("ssthresh_", i);
    }*/
}

void NSCSimpleAgent::make_ip_addr(char *dest, unsigned int iaddr, int h)
{
    int n1, n2, n3;

    /* XXX:
     * n2 and n1 didn't have the modulo operator there at first, but I added
     * it as a quick hack to handle iaddr being large. Um, not sure if this
     * requires further investigation?
     * -stj2, 9 May 2005. */

    n3 = iaddr % 250 + 2;
    n2 = (iaddr / 250 + 2) % 254;
    n1 = (iaddr / (250 * 250) + 10) % 254;
    
    sprintf(dest, "%d.%d.%d.%d", n1, n2, n3, h);
}

void NSCSimpleAgent::do_init()
{
    char ip_addr[256], netmask[256], gw[256];

    initialised_ = true;
    
#ifdef DBG_MSGS
    printf("NSCSimpleAgent::do_init %p\n", this);
#endif

    init_stack(stack_->get_hz());
    
    make_ip_addr(ip_addr, addr(), 2);
    strcpy(netmask, "255.255.255.0");
    add_interface(ip_addr, netmask);
    
    make_ip_addr(gw, addr(), 222);
    set_default_gw(gw);

    if(!to_set_cmd_.empty()) {
        std::list<std::string>::iterator ci, vi;

        ci = to_set_cmd_.begin();
        vi = to_set_val_.begin();

        for(; ci != to_set_cmd_.end(); ++ci, ++vi) {
            char argv[4][100] = { "UNUSED", "nsc_set", "-", "-" };
            char *pargv[4] = { argv[0], argv[1], argv[2], argv[3] };
            int argc = 4;

            strncpy(argv[2], ci->c_str(), 98);
            strncpy(argv[3], vi->c_str(), 98);
            
            NSCAgent::command(argc, pargv);
        }

        to_set_cmd_.clear();
        to_set_val_.clear();
    }
}

void NSCSimpleAgent::do_connect()
{
    char dest_addr[256];
    
    if(!initialised_)
        do_init();

    connected_ = true;

    make_ip_addr(dest_addr, daddr(), 2);
    tcp_connect(dest_addr, 6060);

    bind_tcp_vars();
}

void NSCSimpleAgent::do_listen()
{
    connected_ = true;
    tcp_listen(6060);

    bind_tcp_vars();
}

void NSCSimpleAgent::sendmsg(int nbytes, const char *flags)
{
    //assert(nsc); // What was this assert for?

    if(!connected_) {
        do_connect();
    }

    NSCAgent::sendmsg(nbytes, flags);
}

void NSCSimpleAgent::recv(Packet* pkt, Handler* h)
{
    //assert(nsc);

    if(!initialised_) {
        do_init();
    }
    if(!connected_) {
        do_listen();
    }

    NSCAgent::recv(pkt, h);
}

int NSCSimpleAgent::command(int argc, const char*const* argv)
{
#ifdef DBG_MSGS
    printf("NSCSimpleAgent %p ", this);
    for(int i = 0; i < argc; i++) {
        printf("%s", argv[i]);
        if(i != argc - 1)
            printf(",");
    }
    printf("\n");
#endif

    if(argc == 3 && strcmp(argv[1], "load-stack") == 0)
        stack_type_ = argv[2];
    else if(argc == 3 && strcmp(argv[1], "target") == 0) {
        if(!initialised_)
            do_init();
    } else if(argc == 2 && strcmp(argv[1], "listen") == 0) {
        if(!initialised_)
            do_init();
        if(!connected_)
            do_listen();
    } else if(argc == 4 && strcmp(argv[1], "nsc_set") == 0 && !initialised_) {
        if(!(strcmp(argv[2], "packetSize_") == 0)) {
            to_set_cmd_.push_back(argv[2]);
            to_set_val_.push_back(argv[3]);
            return TCL_OK;
        }
    }

    return NSCAgent::command(argc, argv);
}

/* The following is debug code used with the gcc option 
 * -finstrument-functions. */
#if 0
extern "C" {
#include <signal.h>
    // b tcp_grow_window
    // c
    // call nsc_set_check_addr( (int *)&tp->rcv_wnd, tp->rcv_wnd )
    int *addr = 0;
    int checkval;
    int (*cfunc)() = NULL;

    void nsc_set_check_addr(int *a, int c)
    {
        addr = a;
        checkval = c;
    }

    void __cyg_profile_func_enter(void *this_fn, void *call_site)
    {
        if(addr != NULL) {
            if(*addr != checkval) {
                printf("%p %p : %d != %d(CHANGE)\n", this_fn, call_site, 
                        *addr, checkval);
                raise(SIGABRT);
            }
            printf("%p %p : %d\n", this_fn, call_site, checkval);
        }
    }

    void __cyg_profile_func_exit(void *this_fn, void *call_site)
    {
        if(addr != NULL) {
            if(*addr != checkval) {
                printf("%p %p : %d\n", this_fn, call_site, checkval);
                raise(SIGABRT);
            }
        }
    }
}
#endif
