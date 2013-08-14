
/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2013 Universidad de Cantabria
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
 * Author: David Gómez Fernández <dgomez@tlmat.unican.es>
 *         Ramón Agüero Calvo <ramon@tlmat.unican.es>
 *         Pablo Garrido Ortiz <pgo85@alumnos.unican.es>
 */// Adapted from ApplicationOnOff in GTNetS.

#include "ns3/log.h"
#include "ns3/address.h"
#include "ns3/node.h"
#include "ns3/nstime.h"
#include "ns3/data-rate.h"
#include "ns3/random-variable.h"
#include "ns3/socket.h"
#include "ns3/simulator.h"
#include "ns3/socket-factory.h"
#include "ns3/packet.h"
#include "ns3/uinteger.h"
#include "ns3/inet-socket-address.h"
#include "ns3/trace-source-accessor.h"
#include "onoff-application.h"
#include "mptcp-onoff-application.h"
#include "ns3/udp-socket-factory.h"

NS_LOG_COMPONENT_DEFINE ("MpTcpOnOffApplication");

using namespace std;

namespace ns3 {

NS_OBJECT_ENSURE_REGISTERED (MpTcpOnOffApplication);

TypeId
MpTcpOnOffApplication::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::MpTcpOnOffApplication")
    .SetParent<Application> ()
    .AddConstructor<MpTcpOnOffApplication> ()
    .AddAttribute ("DataRate", "The data rate in on state.",
                   DataRateValue (DataRate ("500kb/s")),
                   MakeDataRateAccessor (&MpTcpOnOffApplication::m_cbrRate),
                   MakeDataRateChecker ())
    .AddAttribute ("PacketSize", "The size of packets sent in on state",
                   UintegerValue (512),
                   MakeUintegerAccessor (&MpTcpOnOffApplication::m_pktSize),
                   MakeUintegerChecker<uint32_t> (1))
    .AddAttribute ("Remote", "The address of the destination",
                   AddressValue (),
                   MakeAddressAccessor (&MpTcpOnOffApplication::m_peer),
                   MakeAddressChecker ())
    .AddAttribute ("OnTime", "A RandomVariable used to pick the duration of the 'On' state.",
                   RandomVariableValue (ConstantVariable (1.0)),
                   MakeRandomVariableAccessor (&MpTcpOnOffApplication::m_onTime),
                   MakeRandomVariableChecker ())
    .AddAttribute ("OffTime", "A RandomVariable used to pick the duration of the 'Off' state.",
                   RandomVariableValue (ConstantVariable (1.0)),
                   MakeRandomVariableAccessor (&MpTcpOnOffApplication::m_offTime),
                   MakeRandomVariableChecker ())
    .AddAttribute ("MaxBytes", 
                   "The total number of bytes to send. Once these bytes are sent, "
                   "no packet is sent again, even in on state. The value zero means "
                   "that there is no limit.",
                   UintegerValue (0),
                   MakeUintegerAccessor (&MpTcpOnOffApplication::m_maxBytes),
                   MakeUintegerChecker<uint32_t> ())
    .AddAttribute ("Protocol", "The type of protocol to use.",
                   TypeIdValue (TcpSocketFactory::GetTypeId ()),
                   MakeTypeIdAccessor (&MpTcpOnOffApplication::m_tid),
                   MakeTypeIdChecker ())
    .AddTraceSource ("Tx", "A new packet is created and is sent",
                     MakeTraceSourceAccessor (&MpTcpOnOffApplication::m_txTrace))
    .AddAttribute ("ControlCongestion", "The used algorithm to handle pakcet reordering.",
                   UintegerValue(0),
                   MakeUintegerAccessor(&MpTcpOnOffApplication::m_cControl),
                   MakeUintegerChecker<uint32_t>())
    .AddAttribute("localAddress", "The address of the source",
    			  AddressValue (),
    		      MakeAddressAccessor (&MpTcpOnOffApplication::m_local),
    		      MakeAddressChecker ())
    .AddAttribute("WindowTracing", "The TCP congestion Window",
    			  UintegerValue (0),
       		      MakeUintegerAccessor (&MpTcpOnOffApplication::m_windowTracing),
       		      MakeUintegerChecker<uint32_t>())
  ;
  return tid;
}


MpTcpOnOffApplication::MpTcpOnOffApplication ()
{
  NS_LOG_FUNCTION_NOARGS ();
  m_socket = 0;
  m_connected = false;
  m_residualBits = 0;
  m_lastStartTime = Seconds (0);
  m_totBytes = 0;
  m_mpWindowPropTracing = CreateObject<ProprietaryTracing> ();
}

MpTcpOnOffApplication::~MpTcpOnOffApplication()
{
  NS_LOG_FUNCTION_NOARGS ();
}

void 
MpTcpOnOffApplication::SetMaxBytes (uint32_t maxBytes)
{
  NS_LOG_FUNCTION (this << maxBytes);
  m_maxBytes = maxBytes;
}

Ptr<Socket>
MpTcpOnOffApplication::GetSocket (void) const
{
  NS_LOG_FUNCTION (this);
  return m_socket;
}

void
MpTcpOnOffApplication::DoDispose (void)
{
  NS_LOG_FUNCTION_NOARGS ();

  m_socket = 0;
  // chain up
  Application::DoDispose ();
}

// Application Methods
void MpTcpOnOffApplication::StartApplication () // Called at time specified by Start
{
  NS_LOG_FUNCTION_NOARGS ();

  // Create the socket if not already
  if (!m_socket)
    {
	  m_socket = new MpTcpSocketBase(GetNode());
	  m_socket->SetSegmentSize(m_pktSize);
      m_socket->SetCongestionCtrlAlgo ((CongestionCtrl_t) m_cControl);
	  m_socket->SetDataDistribAlgo (Round_Robin);
	  m_socket->SetPacketReorderAlgo (D_SACK);
      //m_socket = Socket::CreateSocket (GetNode (), m_tid);
      m_socket->Bind ();
	  Ipv4Address ipaddr;
	  InetSocketAddress transport = InetSocketAddress::ConvertFrom (m_local);
	  ipaddr = transport.GetIpv4();
      m_socket->SetSourceAddress(ipaddr);
	  m_socket->allocateRecvingBuffer(90000000);
	  m_socket->allocateSendingBuffer(90000000);
	  m_socket->SetunOrdBufMaxSize(50);
      m_socket->Connect (m_peer);

      if (m_windowTracing)
      {
      //Trace Window and RTT
      	  m_socket->SetMpWindowTraceCallback (MakeCallback (&ProprietaryTracing::DefaultWindowTrace, m_mpWindowPropTracing));
      	  string windowFileName;
      	  switch (m_cControl){
      	  case 0:
      	  {
      		  windowFileName += "Window_Uncoupled_TCPs.tr";
      		  break;
      	  }
      	  case 1:
      	  {
      		  windowFileName += "Window_Linked_Increase.tr";
      		  break;
      	  }
      	  case 2:
      	  {
      		  windowFileName += "Window_RTT_Compensator.tr";
      		  break;
      	  }
      	  case 3:
      	  {
      		  windowFileName += "Window_Fully_Coupled.tr";
      		  break;
      	  }
      	  default:
      	  {
      		  windowFileName += "Window.tr";
      	  }
      	  }
      	  m_mpWindowPropTracing->OpenMpTcpWindowTraceFile(windowFileName);
      }
      //m_socket->SetAllowBroadcast (true);
      //m_socket->ShutdownRecv ();
    }
  // Insure no pending event
  //CancelEvents ();
  // If we are not yet connected, there is nothing to do here
  // The ConnectionComplete upcall will start timers at that time
  //if (!m_connected) return;
  Simulator::Schedule (Seconds (1.0), &MpTcpOnOffApplication::ScheduleStartEvent,this);
  //ScheduleStartEvent ();
}

void MpTcpOnOffApplication::StopApplication () // Called at time specified by Stop
{
  NS_LOG_FUNCTION_NOARGS ();

  //CancelEvents ();
  if(m_socket != 0)
    {
      m_socket->Close ();
//      NS_LOG_UNCOND("mpTopology:: currentTxBytes = " << m_totBytes);
//      NS_LOG_UNCOND("mpTopology:: totalTxBytes   = " << m_maxBytes);
//      NS_LOG_UNCOND("mpTopology:: connection to remote host has been closed");
    }
  else
    {
      NS_LOG_WARN ("MpTcpOnOffApplication found null socket to close in StopApplication");
    }
}

void MpTcpOnOffApplication::CancelEvents ()
{
  NS_LOG_FUNCTION_NOARGS ();

  if (m_sendEvent.IsRunning ())
    { // Cancel the pending send packet event
      // Calculate residual bits since last packet sent
      Time delta (Simulator::Now () - m_lastStartTime);
      int64x64_t bits = delta.To (Time::S) * m_cbrRate.GetBitRate ();
      m_residualBits += bits.GetHigh ();
    }
  Simulator::Cancel (m_sendEvent);
  Simulator::Cancel (m_startStopEvent);
}

// Event handlers
void MpTcpOnOffApplication::StartSending ()
{
  NS_LOG_FUNCTION_NOARGS ();
  m_lastStartTime = Simulator::Now ();
  ScheduleNextTx ();  // Schedule the send packet event
  //ScheduleStopEvent ();
}

void MpTcpOnOffApplication::StopSending ()
{
  NS_LOG_FUNCTION_NOARGS ();
  CancelEvents ();

  ScheduleStartEvent ();
}

// Private helpers
void MpTcpOnOffApplication::ScheduleNextTx ()
{
  NS_LOG_FUNCTION_NOARGS ();

  if (m_maxBytes == 0 || m_totBytes < m_maxBytes)
    {
      uint32_t bits = m_pktSize * 8;
      NS_LOG_LOGIC ("bits = " << bits);
//      Time nextTime (Seconds (bits /
//                              static_cast<double>(m_cbrRate.GetBitRate ()))); // Time till next packet
      Time nextTime (Seconds (bits /
                                    static_cast<double>( 22000000))); // Time till next packet
      NS_LOG_LOGIC ("nextTime = " << nextTime);
      m_sendEvent = Simulator::Schedule (nextTime,
                                         &MpTcpOnOffApplication::SendPacket, this);
    }
  else
    { // All done, cancel any pending events
	  Simulator::Schedule (Seconds (900.0), &MpTcpOnOffApplication::StopApplication,this);
	 // StopApplication ();
    }
}

void MpTcpOnOffApplication::ScheduleStartEvent ()
{  // Schedules the event to start sending data (switch to the "On" state)
  NS_LOG_FUNCTION_NOARGS ();

  Time offInterval = Seconds (m_offTime.GetValue ());
  NS_LOG_LOGIC ("start at " << offInterval);
  m_startStopEvent = Simulator::Schedule (offInterval, &MpTcpOnOffApplication::StartSending, this);
}

void MpTcpOnOffApplication::ScheduleStopEvent ()
{  // Schedules the event to stop sending data (switch to "Off" state)
  NS_LOG_FUNCTION_NOARGS ();

  Time onInterval = Seconds (m_onTime.GetValue ());
  NS_LOG_LOGIC ("stop at " << onInterval);
  m_startStopEvent = Simulator::Schedule (onInterval, &MpTcpOnOffApplication::StopSending, this);
}


void MpTcpOnOffApplication::SendPacket ()
{
  NS_LOG_FUNCTION_NOARGS ();
  NS_LOG_LOGIC ("sending packet at " << Simulator::Now ());
  NS_ASSERT (m_sendEvent.IsExpired ());
  Ptr<Packet> packet = Create<Packet> (m_pktSize);
  m_txTrace (packet);
  m_socket->FillBuffer(&m_data[m_totBytes], m_pktSize);
//  m_socket->Send (packet,0);
  m_socket->SendBufferedData();
  m_totBytes += m_pktSize;
  m_lastStartTime = Simulator::Now ();
  m_residualBits = 0;
  ScheduleNextTx ();

//  uint32_t pktSize = 200000;
//    Ptr<Packet> packet = Create<Packet> (pktSize);
//    m_txTrace (packet);
//    m_socket->FillBuffer(&m_data[m_totBytes], pktSize);
//  //  m_socket->Send (packet,0);
//    m_socket->SendBufferedData();
//    m_totBytes += pktSize;
//    m_lastStartTime = Simulator::Now ();
//    m_residualBits = 0;
//    ScheduleNextTx ();
}

void MpTcpOnOffApplication::ConnectionSucceeded (Ptr<Socket>)
{
  NS_LOG_FUNCTION_NOARGS ();

  m_connected = true;
  ScheduleStartEvent ();
}

void MpTcpOnOffApplication::ConnectionFailed (Ptr<Socket>)
{
  NS_LOG_FUNCTION_NOARGS ();
  cout << "MpTcpOnOffApplication, Connection Failed" << endl;
}

} // Namespace ns3
