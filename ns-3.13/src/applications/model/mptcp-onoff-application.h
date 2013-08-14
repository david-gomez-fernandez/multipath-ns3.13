
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

#ifndef MPTCP_ONOFF_APPLICATION_H
#define MPTCP_ONOFF_APPLICATION_H

#include "ns3/proprietary-tracing.h"

#include "ns3/address.h"
#include "ns3/application.h"
#include "ns3/event-id.h"
#include "ns3/ptr.h"
#include "ns3/data-rate.h"
#include "ns3/random-variable.h"
#include "ns3/traced-callback.h"
#include "ns3/mp-tcp-socket-base.h"

//#include "ns3/proprietary-tracing.h"

namespace ns3 {

class Address;
class RandomVariable;
class Socket;

/**
 * \ingroup applications 
 * \defgroup onoff MpTcpOnOffApplication
 *
 * This traffic generator follows an On/Off pattern: after 
 * Application::StartApplication
 * is called, "On" and "Off" states alternate. The duration of each of
 * these states is determined with the onTime and the offTime random
 * variables. During the "Off" state, no traffic is generated.
 * During the "On" state, cbr traffic is generated. This cbr traffic is
 * characterized by the specified "data rate" and "packet size".
 */
/**
* \ingroup onoff
*
* \brief Generate traffic to a single destination according to an
*        OnOff pattern.
*
* This traffic generator follows an On/Off pattern: after
* Application::StartApplication
* is called, "On" and "Off" states alternate. The duration of each of
* these states is determined with the onTime and the offTime random
* variables. During the "Off" state, no traffic is generated.
* During the "On" state, cbr traffic is generated. This cbr traffic is
* characterized by the specified "data rate" and "packet size".
*
* Note:  When an application is started, the first packet transmission
* occurs _after_ a delay equal to (packet size/bit rate).  Note also,
* when an application transitions into an off state in between packet
* transmissions, the remaining time until when the next transmission
* would have occurred is cached and is used when the application starts
* up again.  Example:  packet size = 1000 bits, bit rate = 500 bits/sec.
* If the application is started at time 3 seconds, the first packet
* transmission will be scheduled for time 5 seconds (3 + 1000/500)
* and subsequent transmissions at 2 second intervals.  If the above
* application were instead stopped at time 4 seconds, and restarted at
* time 5.5 seconds, then the first packet would be sent at time 6.5 seconds,
* because when it was stopped at 4 seconds, there was only 1 second remaining
* until the originally scheduled transmission, and this time remaining
* information is cached and used to schedule the next transmission
* upon restarting.
*
* If the underlying socket type supports broadcast, this application
* will automatically enable the SetAllowBroadcast(true) socket option.
*/
class MpTcpOnOffApplication : public Application
{
public:
  static TypeId GetTypeId (void);

  MpTcpOnOffApplication ();

  virtual ~MpTcpOnOffApplication();

  /**
   * \param maxBytes the total number of bytes to send
   *
   * Set the total number of bytes to send. Once these bytes are sent, no packet 
   * is sent again, even in on state. The value zero means that there is no 
   * limit.
   */
  void SetMaxBytes (uint32_t maxBytes);

  /**
   * \return pointer to associated socket
   */
  Ptr<Socket> GetSocket (void) const;

protected:
  virtual void DoDispose (void);
private:
  // inherited from Application base class.
  virtual void StartApplication (void);    // Called at time specified by Start
  virtual void StopApplication (void);     // Called at time specified by Stop

  //helpers
  void CancelEvents ();

  void Construct (Ptr<Node> n,
                  const Address &remote,
                  std::string tid,
                  const RandomVariable& ontime,
                  const RandomVariable& offtime,
                  uint32_t size);


  // Event handlers
  void StartSending ();
  void StopSending ();
  void SendPacket ();

  Ptr<MpTcpSocketBase>    m_socket;       // Associated socket
  Address         m_peer;         // Peer address
  bool            m_connected;    // True if connected
  RandomVariable  m_onTime;       // rng for On Time
  RandomVariable  m_offTime;      // rng for Off Time
  DataRate        m_cbrRate;      // Rate that data is generated
  uint32_t        m_pktSize;      // Size of packets
  uint32_t        m_residualBits; // Number of generated, but not sent, bits
  Time            m_lastStartTime; // Time last packet sent
  uint32_t        m_maxBytes;     // Limit total number of bytes sent
  uint32_t        m_totBytes;     // Total bytes sent so far
  EventId         m_startStopEvent;     // Event id for next start or stop event
  EventId         m_sendEvent;    // Eventid of pending "send packet" event
  bool            m_sending;      // True if currently in sending state
  TypeId          m_tid;
  uint8_t         m_data[999999999];
  TracedCallback<Ptr<const Packet> > m_txTrace;
  uint32_t m_cControl;
  Address 	      m_local;
  Ptr <ProprietaryTracing> m_mpWindowPropTracing;
  uint32_t m_windowTracing;
private:
  void ScheduleNextTx ();
  void ScheduleStartEvent ();
  void ScheduleStopEvent ();
  void ConnectionSucceeded (Ptr<Socket>);
  void ConnectionFailed (Ptr<Socket>);
  void Ignore (Ptr<Socket>);
};

} // namespace ns3

#endif /* ONOFF_APPLICATION_H */
