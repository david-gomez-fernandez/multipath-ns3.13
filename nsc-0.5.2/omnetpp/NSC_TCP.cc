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


#include "NSC_TCP.h"
#include "TCPCommand_m.h"
#include "IPControlInfo.h"
#include "IPv6ControlInfo.h"
#include "ByteArrayMessage.h"

#include "sim_interface.h" // NSC header

#include <dlfcn.h>
#include <netinet/in.h>

Define_Module(NSC_TCP);


bool NSC_TCP::testing;
bool NSC_TCP::logverbose;


// macro for normal ev<< logging (note: deliberately no parens in macro def)
#define tcpEV (ev.disable_tracing||NSC_TCP::testing) ? std::cout : ev




typedef u_int32_t tcp_seq;
/*
 * TCP header.
 * Per RFC 793, September, 1981.
 */
struct nsc_tcphdr
  {
    u_int16_t th_sport;         /* source port */
    u_int16_t th_dport;         /* destination port */
    tcp_seq th_seq;             /* sequence number */
    tcp_seq th_ack;             /* acknowledgement number */
#  if __BYTE_ORDER == __LITTLE_ENDIAN
    u_int8_t th_x2:4;           /* (unused) */
    u_int8_t th_off:4;          /* data offset */
#  endif
#  if __BYTE_ORDER == __BIG_ENDIAN
    u_int8_t th_off:4;          /* data offset */
    u_int8_t th_x2:4;           /* (unused) */
#  endif
    u_int8_t th_flags;
#  define TH_FIN        0x01
#  define TH_SYN        0x02
#  define TH_RST        0x04
#  define TH_PUSH       0x08
#  define TH_ACK        0x10
#  define TH_URG        0x20
    u_int16_t th_win;           /* window */
    u_int16_t th_sum;           /* checksum */
    u_int16_t th_urp;           /* urgent pointer */
};

char *flags2str(unsigned char flags)
{
        static char buf[512];
        buf[0]='\0';
        if(flags & TH_FIN) strcat(buf, " FIN");
        if(flags & TH_SYN) strcat(buf, " SYN");
        if(flags & TH_RST) strcat(buf, " RST");
        if(flags & TH_PUSH) strcat(buf, " PUSH");
        if(flags & TH_ACK) strcat(buf, " ACK");
        if(flags & TH_URG) strcat(buf, " URG");
//        if(flags & TH_ECE) strcat(buf, " ECE");
//        if(flags & TH_CWR) strcat(buf, " CWR");

        return buf;
}

void NSC_TCP::decode_tcp(void *packet_data, int hdr_len)
{
    struct nsc_tcphdr *tcp = (struct nsc_tcphdr *)packet_data;
    char buf[4096];

    sprintf(buf, "Src port:%hu Dst port:%hu Seq:%u Ack:%u Off:%hhu %s\n",
            ntohs(tcp->th_sport), ntohs(tcp->th_dport), ntohl(tcp->th_seq),
            ntohl(tcp->th_ack), (unsigned char)tcp->th_off,
            flags2str(tcp->th_flags)
          );
    tcpEV << buf;
    sprintf(buf, "Win:%hu Sum:%hu Urg:%hu\n",
            ntohs(tcp->th_win), ntohs(tcp->th_sum), ntohs(tcp->th_urp));
    tcpEV << buf;

    if(hdr_len > 20) {
        unsigned char *opt = (unsigned char *)packet_data + 20;

        tcpEV << ("Options: ");
        while(
                (*opt != 0) &&
                ((unsigned int)opt - (unsigned int)packet_data < tcp->th_off*4)
             ) {
            unsigned char len = opt[1];
            if(len == 0 && opt[0] != 1) {
                sprintf(buf, "0-length option(%u)\n", opt[0]);
                tcpEV << buf;
                break;
            }

            len -= 2;

            switch(*opt) {
                case 1: tcpEV << ("No-Op "); opt++; break;
                case 2: {       unsigned short mss = 0;
                            //assert(len == 2);
                            if(len == 2) {
                                mss = (opt[2] << 8) + (opt[3]);
                                sprintf(buf, "MSS(%u) ", mss);
                                tcpEV << buf;
                            } else {
                                sprintf(buf, "MSS:l:%u ", len);
                                tcpEV << buf;
                            }
                            opt += opt[1];
                            break;
                        }
                case 3: {       
                            unsigned char ws = 0;
                            assert(len == 1);
                            ws = opt[2];
                            sprintf(buf, "WS(%u) ", ws);
                            tcpEV << buf;
                            opt += opt[1];
                            break;
                        }
                case 4: {       
                            sprintf(buf, "SACK-Permitted ");
                            tcpEV << buf;
                            opt += opt[1];
                            break;
                        }
                case 5: {       
                            tcpEV << ("SACK ");
                            opt += opt[1];
                            break;
                        }
                case 8: {
                            int i;
                            tcpEV << ("Timestamp(");
                            for(i = 0; i < len; i++) {
                                sprintf(buf, "%02x", opt[2+i]);
                                tcpEV << buf;
                            }
                            tcpEV << (") ");
                            opt += opt[1];
                            break;
                        }
                default:{       
                            sprintf(buf, "%u:%u ", opt[0], opt[1]);
                            tcpEV << buf;
                            opt += opt[1];
                            break;
                        }
            };

        }
        tcpEV << ("\n");
    }

}





static std::ostream& operator<<(std::ostream& os, const NSC_TCP::Conn& conn)
{
    os << "connId=" << conn.connId << " appGateIndex=" << conn.appGateIndex << " nscsocket=" << conn.nscSocket;
    return os;
}

void NSC_TCP::initialize()
{
    WATCH_MAP(tcpAppConnMap);

    cModule *netw = simulation.systemModule();
    testing = netw->hasPar("testing") && netw->par("testing").boolValue();
    logverbose = !testing && netw->hasPar("logverbose") && netw->par("logverbose").boolValue();

    loadStack("liblwip.so");
}

NSC_TCP::~NSC_TCP()
{
    while (!tcpAppConnMap.empty())
    {
        TcpAppConnMap::iterator i = tcpAppConnMap.begin();
        delete (*i).second.nscSocket;
        tcpAppConnMap.erase(i);
    }
}


void NSC_TCP::handleMessage(cMessage *msg)
{
    if (msg->isSelfMessage())
    {
        // timer expired
        /*
        ...
        NSC timer processing
        ...
           Timers are ordinary cMessage objects that are started by
           scheduleAt(simTime()+timeout, msg), and can be cancelled
           via cancelEvent(msg); when they expire (fire) they are delivered
           to the module via handleMessage(), i.e. they end up here.
        */
        if(strcmp(msg->name(), "nsc_nsi_timer") == 0) {
            stack->timer_interrupt();

            scheduleAt(msg->arrivalTime() + 1.0 / (double)stack->get_hz(),
                    msg);
        }
    }
    else if (msg->arrivedOn("from_ip") || msg->arrivedOn("from_ipv6"))
    {
        // must be a TCPSegment
        ByteArrayMessage *tcpseg = check_and_cast<ByteArrayMessage *>(msg);

        // get src/dest addresses
        IPvXAddress srcAddr, destAddr;
        if (dynamic_cast<IPControlInfo *>(tcpseg->controlInfo())!=NULL)
        {
            IPControlInfo *controlInfo = (IPControlInfo *)tcpseg->removeControlInfo();
            srcAddr = controlInfo->srcAddr();
            destAddr = controlInfo->destAddr();
            delete controlInfo;
        }
        else if (dynamic_cast<IPv6ControlInfo *>(tcpseg->controlInfo())!=NULL)
        {
            IPv6ControlInfo *controlInfo = (IPv6ControlInfo *)tcpseg->removeControlInfo();
            srcAddr = controlInfo->srcAddr();
            destAddr = controlInfo->destAddr();
            delete controlInfo;
        }
        else
        {
            error("(%s)%s arrived without control info", tcpseg->className(), tcpseg->name());
        }

        // process segment
        void *data = tcpseg->getData();
        size_t len = tcpseg->getDataArraySize();

        tcpEV << this << ": data arrived for interface of stack " 
            << stack << "\n";

        nsc_iphdr *ih = (nsc_iphdr *)data;
        tcpEV << "IP " << ih->version << " len " << ih->ihl 
              << " protocol " << ih->protocol
              << " saddr " << (ih->saddr)
              << " daddr " << (ih->daddr)
              << "\n";

        decode_tcp( (void *)(ih + 1), ntohs(ih->tot_len) - 20 );

        stack->if_receive_packet(0, data, len);

        // Poll accepting sockets
        ToAccept::iterator i = toAccept.begin();
        for(; i != toAccept.end(); ) {
            Conn *c = *i;

            tcpEV << "NSC: attempting to accept:\n";

            INetStreamSocket *sock = NULL;
            int err;

            err = c->nscListeningSocket->accept( &sock );

            tcpEV << "accept returned " << err << " , sock is " << sock << "\n";

            if(sock) {
                // Got connection!
                i = toAccept.erase(i);
                tcpEV << "NSC: got accept!\n";

                // TODO:
                /* Then, every time a new connection comes in (ie a client
                 * connects), TCP sends a TCP_I_ESTABLISHED up to the app, with
                 * TCPConnectInfo filled in and attached. */
                
                //TCPConnectInfo *tci = new TCPConnectInfo();
                //tci->setLocalAddr();
                //tci->setRemoteAddr();
                //tci->setLocalPort();
                //tci->setRemotePort();
                
                c->nscSocket = sock;
            } else
                ++i;
        }

        // Attempt to read from sockets
        TcpAppConnMap::iterator j = tcpAppConnMap.begin();
        for(; j != tcpAppConnMap.end(); ++j) {
            Conn &c = j->second;

            if(c.nscSocket) {
                tcpEV << "NSC: attempting to read from socket " << c.nscSocket 
                    << "\n";

                char buf[4096];
                int buflen = sizeof(buf);

                int err = c.nscSocket->read_data(buf, &buflen);

                tcpEV << "NSC: read: err " << err << " , buflen " << buflen
                    << "\n";

                if(err == 0 && buflen > 0) {
                    cMessage *msg = new cMessage("DATA");
                    msg->setKind(TCP_I_DATA);
                    msg->setByteLength(buflen);
                    send(msg, "to_appl", c.appGateIndex);
                }
            }
        }

        /*
        ...
        NSC: process segment (data,len); should call removeConnection() if socket has 
        closed and completely done

        XXX: probably need to poll sockets to see if they are closed.
        ...
        */

        delete tcpseg;
    }
    else // must be from app
    {
        TCPCommand *controlInfo = check_and_cast<TCPCommand *>(msg->controlInfo());
        int connId = controlInfo->connId();

        Conn *conn = findAppConn(connId);
        if (!conn)
        {
            // add into appConnMap
            conn = &tcpAppConnMap[connId];
            conn->connId = connId;
            conn->appGateIndex = msg->arrivalGate()->index();
            conn->nscSocket = NULL;  // will be filled in within processAppCommand()

            tcpEV << "TCP connection created for " << msg << "\n";
        }
        processAppCommand(*conn, msg);
    }

    if (ev.isGUI())
        updateDisplayString();
}

void NSC_TCP::updateDisplayString()
{
    //...
}

NSC_TCP::Conn *NSC_TCP::findAppConn(int connId)
{
    TcpAppConnMap::iterator i = tcpAppConnMap.find(connId);
    return i==tcpAppConnMap.end() ? NULL : &(i->second);
}

void NSC_TCP::finish()
{
}

void NSC_TCP::removeConnection(int connId)
{
    TcpAppConnMap::iterator i = tcpAppConnMap.find(connId);
    if (i!=tcpAppConnMap.end())
        tcpAppConnMap.erase(i);
}

void NSC_TCP::printConnBrief(Conn& conn)
{
    tcpEV << "connId=" << conn.connId << " appGateIndex=" << conn.appGateIndex;
    tcpEV << " nscsocket=" << conn.nscSocket << "\n";
}

void NSC_TCP::loadStack(const char* stackname)
{
    void *handle = NULL;
    FCreateStack create = NULL;

    tcpEV << "Loading stack " << stackname << "\n";

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

    stack = create(this, this, NULL);

    tcpEV << "NSC_TCP " << this << " has stack " << stack << "\n";

    fprintf(stderr, "Created stack = %p\n", stack);

    fprintf(stderr, "Initialising stack, name=%s\n", stack->get_name());
    
    stack->init(stack->get_hz());

    fprintf(stderr, "done.\n");
    
    // set timer for 1.0 / stack->get_hz()

    nsi_timer = new cMessage("nsc_nsi_timer");
    scheduleAt(1.0 / (double)stack->get_hz(), nsi_timer);
}

void NSC_TCP::send_callback(void *data, int datalen)
{
    tcpEV << "NSC: send_callback " << data << " " << datalen << "\n";

    IPvXAddress src, dest;
    
    nsc_iphdr *iph = (nsc_iphdr *)data;

    src.set(ntohl(iph->saddr));
    dest.set(ntohl(iph->daddr));

    sendToIP(data, datalen, src, dest);
}

void NSC_TCP::interrupt()
{
}

void NSC_TCP::wakeup()
{
}

void NSC_TCP::gettime(unsigned int *sec, unsigned int *usec)
{
}

void NSC_TCP::sendToIP(void *data, int len, IPvXAddress src, IPvXAddress dest)
{
    tcpEV << "Sending: " << data << " of len " << len << " from " << src
       << " to " << dest << "\n";
        // XXX add some info (seqNo, len, etc)

    ByteArrayMessage *tcpseg = new ByteArrayMessage("tcp-segment");
    tcpseg->setDataFromBuffer(data, len);

    if (!dest.isIPv6())
    {
        // send over IPv4
        IPControlInfo *controlInfo = new IPControlInfo();
        controlInfo->setProtocol(IP_PROT_TCP);
        controlInfo->setSrcAddr(src.get4());
        controlInfo->setDestAddr(dest.get4());
        tcpseg->setControlInfo(controlInfo);

        send(tcpseg,"to_ip");
    }
    else
    {
        // send over IPv6
        IPv6ControlInfo *controlInfo = new IPv6ControlInfo();
        controlInfo->setProtocol(IP_PROT_TCP);
        controlInfo->setSrcAddr(src.get6());
        controlInfo->setDestAddr(dest.get6());
        tcpseg->setControlInfo(controlInfo);

        send(tcpseg,"to_ipv6");
    }
}

void NSC_TCP::processAppCommand(Conn& conn, cMessage *msg)
{
    printConnBrief(conn);

    // first do actions
    TCPCommand *tcpCommand = (TCPCommand *)(msg->removeControlInfo());
    //XXX tcpEV << "App command: " << eventName(msg->kind()) << "\n";
    switch (msg->kind())
    {
        case TCP_C_OPEN_ACTIVE: process_OPEN_ACTIVE(conn, tcpCommand, msg); break;
        case TCP_C_OPEN_PASSIVE: process_OPEN_PASSIVE(conn, tcpCommand, msg); break;
        case TCP_C_SEND: process_SEND(conn, tcpCommand, msg); break;
        case TCP_C_CLOSE: process_CLOSE(conn, tcpCommand, msg); break;
        case TCP_C_ABORT: process_ABORT(conn, tcpCommand, msg); break;
        case TCP_C_STATUS: process_STATUS(conn, tcpCommand, msg); break;
        default: opp_error("wrong command from app: %d", msg->kind());
    }

    /*
    ...
    NSC: should call removeConnection(conn.connId) if socket has been destroyed
    ...
    */
}

void NSC_TCP::process_OPEN_ACTIVE(Conn& conn, TCPCommand *tcpCommand, cMessage *msg)
{
    TCPOpenCommand *openCmd = check_and_cast<TCPOpenCommand *>(tcpCommand);
    IPvXAddress localAddr, remoteAddr;
    short localPort, remotePort;

    localAddr = openCmd->localAddr();
    remoteAddr = openCmd->remoteAddr();
    localPort = openCmd->localPort();
    remotePort = openCmd->remotePort();

    if (remoteAddr.isUnspecified() || remotePort==-1)
        opp_error("Error processing command OPEN_ACTIVE: remote address and port must be specified");

    if (localPort==-1)
        localPort = 0; // NSC uses 0 to mean "not specified"

    tcpEV << "OPEN: " << localAddr << ":" << localPort << " --> " << remoteAddr << ":" << remotePort << "\n";

    /*
    ...
    NSC: process active open request
    ...
    */

    assert(!conn.nscSocket);

    tcpEV << this 
        << " NSC: adding interface and setting default gateway for stack "
        << stack << "\n";
    stack->if_attach(localAddr.str().c_str(), "255.255.255.0", 1500);

    // TODO: figure out default gateway from localAddr
    stack->add_default_gateway(10, 0, 0, 250);

    tcpEV << "NSC: creating TCP socket\n";
    conn.nscSocket = stack->new_tcp_socket();
    assert(conn.nscSocket);

    conn.nscSocket->connect(remoteAddr.str().c_str(), remotePort);

    delete openCmd;
    delete msg;
}

void NSC_TCP::process_OPEN_PASSIVE(Conn& conn, TCPCommand *tcpCommand, cMessage *msg)
{
    TCPOpenCommand *openCmd = check_and_cast<TCPOpenCommand *>(tcpCommand);
    IPvXAddress localAddr, remoteAddr;
    short localPort, remotePort;

    ASSERT(openCmd->fork()==true);
    localAddr = openCmd->localAddr();
    localPort = openCmd->localPort();
    remoteAddr = openCmd->remoteAddr();
    remotePort = openCmd->remotePort();

    if (localPort==-1)
        opp_error("Error processing command OPEN_PASSIVE: local port must be specified");

    tcpEV << "Starting to listen on: " << localAddr << ":" << localPort << "\n";

    /*
    ...
    NSC: process passive open request
    ...
    */
    assert(stack);

    assert(!conn.nscSocket);

    tcpEV << this << " NSC: Adding interface and listening for stack " 
        << stack << "\n";
    stack->if_attach(localAddr.str().c_str(), "255.255.255.0", 1500);

    // TODO: figure out default gateway from localAddr
    stack->add_default_gateway(10, 0, 0, 250);

    tcpEV << "NSC: Creating socket and listening...\n";
    conn.nscListeningSocket = stack->new_tcp_socket();
    conn.nscListeningSocket->listen(localPort);

    toAccept.push_back(&conn);

    delete openCmd;
    delete msg;
}

void NSC_TCP::process_SEND(Conn& conn, TCPCommand *tcpCommand, cMessage *msg)
{
    TCPSendCommand *sendCommand = check_and_cast<TCPSendCommand *>(tcpCommand);
    int bytes = msg->byteLength();
    delete sendCommand;
    delete msg;

    /*
    ...
    NSC: send 'bytes' bytes on conn.nscSocket
    ...
    */

    // XXX: limit of 4k atm. We need a buffer of stuff to send to pass to the
    // send_data function, so this has to be allocated somewhere.
    char buffer[4096];

    if(bytes > 4096)
        bytes = 4096;

    tcpEV << this << ": sending " << bytes << " bytes.\n";

    int error = conn.nscSocket->send_data(buffer, bytes);

    if(error > 0) {
        tcpEV << "Sent " << error << " bytes.\n";
    } else {
        tcpEV << "Error sending, err is " << error << "\n";
    }
}

void NSC_TCP::process_CLOSE(Conn& conn, TCPCommand *tcpCommand, cMessage *msg)
{
    delete tcpCommand;
    delete msg;

    /*
    ...
    NSC: TODO: process close request
    ...
    */
}

void NSC_TCP::process_ABORT(Conn& conn, TCPCommand *tcpCommand, cMessage *msg)
{
    delete tcpCommand;
    delete msg;

    /*
    ...
    NSC: TODO: abort connection
    ...
    */
}

void NSC_TCP::process_STATUS(Conn& conn, TCPCommand *tcpCommand, cMessage *msg)
{
    delete tcpCommand; // but we'll reuse msg for reply

    TCPStatusInfo *statusInfo = new TCPStatusInfo();

    /*
    ...
    NSC: fill in status if possible

         Still more work to do here. Some of this needs to be implemented on
         the NSC side, which is fairly trivial, just updating the get_var
         function for each stack.
    ...
    */

    char result[512];

    conn.nscSocket->get_var("cwnd_", result, sizeof(result));
    statusInfo->setSnd_wnd(atoi(result));

    //conn.nscSocket->get_var("ssthresh_", result, sizeof(result));
    //conn.nscSocket->get_var("rxtcur_", result, sizeof(result));


/* other TCP model:
    statusInfo->setState(fsm.state());
    statusInfo->setStateName(stateName(fsm.state()));

    statusInfo->setLocalAddr(localAddr);
    statusInfo->setRemoteAddr(remoteAddr);
    statusInfo->setLocalPort(localPort);
    statusInfo->setRemotePort(remotePort);

    statusInfo->setSnd_mss(state->snd_mss);
    statusInfo->setSnd_una(state->snd_una);
    statusInfo->setSnd_nxt(state->snd_nxt);
    statusInfo->setSnd_max(state->snd_max);
    statusInfo->setSnd_wnd(state->snd_wnd);
    statusInfo->setSnd_up(state->snd_up);
    statusInfo->setSnd_wl1(state->snd_wl1);
    statusInfo->setSnd_wl2(state->snd_wl2);
    statusInfo->setIss(state->iss);
    statusInfo->setRcv_nxt(state->rcv_nxt);
    statusInfo->setRcv_wnd(state->rcv_wnd);
    statusInfo->setRcv_up(state->rcv_up);
    statusInfo->setIrs(state->irs);
    statusInfo->setFin_ack_rcvd(state->fin_ack_rcvd);
*/

    msg->setControlInfo(statusInfo);
    send(msg, "to_appl", conn.appGateIndex);
}


