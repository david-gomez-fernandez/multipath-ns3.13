//
// Copyright (C) 2006 Sam Jansen, Andras Varga
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

#ifndef __NSC_TCP_H
#define __NSC_TCP_H

#include <map>
#include <list>
#include <omnetpp.h>
#include "INETDefs.h"
#include "IPvXAddress.h"

class TCPCommand;

#include "sim_interface.h" // NSC. We need this here to derive from classes


/**
 * Encapsulates a Network Simulation Cradle (NSC) instance.
 */
class INET_API NSC_TCP : public cSimpleModule, ISendCallback, IInterruptCallback
{
  public:
    struct Conn
    {
        int connId;
        int appGateIndex;
        INetStreamSocket *nscSocket;
        INetStreamSocket *nscListeningSocket;

        Conn() : connId(-1), appGateIndex(-1), nscSocket(NULL), 
                 nscListeningSocket(NULL)
        {}
    };

    // Implement NSC callbacks:
    virtual void send_callback(void *, int);
    virtual void interrupt();
    virtual void wakeup();
    virtual void gettime(unsigned int *, unsigned int *);
    // ----

  protected:
    typedef std::map<int,Conn> TcpAppConnMap; // connId-to-Conn
    TcpAppConnMap tcpAppConnMap;

    INetStack *stack;

    typedef std::list<Conn*> ToAccept;
    ToAccept toAccept;

    cMessage *nsi_timer;

    struct nsc_iphdr
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        unsigned int ihl:4;
        unsigned int version:4;
#elif __BYTE_ORDER == __BIG_ENDIAN
        unsigned int version:4;
        unsigned int ihl:4;
#else
# error "Please fix <bits/endian.h>"
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
    } __attribute__((packed));

    void decode_tcp(void *, int);


  public:
    static bool testing;    // switches between tcpEV and testingEV
    static bool logverbose; // if !testing, turns on more verbose logging

  public:
    NSC_TCP() : stack(NULL) {}
    virtual ~NSC_TCP();

  protected:
    // called by the OMNeT++ simulation kernel
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void finish();

    // internal utility functions
    Conn *findAppConn(int connId);
    virtual void updateDisplayString();
    void removeConnection(int connId);
    void printConnBrief(Conn& conn);
    void loadStack(const char* stackname);

    // function to be called back from the NSC stack
    void sendToIP(void *data, int len, IPvXAddress src, IPvXAddress dest);

    // to be refined...
    void processAppCommand(Conn& conn, cMessage *msg);

    // to be refined and filled in with calls into the NSC stack
    void process_OPEN_ACTIVE(Conn& conn, TCPCommand *tcpCommand, cMessage *msg);
    void process_OPEN_PASSIVE(Conn& conn, TCPCommand *tcpCommand, cMessage *msg);
    void process_SEND(Conn& conn, TCPCommand *tcpCommand, cMessage *msg);
    void process_CLOSE(Conn& conn, TCPCommand *tcpCommand, cMessage *msg);
    void process_ABORT(Conn& conn, TCPCommand *tcpCommand, cMessage *msg);
    void process_STATUS(Conn& conn, TCPCommand *tcpCommand, cMessage *msg);
};

#endif


