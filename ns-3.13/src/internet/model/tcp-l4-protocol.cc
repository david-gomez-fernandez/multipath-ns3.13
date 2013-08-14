/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2007 Georgia Tech Research Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Raj Bhattacharjea <raj.b@gatech.edu>
 */

#include "ns3/assert.h"
#include "ns3/log.h"
#include "ns3/nstime.h"
#include "ns3/boolean.h"
#include "ns3/object-vector.h"

#include "ns3/packet.h"
#include "ns3/node.h"
#include "ns3/simulator.h"
#include "ns3/ipv4-route.h"

#include "tcp-l4-protocol.h"
#include "tcp-header.h"
#include "ipv4-end-point-demux.h"
#include "ipv4-end-point.h"
#include "ipv4-l3-protocol.h"
#include "tcp-socket-factory-impl.h"
#include "tcp-typedefs.h"       ////Pablo
#include "tcp-newreno.h"
#include "tcp-reno.h"	        ////Pablo
#include "rtt-estimator.h"

#include <vector>
#include <sstream>
#include <iomanip>

NS_LOG_COMPONENT_DEFINE ("TcpL4Protocol");

namespace ns3 {

NS_OBJECT_ENSURE_REGISTERED (TcpL4Protocol);


//// Pablo (multipath)
//State Machine things --------------------------------------------------------
TcpStateMachine::TcpStateMachine()
  : aT (LAST_STATE, StateActionVec_t(LAST_EVENT)),
       eV (MAX_FLAGS)
{
  NS_LOG_FUNCTION_NOARGS ();

  // Create the state table
  // Closed state
  aT[CLOSED][APP_LISTEN]  = SA (LISTEN,   NO_ACT);
  aT[CLOSED][APP_CONNECT] = SA (SYN_SENT, SYN_TX);
  aT[CLOSED][APP_SEND]    = SA (CLOSED,   RST_TX);
  aT[CLOSED][SEQ_RECV]    = SA (CLOSED,   NO_ACT);
  aT[CLOSED][APP_CLOSE]   = SA (CLOSED,   NO_ACT);
  aT[CLOSED][TIMEOUT]     = SA (CLOSED,   RST_TX);
  aT[CLOSED][ACK_RX]      = SA (CLOSED,   RST_TX);
  aT[CLOSED][SYN_RX]      = SA (CLOSED,   RST_TX);
  aT[CLOSED][SYN_ACK_RX]  = SA (CLOSED,   RST_TX);
  aT[CLOSED][FIN_RX]      = SA (CLOSED,   RST_TX);
  aT[CLOSED][FIN_ACK_RX]  = SA (CLOSED,   RST_TX);
  aT[CLOSED][RST_RX]      = SA (CLOSED,   CANCEL_TM);
  aT[CLOSED][BAD_FLAGS]   = SA (CLOSED,   RST_TX);

  // Listen State
  // For the listen state, anything other than CONNECT or SEND
  // is simply ignored....this likely indicates the child TCP
  // has finished and issued unbind call, but the remote end
  // has not yet  closed.
  aT[LISTEN][APP_LISTEN]  = SA (LISTEN,   NO_ACT);
  aT[LISTEN][APP_CONNECT] = SA (SYN_SENT, SYN_TX);
  aT[LISTEN][APP_SEND]    = SA (SYN_SENT, SYN_TX);
  aT[LISTEN][SEQ_RECV]    = SA (LISTEN,   NO_ACT);
  aT[LISTEN][APP_CLOSE]   = SA (CLOSED,   NO_ACT);
  aT[LISTEN][TIMEOUT]     = SA (LISTEN,   NO_ACT);
  aT[LISTEN][ACK_RX]      = SA (LISTEN,   NO_ACT);
  aT[LISTEN][SYN_RX]      = SA (LISTEN,   SYN_ACK_TX);//stay in listen and fork
  aT[LISTEN][SYN_ACK_RX]  = SA (LISTEN,   NO_ACT);
  aT[LISTEN][FIN_RX]      = SA (LISTEN,   NO_ACT);
  aT[LISTEN][FIN_ACK_RX]  = SA (LISTEN,   NO_ACT);
  aT[LISTEN][RST_RX]      = SA (LISTEN,   NO_ACT);
  aT[LISTEN][BAD_FLAGS]   = SA (LISTEN,   NO_ACT);

  // Syn Sent State
  aT[SYN_SENT][APP_LISTEN]  = SA (CLOSED,      RST_TX);
  aT[SYN_SENT][APP_CONNECT] = SA (SYN_SENT,    SYN_TX);
  aT[SYN_SENT][APP_SEND]    = SA (SYN_SENT,    NO_ACT);
  aT[SYN_SENT][SEQ_RECV]    = SA (ESTABLISHED, NEW_SEQ_RX);
  aT[SYN_SENT][APP_CLOSE]   = SA (CLOSED,      RST_TX);
  aT[SYN_SENT][TIMEOUT]     = SA (CLOSED,      NO_ACT);
  aT[SYN_SENT][ACK_RX]      = SA (SYN_SENT,    NO_ACT);
  aT[SYN_SENT][SYN_RX]      = SA (SYN_RCVD,    SYN_ACK_TX);
  aT[SYN_SENT][SYN_ACK_RX]  = SA (ESTABLISHED, ACK_TX_1);
  aT[SYN_SENT][FIN_RX]      = SA (CLOSED,      RST_TX);
  aT[SYN_SENT][FIN_ACK_RX]  = SA (CLOSED,      RST_TX);
  aT[SYN_SENT][RST_RX]      = SA (CLOSED,      APP_NOTIFY);
  aT[SYN_SENT][BAD_FLAGS]   = SA (CLOSED,      RST_TX);

  // Syn Recvd State
  aT[SYN_RCVD][APP_LISTEN]  = SA (CLOSED,      RST_TX);
  aT[SYN_RCVD][APP_CONNECT] = SA (CLOSED,      RST_TX);
  aT[SYN_RCVD][APP_SEND]    = SA (CLOSED,      RST_TX);
  aT[SYN_RCVD][SEQ_RECV]    = SA (ESTABLISHED, NEW_SEQ_RX);
  aT[SYN_RCVD][APP_CLOSE]   = SA (FIN_WAIT_1,  FIN_TX);
  aT[SYN_RCVD][TIMEOUT]     = SA (CLOSED,      RST_TX);
  aT[SYN_RCVD][ACK_RX]      = SA (ESTABLISHED, SERV_NOTIFY);
  aT[SYN_RCVD][SYN_RX]      = SA (SYN_RCVD,    SYN_ACK_TX);
  aT[SYN_RCVD][SYN_ACK_RX]  = SA (CLOSED,      RST_TX);
  aT[SYN_RCVD][FIN_RX]      = SA (CLOSED,      RST_TX);
  aT[SYN_RCVD][FIN_ACK_RX]  = SA (CLOSE_WAIT,  PEER_CLOSE);
  aT[SYN_RCVD][RST_RX]      = SA (CLOSED,      CANCEL_TM);
  aT[SYN_RCVD][BAD_FLAGS]   = SA (CLOSED,      RST_TX);

  // Established State
  aT[ESTABLISHED][APP_LISTEN] = SA (CLOSED,     RST_TX);
  aT[ESTABLISHED][APP_CONNECT]= SA (CLOSED,     RST_TX);
  aT[ESTABLISHED][APP_SEND]   = SA (ESTABLISHED,TX_DATA);
  aT[ESTABLISHED][SEQ_RECV]   = SA (ESTABLISHED,NEW_SEQ_RX);
  aT[ESTABLISHED][APP_CLOSE]  = SA (FIN_WAIT_1, FIN_TX);
  aT[ESTABLISHED][TIMEOUT]    = SA (ESTABLISHED,RETX);
  aT[ESTABLISHED][ACK_RX]     = SA (ESTABLISHED,NEW_ACK);
  aT[ESTABLISHED][SYN_RX]     = SA (SYN_RCVD,   SYN_ACK_TX);
  aT[ESTABLISHED][SYN_ACK_RX] = SA (ESTABLISHED,NO_ACT);
  aT[ESTABLISHED][FIN_RX]     = SA (CLOSE_WAIT, PEER_CLOSE);
  aT[ESTABLISHED][FIN_ACK_RX] = SA (CLOSE_WAIT, PEER_CLOSE);
  aT[ESTABLISHED][RST_RX]     = SA (CLOSED,     CANCEL_TM);
  aT[ESTABLISHED][BAD_FLAGS]  = SA (CLOSED,     RST_TX);

  // Close Wait State
  aT[CLOSE_WAIT][APP_LISTEN]  = SA (CLOSED,     RST_TX);
  aT[CLOSE_WAIT][APP_CONNECT] = SA (SYN_SENT,   SYN_TX);
  aT[CLOSE_WAIT][APP_SEND]    = SA (CLOSE_WAIT, TX_DATA);
  aT[CLOSE_WAIT][SEQ_RECV]    = SA (CLOSE_WAIT, NEW_SEQ_RX);
  aT[CLOSE_WAIT][APP_CLOSE]   = SA (LAST_ACK,   FIN_ACK_TX);
  aT[CLOSE_WAIT][TIMEOUT]     = SA (CLOSE_WAIT, NO_ACT);
  aT[CLOSE_WAIT][ACK_RX]      = SA (CLOSE_WAIT, NEW_ACK);
  aT[CLOSE_WAIT][SYN_RX]      = SA (CLOSED,     RST_TX);
  aT[CLOSE_WAIT][SYN_ACK_RX]  = SA (CLOSED,     RST_TX);
  aT[CLOSE_WAIT][FIN_RX]      = SA (CLOSE_WAIT, ACK_TX);
  aT[CLOSE_WAIT][FIN_ACK_RX]  = SA (CLOSE_WAIT, ACK_TX);
  aT[CLOSE_WAIT][RST_RX]      = SA (CLOSED,     CANCEL_TM);
  aT[CLOSE_WAIT][BAD_FLAGS]   = SA (CLOSED,     RST_TX);

  // Close Last Ack State
  aT[LAST_ACK][APP_LISTEN]  = SA (CLOSED,      RST_TX);
  aT[LAST_ACK][APP_CONNECT] = SA (SYN_SENT,    SYN_TX);
  aT[LAST_ACK][APP_SEND]    = SA (CLOSED,      RST_TX);
  aT[LAST_ACK][SEQ_RECV]    = SA (LAST_ACK,    NEW_SEQ_RX);
  aT[LAST_ACK][APP_CLOSE]   = SA (CLOSED,      NO_ACT);
  aT[LAST_ACK][TIMEOUT]     = SA (CLOSED,      NO_ACT);
  aT[LAST_ACK][ACK_RX]      = SA (CLOSED,      APP_CLOSED);
  aT[LAST_ACK][SYN_RX]      = SA (CLOSED,      RST_TX);
  aT[LAST_ACK][SYN_ACK_RX]  = SA (CLOSED,      RST_TX);
  aT[LAST_ACK][FIN_RX]      = SA (LAST_ACK,    FIN_ACK_TX);
  aT[LAST_ACK][FIN_ACK_RX]  = SA (CLOSED,      NO_ACT);
  aT[LAST_ACK][RST_RX]      = SA (CLOSED,      CANCEL_TM);
  aT[LAST_ACK][BAD_FLAGS]   = SA (CLOSED,      RST_TX);

  // FIN_WAIT_1 state
  aT[FIN_WAIT_1][APP_LISTEN]  = SA (CLOSED,     RST_TX);
  aT[FIN_WAIT_1][APP_CONNECT] = SA (CLOSED,     RST_TX);
  aT[FIN_WAIT_1][APP_SEND]    = SA (CLOSED,     RST_TX);
  aT[FIN_WAIT_1][SEQ_RECV]    = SA (FIN_WAIT_1, NEW_SEQ_RX);
  aT[FIN_WAIT_1][APP_CLOSE]   = SA (FIN_WAIT_1, NO_ACT);
  aT[FIN_WAIT_1][TIMEOUT]     = SA (FIN_WAIT_1, NO_ACT);
  aT[FIN_WAIT_1][ACK_RX]      = SA (FIN_WAIT_2, NEW_ACK);
  aT[FIN_WAIT_1][SYN_RX]      = SA (CLOSED,     RST_TX);
  aT[FIN_WAIT_1][SYN_ACK_RX]  = SA (CLOSED,     RST_TX);
  aT[FIN_WAIT_1][FIN_RX]      = SA (CLOSING,    ACK_TX);
  aT[FIN_WAIT_1][FIN_ACK_RX]  = SA (TIME_WAIT, ACK_TX);
  aT[FIN_WAIT_1][RST_RX]      = SA (CLOSED,     CANCEL_TM);
  aT[FIN_WAIT_1][BAD_FLAGS]   = SA (CLOSED,     RST_TX);

  // FIN_WAIT_2 state
  aT[FIN_WAIT_2][APP_LISTEN]  = SA (CLOSED,      RST_TX);
  aT[FIN_WAIT_2][APP_CONNECT] = SA (CLOSED,      RST_TX);
  aT[FIN_WAIT_2][APP_SEND]    = SA (CLOSED,      RST_TX);
  aT[FIN_WAIT_2][SEQ_RECV]    = SA (FIN_WAIT_2,  NEW_SEQ_RX);
  aT[FIN_WAIT_2][APP_CLOSE]   = SA (FIN_WAIT_2,  NO_ACT);
  aT[FIN_WAIT_2][TIMEOUT]     = SA (FIN_WAIT_2,  NO_ACT);
  aT[FIN_WAIT_2][ACK_RX]      = SA (FIN_WAIT_2,  NEW_ACK);
  aT[FIN_WAIT_2][SYN_RX]      = SA (CLOSED,      RST_TX);
  aT[FIN_WAIT_2][SYN_ACK_RX]  = SA (CLOSED,      RST_TX);
  aT[FIN_WAIT_2][FIN_RX]      = SA (TIME_WAIT,  ACK_TX);
  aT[FIN_WAIT_2][FIN_ACK_RX]  = SA (TIME_WAIT,  ACK_TX);
  aT[FIN_WAIT_2][RST_RX]      = SA (CLOSED,      CANCEL_TM);
  aT[FIN_WAIT_2][BAD_FLAGS]   = SA (CLOSED,      RST_TX);

  // CLOSING state
  aT[CLOSING][APP_LISTEN]  = SA (CLOSED,      RST_TX);
  aT[CLOSING][APP_CONNECT] = SA (CLOSED,      RST_TX);
  aT[CLOSING][APP_SEND]    = SA (CLOSED,      RST_TX);
  aT[CLOSING][SEQ_RECV]    = SA (CLOSED,      RST_TX);
  aT[CLOSING][APP_CLOSE]   = SA (CLOSED,      RST_TX);
  aT[CLOSING][TIMEOUT]     = SA (CLOSING,     NO_ACT);
  aT[CLOSING][ACK_RX]      = SA (TIME_WAIT,  NO_ACT);
  aT[CLOSING][SYN_RX]      = SA (CLOSED,      RST_TX);
  aT[CLOSING][SYN_ACK_RX]  = SA (CLOSED,      RST_TX);
  aT[CLOSING][FIN_RX]      = SA (CLOSED,      ACK_TX);
  aT[CLOSING][FIN_ACK_RX]  = SA (CLOSED,      ACK_TX);
  aT[CLOSING][RST_RX]      = SA (CLOSED,      CANCEL_TM);
  aT[CLOSING][BAD_FLAGS]   = SA (CLOSED,      RST_TX);

  // TIMED_WAIT state
  aT[TIME_WAIT][APP_LISTEN]  = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][APP_CONNECT] = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][APP_SEND]    = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][SEQ_RECV]    = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][APP_CLOSE]   = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][TIMEOUT]     = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][ACK_RX]      = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][SYN_RX]      = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][SYN_ACK_RX]  = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][FIN_RX]      = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][FIN_ACK_RX]  = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][RST_RX]      = SA (TIME_WAIT, NO_ACT);
  aT[TIME_WAIT][BAD_FLAGS]   = SA (TIME_WAIT, NO_ACT);
  // Create the flags lookup table
  eV[ 0x00] = SEQ_RECV;  // No flags
  eV[ 0x01] = FIN_RX;    // Fin
  eV[ 0x02] = SYN_RX;    // Syn
  eV[ 0x03] = BAD_FLAGS; // Illegal
  eV[ 0x04] = RST_RX;    // Rst
  eV[ 0x05] = BAD_FLAGS; // Illegal
  eV[ 0x06] = BAD_FLAGS; // Illegal
  eV[ 0x07] = BAD_FLAGS; // Illegal
  eV[ 0x08] = SEQ_RECV;  // Psh flag is not used
  eV[ 0x09] = FIN_RX;    // Fin
  eV[ 0x0a] = SYN_RX;    // Syn
  eV[ 0x0b] = BAD_FLAGS; // Illegal
  eV[ 0x0c] = RST_RX;    // Rst
  eV[ 0x0d] = BAD_FLAGS; // Illegal
  eV[ 0x0e] = BAD_FLAGS; // Illegal
  eV[ 0x0f] = BAD_FLAGS; // Illegal
  eV[ 0x10] = ACK_RX;    // Ack
  eV[ 0x11] = FIN_ACK_RX;// Fin/Ack
  eV[ 0x12] = SYN_ACK_RX;// Syn/Ack
  eV[ 0x13] = BAD_FLAGS; // Illegal
  eV[ 0x14] = RST_RX;    // Rst
  eV[ 0x15] = BAD_FLAGS; // Illegal
  eV[ 0x16] = BAD_FLAGS; // Illegal
  eV[ 0x17] = BAD_FLAGS; // Illegal
  eV[ 0x18] = ACK_RX;    // Ack
  eV[ 0x19] = FIN_ACK_RX;// Fin/Ack
  eV[ 0x1a] = SYN_ACK_RX;// Syn/Ack
  eV[ 0x1b] = BAD_FLAGS; // Illegal
  eV[ 0x1c] = RST_RX;    // Rst
  eV[ 0x1d] = BAD_FLAGS; // Illegal
  eV[ 0x1e] = BAD_FLAGS; // Illegal
  eV[ 0x1f] = BAD_FLAGS; // Illegal
  eV[ 0x20] = SEQ_RECV;  // No flags (Urgent not presently used)
  eV[ 0x21] = FIN_RX;    // Fin
  eV[ 0x22] = SYN_RX;    // Syn
  eV[ 0x23] = BAD_FLAGS; // Illegal
  eV[ 0x24] = RST_RX;    // Rst
  eV[ 0x25] = BAD_FLAGS; // Illegal
  eV[ 0x26] = BAD_FLAGS; // Illegal
  eV[ 0x27] = BAD_FLAGS; // Illegal
  eV[ 0x28] = SEQ_RECV;  // Psh flag is not used
  eV[ 0x29] = FIN_RX;    // Fin
  eV[ 0x2a] = SYN_RX;    // Syn
  eV[ 0x2b] = BAD_FLAGS; // Illegal
  eV[ 0x2c] = RST_RX;    // Rst
  eV[ 0x2d] = BAD_FLAGS; // Illegal
  eV[ 0x2e] = BAD_FLAGS; // Illegal
  eV[ 0x2f] = BAD_FLAGS; // Illegal
  eV[ 0x30] = ACK_RX;    // Ack (Urgent not used)
  eV[ 0x31] = FIN_ACK_RX;// Fin/Ack
  eV[ 0x32] = SYN_ACK_RX;// Syn/Ack
  eV[ 0x33] = BAD_FLAGS; // Illegal
  eV[ 0x34] = RST_RX;    // Rst
  eV[ 0x35] = BAD_FLAGS; // Illegal
  eV[ 0x36] = BAD_FLAGS; // Illegal
  eV[ 0x37] = BAD_FLAGS; // Illegal
  eV[ 0x38] = ACK_RX;    // Ack
  eV[ 0x39] = FIN_ACK_RX;// Fin/Ack
  eV[ 0x3a] = SYN_ACK_RX;// Syn/Ack
  eV[ 0x3b] = BAD_FLAGS; // Illegal
  eV[ 0x3c] = RST_RX;    // Rst
  eV[ 0x3d] = BAD_FLAGS; // Illegal
  eV[ 0x3e] = BAD_FLAGS; // Illegal
  eV[ 0x3f] = BAD_FLAGS; // Illegal
}

SA TcpStateMachine::Lookup (TcpStates_t s, Events_t e)
{
  NS_LOG_FUNCTION (this << s << e);
  return aT[s][e];
}

Events_t TcpStateMachine::FlagsEvent (uint8_t f)
{
  NS_LOG_FUNCTION (this << f);
  // Lookup event from flags
  if (f >= MAX_FLAGS) return BAD_FLAGS;
  return eV[f]; // Look up flags event
}

////End Pablo (Multipath)

static TcpStateMachine tcpStateMachine; //only instance of a TcpStateMachine



//TcpL4Protocol stuff----------------------------------------------------------

#undef NS_LOG_APPEND_CONTEXT
#define NS_LOG_APPEND_CONTEXT                                   \
  if (m_node) { std::clog << Simulator::Now ().GetSeconds () << " [node " << m_node->GetId () << "] "; } 

/* see http://www.iana.org/assignments/protocol-numbers */
const uint8_t TcpL4Protocol::PROT_NUMBER = 6;

TypeId 
TcpL4Protocol::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::TcpL4Protocol")
    .SetParent<Ipv4L4Protocol> ()
    .AddConstructor<TcpL4Protocol> ()
    .AddAttribute ("RttEstimatorType",
                   "Type of RttEstimator objects.",
                   TypeIdValue (RttMeanDeviation::GetTypeId ()),
                   MakeTypeIdAccessor (&TcpL4Protocol::m_rttTypeId),
                   MakeTypeIdChecker ())
    .AddAttribute ("SocketType",
                   "Socket type of TCP objects.",
                   TypeIdValue (TcpNewReno::GetTypeId ()),
                   MakeTypeIdAccessor (&TcpL4Protocol::m_socketTypeId),
                   MakeTypeIdChecker ())
    .AddAttribute ("SocketList", "The list of sockets associated to this protocol.",
                   ObjectVectorValue (),
                   MakeObjectVectorAccessor (&TcpL4Protocol::m_sockets),
                   MakeObjectVectorChecker<TcpSocketBase> ())
  ;
  return tid;
}

TcpL4Protocol::TcpL4Protocol ()
  : m_endPoints (new Ipv4EndPointDemux ())
{
  NS_LOG_FUNCTION_NOARGS ();
  NS_LOG_LOGIC ("Made a TcpL4Protocol "<<this);
}

TcpL4Protocol::~TcpL4Protocol ()
{
  NS_LOG_FUNCTION_NOARGS ();
}

void 
TcpL4Protocol::SetNode (Ptr<Node> node)
{
  m_node = node;
}

/* 
 * This method is called by AddAgregate and completes the aggregation
 * by setting the node in the TCP stack, link it to the ipv4 stack and 
 * adding TCP socket factory to the node.
 */
void
TcpL4Protocol::NotifyNewAggregate ()
{
  if (m_node == 0)
    {
      Ptr<Node> node = this->GetObject<Node> ();
      if (node != 0)
        {
          Ptr<Ipv4> ipv4 = this->GetObject<Ipv4> ();
          if (ipv4 != 0)
            {
              this->SetNode (node);
              ipv4->Insert (this);
              Ptr<TcpSocketFactoryImpl> tcpFactory = CreateObject<TcpSocketFactoryImpl> ();
              tcpFactory->SetTcp (this);
              node->AggregateObject (tcpFactory);
              this->SetDownTarget (MakeCallback (&Ipv4::Send, ipv4));
            }
        }
    }
  Object::NotifyNewAggregate ();
}

int 
TcpL4Protocol::GetProtocolNumber (void) const
{
  return PROT_NUMBER;
}

void
TcpL4Protocol::DoDispose (void)
{
  NS_LOG_FUNCTION_NOARGS ();
  m_sockets.clear ();

  if (m_endPoints != 0)
    {
      delete m_endPoints;
      m_endPoints = 0;
    }

  m_node = 0;
  m_downTarget.Nullify ();
  Ipv4L4Protocol::DoDispose ();
}

Ptr<Socket>
TcpL4Protocol::CreateSocket (TypeId socketTypeId)
{
  NS_LOG_FUNCTION_NOARGS ();
  ObjectFactory rttFactory;
  ObjectFactory socketFactory;
  rttFactory.SetTypeId (m_rttTypeId);
  socketFactory.SetTypeId (socketTypeId);
  Ptr<RttEstimator> rtt = rttFactory.Create<RttEstimator> ();
  Ptr<TcpSocketBase> socket = socketFactory.Create<TcpSocketBase> ();
  socket->SetNode (m_node);
  socket->SetTcp (this);
  socket->SetRtt (rtt);
  return socket;
}

Ptr<Socket>
TcpL4Protocol::CreateSocket (void)
{
  return CreateSocket (m_socketTypeId);
}

Ipv4EndPoint *
TcpL4Protocol::Allocate (void)
{
  NS_LOG_FUNCTION_NOARGS ();
  return m_endPoints->Allocate ();
}

Ipv4EndPoint *
TcpL4Protocol::Allocate (Ipv4Address address)
{
  NS_LOG_FUNCTION (this << address);
  return m_endPoints->Allocate (address);
}

Ipv4EndPoint *
TcpL4Protocol::Allocate (uint16_t port)
{
  NS_LOG_FUNCTION (this << port);
  return m_endPoints->Allocate (port);
}

Ipv4EndPoint *
TcpL4Protocol::Allocate (Ipv4Address address, uint16_t port)
{
  NS_LOG_FUNCTION (this << address << port);
  return m_endPoints->Allocate (address, port);
}

Ipv4EndPoint *
TcpL4Protocol::Allocate (Ipv4Address localAddress, uint16_t localPort,
                         Ipv4Address peerAddress, uint16_t peerPort)
{
  NS_LOG_FUNCTION (this << localAddress << localPort << peerAddress << peerPort);
  return m_endPoints->Allocate (localAddress, localPort,
                                peerAddress, peerPort);
}

void 
TcpL4Protocol::DeAllocate (Ipv4EndPoint *endPoint)
{
  NS_LOG_FUNCTION (this << endPoint);
  m_endPoints->DeAllocate (endPoint);
}

enum Ipv4L4Protocol::RxStatus
TcpL4Protocol::Receive (Ptr<Packet> packet,
                        Ipv4Header const &ipHeader,
                        Ptr<Ipv4Interface> incomingInterface)
{
  NS_LOG_FUNCTION (this << packet << ipHeader << incomingInterface);

  TcpHeader tcpHeader;
  if(Node::ChecksumEnabled ())
    {
      tcpHeader.EnableChecksums ();
      tcpHeader.InitializeChecksum (ipHeader.GetSource (), ipHeader.GetDestination (), PROT_NUMBER);
    }

  packet->PeekHeader (tcpHeader);

  NS_LOG_LOGIC ("TcpL4Protocol " << this
                                 << " receiving seq " << tcpHeader.GetSequenceNumber ()
                                 << " ack " << tcpHeader.GetAckNumber ()
                                 << " flags "<< std::hex << (int)tcpHeader.GetFlags () << std::dec
                                 << " data size " << packet->GetSize ());

  if(!tcpHeader.IsChecksumOk ())
    {
      NS_LOG_INFO ("Bad checksum, dropping packet!");
      return Ipv4L4Protocol::RX_CSUM_FAILED;
    }

  ////Pablo UC// CALL TO TRACE

  if (!m_tcpTraceCallback.IsNull())
	  m_tcpTraceCallback (packet,ipHeader);
  ////Pablo UC

  NS_LOG_LOGIC ("TcpL4Protocol "<<this<<" received a packet");
  Ipv4EndPointDemux::EndPoints endPoints =
    m_endPoints->Lookup (ipHeader.GetDestination (), tcpHeader.GetDestinationPort (),
                         ipHeader.GetSource (), tcpHeader.GetSourcePort (),incomingInterface);
  if (endPoints.empty ())
    {
      NS_LOG_LOGIC ("  No endpoints matched on TcpL4Protocol "<<this);
      std::ostringstream oss;
      oss<<"  destination IP: ";
      ipHeader.GetDestination ().Print (oss);
      oss<<" destination port: "<< tcpHeader.GetDestinationPort ()<<" source IP: ";
      ipHeader.GetSource ().Print (oss);
      oss<<" source port: "<<tcpHeader.GetSourcePort ();
      NS_LOG_LOGIC (oss.str ());

      if (!(tcpHeader.GetFlags () & TcpHeader::RST))
        {
          // build a RST packet and send
          Ptr<Packet> rstPacket = Create<Packet> ();
          TcpHeader header;
          if (tcpHeader.GetFlags () & TcpHeader::ACK)
            {
              // ACK bit was set
              header.SetFlags (TcpHeader::RST);
              header.SetSequenceNumber (header.GetAckNumber ());
            }
          else
            {
              header.SetFlags (TcpHeader::RST | TcpHeader::ACK);
              header.SetSequenceNumber (SequenceNumber32 (0));
              header.SetAckNumber (header.GetSequenceNumber () + SequenceNumber32 (1));
            }
          header.SetSourcePort (tcpHeader.GetDestinationPort ());
          header.SetDestinationPort (tcpHeader.GetSourcePort ());
          SendPacket (rstPacket, header, ipHeader.GetDestination (), ipHeader.GetSource ());
          return Ipv4L4Protocol::RX_ENDPOINT_CLOSED;
        }
      else
        {
          return Ipv4L4Protocol::RX_ENDPOINT_CLOSED;
        }
    }
  NS_ASSERT_MSG (endPoints.size () == 1, "Demux returned more than one endpoint");
  NS_LOG_LOGIC ("TcpL4Protocol "<<this<<" forwarding up to endpoint/socket");
  (*endPoints.begin ())->ForwardUp (packet, ipHeader, tcpHeader.GetSourcePort (), 
                                    incomingInterface);
  return Ipv4L4Protocol::RX_OK;
}

void
TcpL4Protocol::Send (Ptr<Packet> packet, 
                     Ipv4Address saddr, Ipv4Address daddr,
                     uint16_t sport, uint16_t dport, Ptr<NetDevice> oif)
{
  NS_LOG_FUNCTION (this << packet << saddr << daddr << sport << dport << oif);

  TcpHeader tcpHeader;
  tcpHeader.SetDestinationPort (dport);
  tcpHeader.SetSourcePort (sport);
  if(Node::ChecksumEnabled ())
    {
      tcpHeader.EnableChecksums ();
    }
  tcpHeader.InitializeChecksum (saddr,
                                daddr,
                                PROT_NUMBER);
  tcpHeader.SetFlags (TcpHeader::ACK);
  tcpHeader.SetAckNumber (SequenceNumber32 (0));

  packet->AddHeader (tcpHeader);

  Ptr<Ipv4> ipv4 = m_node->GetObject<Ipv4> ();
  if (ipv4 != 0)
    {
      Ipv4Header header;
      header.SetDestination (daddr);
      header.SetProtocol (PROT_NUMBER);
      Socket::SocketErrno errno_;
      Ptr<Ipv4Route> route;
      Ptr<NetDevice> oif (0); //specify non-zero if bound to a source address
      if (ipv4->GetRoutingProtocol () != 0)
        {
          route = ipv4->GetRoutingProtocol ()->RouteOutput (packet, header, oif, errno_);
        }
      else
        {
          NS_LOG_ERROR ("No IPV4 Routing Protocol");
          route = 0;
        }
      ipv4->Send (packet, saddr, daddr, PROT_NUMBER, route);
    }
}

void
TcpL4Protocol::SendPacket (Ptr<Packet> packet, const TcpHeader &outgoing,
                           Ipv4Address saddr, Ipv4Address daddr, Ptr<NetDevice> oif)
{
  NS_LOG_LOGIC ("TcpL4Protocol " << this
                                 << " sending seq " << outgoing.GetSequenceNumber ()
                                 << " ack " << outgoing.GetAckNumber ()
                                 << " flags " << std::hex << (int)outgoing.GetFlags () << std::dec
                                 << " data size " << packet->GetSize ());
  NS_LOG_FUNCTION (this << packet << saddr << daddr << oif);
  // XXX outgoingHeader cannot be logged

  TcpHeader outgoingHeader = outgoing;
  outgoingHeader.SetLength (5); //header length in units of 32bit words
  /* outgoingHeader.SetUrgentPointer (0); //XXX */
  if(Node::ChecksumEnabled ())
    {
      outgoingHeader.EnableChecksums ();
    }
  outgoingHeader.InitializeChecksum (saddr, daddr, PROT_NUMBER);

  packet->AddHeader (outgoingHeader);

  Ptr<Ipv4> ipv4 = 
    m_node->GetObject<Ipv4> ();
  if (ipv4 != 0)
    {
      Ipv4Header header;
      header.SetDestination (daddr);
      header.SetProtocol (PROT_NUMBER);
      Socket::SocketErrno errno_;
      Ptr<Ipv4Route> route;
      if (ipv4->GetRoutingProtocol () != 0)
        {
          route = ipv4->GetRoutingProtocol ()->RouteOutput (packet, header, oif, errno_);
        }
      else
        {
          NS_LOG_ERROR ("No IPV4 Routing Protocol");
          route = 0;
        }
      m_downTarget (packet, saddr, daddr, PROT_NUMBER, route);
    }
  else
    NS_FATAL_ERROR ("Trying to use Tcp on a node without an Ipv4 interface");
}

void
TcpL4Protocol::SetDownTarget (Ipv4L4Protocol::DownTargetCallback callback)
{
  m_downTarget = callback;
}

Ipv4L4Protocol::DownTargetCallback
TcpL4Protocol::GetDownTarget (void) const
{
  return m_downTarget;
}

////Pablo UC
void
TcpL4Protocol::SetTcpTraceCallback(TcpTraceCallback callback)
{
	m_tcpTraceCallback = callback;
}
////End Pablo U

} // namespace ns3

