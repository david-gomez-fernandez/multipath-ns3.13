/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2005,2006 INRIA
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
 * Author: Mathieu Lacage <mathieu.lacage@sophia.inria.fr>
 */

#include "yans-wifi-phy.h"
#include "yans-wifi-channel.h"
#include "wifi-mode.h"
#include "wifi-preamble.h"
#include "wifi-phy-state-helper.h"
#include "error-rate-model.h"
#include "ns3/simulator.h"
#include "ns3/packet.h"
#include "ns3/random-variable.h"
#include "ns3/assert.h"
#include "ns3/log.h"
#include "ns3/double.h"
#include "ns3/uinteger.h"
#include "ns3/enum.h"
#include "ns3/pointer.h"
#include "ns3/net-device.h"
#include "ns3/trace-source-accessor.h"
#include <math.h>

////David/Ramón
#include "ns3/error-model.h"
//YansWifiPhy::EndReceive headers parser
#include "ns3/wifi-mac-header.h"
#include "ns3/llc-snap-header.h"
#include "ns3/ipv4-header.h"
#include "ns3/tcp-header.h"
#include "ns3/mobility-model.h"
#include "ns3/bear-propagation-loss-model.h"
#include "ns3/hidden-markov-propagation-loss-model.h"
#include "ns3/node-list.h"
#include "ns3/wifi-net-device.h"
////End David/Ramón

NS_LOG_COMPONENT_DEFINE ("YansWifiPhy");

namespace ns3 {

NS_OBJECT_ENSURE_REGISTERED (YansWifiPhy);

TypeId
YansWifiPhy::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::YansWifiPhy")
    .SetParent<WifiPhy> ()
    .AddConstructor<YansWifiPhy> ()
    .AddAttribute ("EnergyDetectionThreshold",
                   "The energy of a received signal should be higher than "
                   "this threshold (dbm) to allow the PHY layer to detect the signal.",
                   DoubleValue (-96.0),
                   MakeDoubleAccessor (&YansWifiPhy::SetEdThreshold,
                                       &YansWifiPhy::GetEdThreshold),
                   MakeDoubleChecker<double> ())
    .AddAttribute ("CcaMode1Threshold",
                   "The energy of a received signal should be higher than "
                   "this threshold (dbm) to allow the PHY layer to declare CCA BUSY state",
                   DoubleValue (-99.0),
                   MakeDoubleAccessor (&YansWifiPhy::SetCcaMode1Threshold,
                                       &YansWifiPhy::GetCcaMode1Threshold),
                   MakeDoubleChecker<double> ())
    .AddAttribute ("TxGain",
                   "Transmission gain (dB).",
                   DoubleValue (1.0),
                   MakeDoubleAccessor (&YansWifiPhy::SetTxGain,
                                       &YansWifiPhy::GetTxGain),
                   MakeDoubleChecker<double> ())
    .AddAttribute ("RxGain",
                   "Reception gain (dB).",
                   DoubleValue (1.0),
                   MakeDoubleAccessor (&YansWifiPhy::SetRxGain,
                                       &YansWifiPhy::GetRxGain),
                   MakeDoubleChecker<double> ())
    .AddAttribute ("TxPowerLevels",
                   "Number of transmission power levels available between "
                   "TxPowerStart and TxPowerEnd included.",
                   UintegerValue (1),
                   MakeUintegerAccessor (&YansWifiPhy::m_nTxPower),
                   MakeUintegerChecker<uint32_t> ())
    .AddAttribute ("TxPowerEnd",
                   "Maximum available transmission level (dbm).",
                   DoubleValue (16.0206),
                   MakeDoubleAccessor (&YansWifiPhy::SetTxPowerEnd,
                                       &YansWifiPhy::GetTxPowerEnd),
                   MakeDoubleChecker<double> ())
    .AddAttribute ("TxPowerStart",
                   "Minimum available transmission level (dbm).",
                   DoubleValue (16.0206),
                   MakeDoubleAccessor (&YansWifiPhy::SetTxPowerStart,
                                       &YansWifiPhy::GetTxPowerStart),
                   MakeDoubleChecker<double> ())
    .AddAttribute ("RxNoiseFigure",
                   "Loss (dB) in the Signal-to-Noise-Ratio due to non-idealities in the receiver."
                   " According to Wikipedia (http://en.wikipedia.org/wiki/Noise_figure), this is "
                   "\"the difference in decibels (dB) between"
                   " the noise output of the actual receiver to the noise output of an "
                   " ideal receiver with the same overall gain and bandwidth when the receivers "
                   " are connected to sources at the standard noise temperature T0 (usually 290 K)\"."
                   " For",
                   DoubleValue (7),
                   MakeDoubleAccessor (&YansWifiPhy::SetRxNoiseFigure,
                                       &YansWifiPhy::GetRxNoiseFigure),
                   MakeDoubleChecker<double> ())
    .AddAttribute ("State", "The state of the PHY layer",
                   PointerValue (),
                   MakePointerAccessor (&YansWifiPhy::m_state),
                   MakePointerChecker<WifiPhyStateHelper> ())
    .AddAttribute ("ChannelSwitchDelay",
                   "Delay between two short frames transmitted on different frequencies. NOTE: Unused now.",
                   TimeValue (MicroSeconds (250)),
                   MakeTimeAccessor (&YansWifiPhy::m_channelSwitchDelay),
                   MakeTimeChecker ())
    .AddAttribute ("ChannelNumber",
                   "Channel center frequency = Channel starting frequency + 5 MHz * (nch - 1)",
                   UintegerValue (1),
                   MakeUintegerAccessor (&YansWifiPhy::SetChannelNumber,
                                         &YansWifiPhy::GetChannelNumber),
                   MakeUintegerChecker<uint16_t> ())

    .AddAttribute ("ErrorModel",
	           "The receiver error model used to simulate packet loss",
		   PointerValue(),
		   MakePointerAccessor (&YansWifiPhy::m_errorModel),
		   MakePointerChecker<ErrorModel>())


  ;
  return tid;
}

YansWifiPhy::YansWifiPhy ()
  :  m_channelNumber (1),
    m_endRxEvent (),
    m_random (0.0, 1.0),
    m_channelStartingFrequency (0),

    m_ranvar (0.0, 1.0),
    m_errorModel (0)

{
  NS_LOG_FUNCTION (this);
  m_state = CreateObject<WifiPhyStateHelper> ();
}

YansWifiPhy::~YansWifiPhy ()
{
  NS_LOG_FUNCTION (this);
}

void
YansWifiPhy::DoDispose (void)
{
  NS_LOG_FUNCTION (this);
  m_channel = 0;
  m_deviceRateSet.clear ();
  m_device = 0;
  m_mobility = 0;
  m_state = 0;

  m_errorModel = 0;
}

void
YansWifiPhy::ConfigureStandard (enum WifiPhyStandard standard)
{
  NS_LOG_FUNCTION (this << standard);
  switch (standard)
    {
    case WIFI_PHY_STANDARD_80211a:
      Configure80211a ();
      break;
    case WIFI_PHY_STANDARD_80211b:
      Configure80211b ();
      break;
    case WIFI_PHY_STANDARD_80211g:
      Configure80211g ();
      break;
    case WIFI_PHY_STANDARD_80211_10MHZ:
      Configure80211_10Mhz ();
      break;
    case WIFI_PHY_STANDARD_80211_5MHZ:
      Configure80211_5Mhz ();
      break;
    case WIFI_PHY_STANDARD_holland:
      ConfigureHolland ();
      break;
    case WIFI_PHY_STANDARD_80211p_CCH:
      Configure80211p_CCH ();
      break;
    case WIFI_PHY_STANDARD_80211p_SCH:
      Configure80211p_SCH ();
      break;
    default:
      NS_ASSERT (false);
      break;
    }
}

void
YansWifiPhy::SetRxNoiseFigure (double noiseFigureDb)
{
  NS_LOG_FUNCTION (this << noiseFigureDb);
  m_interference.SetNoiseFigure (DbToRatio (noiseFigureDb));
}
void
YansWifiPhy::SetTxPowerStart (double start)
{
  NS_LOG_FUNCTION (this << start);
  m_txPowerBaseDbm = start;
}
void
YansWifiPhy::SetTxPowerEnd (double end)
{
  NS_LOG_FUNCTION (this << end);
  m_txPowerEndDbm = end;
}
void
YansWifiPhy::SetNTxPower (uint32_t n)
{
  NS_LOG_FUNCTION (this << n);
  m_nTxPower = n;
}
void
YansWifiPhy::SetTxGain (double gain)
{
  NS_LOG_FUNCTION (this << gain);
  m_txGainDb = gain;
}
void
YansWifiPhy::SetRxGain (double gain)
{
  NS_LOG_FUNCTION (this << gain);
  m_rxGainDb = gain;
}
void
YansWifiPhy::SetEdThreshold (double threshold)
{
  NS_LOG_FUNCTION (this << threshold);
  m_edThresholdW = DbmToW (threshold);
}
void
YansWifiPhy::SetCcaMode1Threshold (double threshold)
{
  NS_LOG_FUNCTION (this << threshold);
  m_ccaMode1ThresholdW = DbmToW (threshold);
}
void
YansWifiPhy::SetErrorRateModel (Ptr<ErrorRateModel> rate)
{
  m_interference.SetErrorRateModel (rate);
}

void YansWifiPhy::SetErrorModel(Ptr<ErrorModel> errorModel)
{
	m_errorModel = errorModel;
}

void
YansWifiPhy::SetDevice (Ptr<Object> device)
{
  m_device = device;
}
void
YansWifiPhy::SetMobility (Ptr<Object> mobility)
{
  m_mobility = mobility;
}

double
YansWifiPhy::GetRxNoiseFigure (void) const
{
  return RatioToDb (m_interference.GetNoiseFigure ());
}
double
YansWifiPhy::GetTxPowerStart (void) const
{
  return m_txPowerBaseDbm;
}
double
YansWifiPhy::GetTxPowerEnd (void) const
{
  return m_txPowerEndDbm;
}
double
YansWifiPhy::GetTxGain (void) const
{
  return m_txGainDb;
}
double
YansWifiPhy::GetRxGain (void) const
{
  return m_rxGainDb;
}

double
YansWifiPhy::GetEdThreshold (void) const
{
  return WToDbm (m_edThresholdW);
}

double
YansWifiPhy::GetCcaMode1Threshold (void) const
{
  return WToDbm (m_ccaMode1ThresholdW);
}

Ptr<ErrorRateModel>
YansWifiPhy::GetErrorRateModel (void) const
{
  return m_interference.GetErrorRateModel ();
}

Ptr<ErrorModel> YansWifiPhy::GetErrorModel (void) const
{
	return m_errorModel;
}


Ptr<Object>
YansWifiPhy::GetDevice (void) const
{
  return m_device;
}
Ptr<Object>
YansWifiPhy::GetMobility (void)
{
  return m_mobility;
}

double
YansWifiPhy::CalculateSnr (WifiMode txMode, double ber) const
{
  return m_interference.GetErrorRateModel ()->CalculateSnr (txMode, ber);
}

Ptr<WifiChannel>
YansWifiPhy::GetChannel (void) const
{
  return m_channel;
}
void
YansWifiPhy::SetChannel (Ptr<YansWifiChannel> channel)
{
  m_channel = channel;
  m_channel->Add (this);
}

void
YansWifiPhy::SetChannelNumber (uint16_t nch)
{
  if (Simulator::Now () == Seconds (0))
    {
      // this is not channel switch, this is initialization
      NS_LOG_DEBUG ("start at channel " << nch);
      m_channelNumber = nch;
      return;
    }

  NS_ASSERT (!IsStateSwitching ());
  switch (m_state->GetState ())
    {
    case YansWifiPhy::RX:
      NS_LOG_DEBUG ("drop packet because of channel switching while reception");
      m_endRxEvent.Cancel ();
      goto switchChannel;
      break;
    case YansWifiPhy::TX:
      NS_LOG_DEBUG ("channel switching postponed until end of current transmission");
      Simulator::Schedule (GetDelayUntilIdle (), &YansWifiPhy::SetChannelNumber, this, nch);
      break;
    case YansWifiPhy::CCA_BUSY:
    case YansWifiPhy::IDLE:
      goto switchChannel;
      break;
    default:
      NS_ASSERT (false);
      break;
    }

  return;

switchChannel:

  NS_LOG_DEBUG ("switching channel " << m_channelNumber << " -> " << nch);
  m_state->SwitchToChannelSwitching (m_channelSwitchDelay);
  m_interference.EraseEvents ();
  /*
   * Needed here to be able to correctly sensed the medium for the first
   * time after the switching. The actual switching is not performed until
   * after m_channelSwitchDelay. Packets received during the switching
   * state are added to the event list and are employed later to figure
   * out the state of the medium after the switching.
   */
  m_channelNumber = nch;
}

uint16_t
YansWifiPhy::GetChannelNumber () const
{
  return m_channelNumber;
}

double
YansWifiPhy::GetChannelFrequencyMhz () const
{
  return m_channelStartingFrequency + 5 * GetChannelNumber ();
}

void
YansWifiPhy::SetReceiveOkCallback (RxOkCallback callback)
{
  m_state->SetReceiveOkCallback (callback);
}
void
YansWifiPhy::SetReceiveErrorCallback (RxErrorCallback callback)
{
  m_state->SetReceiveErrorCallback (callback);
}

////David/Ramón
void YansWifiPhy::SetPhyReceiveCallback(PhyRxCallback callback)
{
	m_phyRxCallback = callback;
}
////End David/Ramón

void
YansWifiPhy::StartReceivePacket (Ptr<Packet> packet,
                                 double rxPowerDbm,
                                 WifiMode txMode,
                                 enum WifiPreamble preamble)
{
  NS_LOG_FUNCTION (this << packet << rxPowerDbm << txMode << preamble);


  rxPowerDbm += m_rxGainDb;


//  printf ("rxPowerDbm = %f\n", rxPowerDbm );

  double rxPowerW = DbmToW (rxPowerDbm);
  Time rxDuration = CalculateTxDuration (packet->GetSize (), txMode, preamble);
  Time endRx = Simulator::Now () + rxDuration;

  Ptr<InterferenceHelper::Event> event;
  event = m_interference.Add (packet->GetSize (),
                              txMode,
                              preamble,
                              rxDuration,
                              rxPowerW);

  switch (m_state->GetState ())
    {
    case YansWifiPhy::SWITCHING:
      NS_LOG_DEBUG ("drop packet because of channel switching");
      NotifyRxDrop (packet);
      /*
       * Packets received on the upcoming channel are added to the event list
       * during the switching state. This way the medium can be correctly sensed
       * when the device listens to the channel for the first time after the
       * switching e.g. after channel switching, the channel may be sensed as
       * busy due to other devices' tramissions started before the end of
       * the switching.
       */
      if (endRx > Simulator::Now () + m_state->GetDelayUntilIdle ())
        {
          // that packet will be noise _after_ the completion of the
          // channel switching.
          goto maybeCcaBusy;
        }
      break;
    case YansWifiPhy::RX:
      NS_LOG_DEBUG ("drop packet because already in Rx (power=" <<
                    rxPowerW << "W)");
      NotifyRxDrop (packet);
      if (endRx > Simulator::Now () + m_state->GetDelayUntilIdle ())
        {
          // that packet will be noise _after_ the reception of the
          // currently-received packet.
          goto maybeCcaBusy;
        }
      break;
    case YansWifiPhy::TX:
      NS_LOG_DEBUG ("drop packet because already in Tx (power=" <<
                    rxPowerW << "W)");
      NotifyRxDrop (packet);
      if (endRx > Simulator::Now () + m_state->GetDelayUntilIdle ())
        {
          // that packet will be noise _after_ the transmission of the
          // currently-transmitted packet.
          goto maybeCcaBusy;
        }
      break;
    case YansWifiPhy::CCA_BUSY:
    case YansWifiPhy::IDLE:

      if (rxPowerW > m_edThresholdW)
        {
          // sync to signal
          m_state->SwitchToRx (rxDuration);
          NS_ASSERT (m_endRxEvent.IsExpired ());
          NotifyRxBegin (packet);
          m_interference.NotifyRxStart ();
          m_endRxEvent = Simulator::Schedule (rxDuration, &YansWifiPhy::EndReceive, this,
                                              packet,
                                              event);
        }
      else
        {
          NS_LOG_DEBUG ("drop packet because signal power too Small (" <<
                        rxPowerW << "<" << m_edThresholdW << ")");
          NotifyRxDrop (packet);
          goto maybeCcaBusy;
        }
      break;
    }

  return;

maybeCcaBusy:
  // We are here because we have received the first bit of a packet and we are
  // not going to be able to synchronize on it
  // In this model, CCA becomes busy when the aggregation of all signals as
  // tracked by the InterferenceHelper class is higher than the CcaBusyThreshold

  Time delayUntilCcaEnd = m_interference.GetEnergyDuration (m_ccaMode1ThresholdW);
  if (!delayUntilCcaEnd.IsZero ())
    {
      m_state->SwitchMaybeToCcaBusy (delayUntilCcaEnd);
    }
}

void
YansWifiPhy::SendPacket (Ptr<const Packet> packet, WifiMode txMode, WifiPreamble preamble, uint8_t txPower)
{
  NS_LOG_FUNCTION (this << packet << txMode << preamble << (uint32_t)txPower);
  /* Transmission can happen if:
   *  - we are syncing on a packet. It is the responsability of the
   *    MAC layer to avoid doing this but the PHY does nothing to
   *    prevent it.
   *  - we are idle
   */
  NS_ASSERT (!m_state->IsStateTx () && !m_state->IsStateSwitching ());

  Time txDuration = CalculateTxDuration (packet->GetSize (), txMode, preamble);
  if (m_state->IsStateRx ())
    {
      m_endRxEvent.Cancel ();
      m_interference.NotifyRxEnd ();
    }
  NotifyTxBegin (packet);
  uint32_t dataRate500KbpsUnits = txMode.GetDataRate () / 500000;
  bool isShortPreamble = (WIFI_PREAMBLE_SHORT == preamble);
  NotifyMonitorSniffTx (packet, (uint16_t)GetChannelFrequencyMhz (), GetChannelNumber (), dataRate500KbpsUnits, isShortPreamble);
  m_state->SwitchToTx (txDuration, packet, txMode, preamble, txPower);
  m_channel->Send (this, packet, GetPowerDbm (txPower) + m_txGainDb, txMode, preamble);

}

uint32_t
YansWifiPhy::GetNModes (void) const
{
  return m_deviceRateSet.size ();
}
WifiMode
YansWifiPhy::GetMode (uint32_t mode) const
{
  return m_deviceRateSet[mode];
}
uint32_t
YansWifiPhy::GetNTxPower (void) const
{
  return m_nTxPower;
}

void
YansWifiPhy::Configure80211a (void)
{
  NS_LOG_FUNCTION (this);
  m_channelStartingFrequency = 5e3; // 5.000 GHz

  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate6Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate9Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate12Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate18Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate24Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate36Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate48Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate54Mbps ());
}


void
YansWifiPhy::Configure80211b (void)
{
  NS_LOG_FUNCTION (this);
  m_channelStartingFrequency = 2407; // 2.407 GHz

  m_deviceRateSet.push_back (WifiPhy::GetDsssRate1Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetDsssRate2Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetDsssRate5_5Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetDsssRate11Mbps ());
}

void
YansWifiPhy::Configure80211g (void)
{
  NS_LOG_FUNCTION (this);
  m_channelStartingFrequency = 2407; // 2.407 GHz

  m_deviceRateSet.push_back (WifiPhy::GetDsssRate1Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetDsssRate2Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetDsssRate5_5Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetErpOfdmRate6Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetErpOfdmRate9Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetDsssRate11Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetErpOfdmRate12Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetErpOfdmRate18Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetErpOfdmRate24Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetErpOfdmRate36Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetErpOfdmRate48Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetErpOfdmRate54Mbps ());
}

void
YansWifiPhy::Configure80211_10Mhz (void)
{
  NS_LOG_FUNCTION (this);
  m_channelStartingFrequency = 5e3; // 5.000 GHz, suppose 802.11a

  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate3MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate4_5MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate6MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate9MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate12MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate18MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate24MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate27MbpsBW10MHz ());
}

void
YansWifiPhy::Configure80211_5Mhz (void)
{
  NS_LOG_FUNCTION (this);
  m_channelStartingFrequency = 5e3; // 5.000 GHz, suppose 802.11a

  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate1_5MbpsBW5MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate2_25MbpsBW5MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate3MbpsBW5MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate4_5MbpsBW5MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate6MbpsBW5MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate9MbpsBW5MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate12MbpsBW5MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate13_5MbpsBW5MHz ());
}

void
YansWifiPhy::ConfigureHolland (void)
{
  NS_LOG_FUNCTION (this);
  m_channelStartingFrequency = 5e3; // 5.000 GHz
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate6Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate12Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate18Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate36Mbps ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate54Mbps ());
}

void
YansWifiPhy::Configure80211p_CCH (void)
{
  NS_LOG_FUNCTION (this);
  m_channelStartingFrequency = 5e3; // 802.11p works over the 5Ghz freq range

  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate3MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate4_5MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate6MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate9MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate12MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate18MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate24MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate27MbpsBW10MHz ());
}

void
YansWifiPhy::Configure80211p_SCH (void)
{
  NS_LOG_FUNCTION (this);
  m_channelStartingFrequency = 5e3; // 802.11p works over the 5Ghz freq range

  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate3MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate4_5MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate6MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate9MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate12MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate18MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate24MbpsBW10MHz ());
  m_deviceRateSet.push_back (WifiPhy::GetOfdmRate27MbpsBW10MHz ());
}

void
YansWifiPhy::RegisterListener (WifiPhyListener *listener)
{
  m_state->RegisterListener (listener);
}

bool
YansWifiPhy::IsStateCcaBusy (void)
{
  return m_state->IsStateCcaBusy ();
}

bool
YansWifiPhy::IsStateIdle (void)
{
  return m_state->IsStateIdle ();
}
bool
YansWifiPhy::IsStateBusy (void)
{
  return m_state->IsStateBusy ();
}
bool
YansWifiPhy::IsStateRx (void)
{
  return m_state->IsStateRx ();
}
bool
YansWifiPhy::IsStateTx (void)
{
  return m_state->IsStateTx ();
}
bool
YansWifiPhy::IsStateSwitching (void)
{
  return m_state->IsStateSwitching ();
}

Time
YansWifiPhy::GetStateDuration (void)
{
  return m_state->GetStateDuration ();
}
Time
YansWifiPhy::GetDelayUntilIdle (void)
{
  return m_state->GetDelayUntilIdle ();
}

Time
YansWifiPhy::GetLastRxStartTime (void) const
{
  return m_state->GetLastRxStartTime ();
}

double
YansWifiPhy::DbToRatio (double dB) const
{
  double ratio = pow (10.0,dB / 10.0);
  return ratio;
}

double
YansWifiPhy::DbmToW (double dBm) const
{
  double mW = pow (10.0,dBm / 10.0);
  return mW / 1000.0;
}

double
YansWifiPhy::WToDbm (double w) const
{
  return 10.0 * log10 (w * 1000.0);
}

double
YansWifiPhy::RatioToDb (double ratio) const
{
  return 10.0 * log10 (ratio);
}

double
YansWifiPhy::GetEdThresholdW (void) const
{
  return m_edThresholdW;
}

double
YansWifiPhy::GetPowerDbm (uint8_t power) const
{
  NS_ASSERT (m_txPowerBaseDbm <= m_txPowerEndDbm);
  NS_ASSERT (m_nTxPower > 0);
  double dbm;
  if (m_nTxPower > 1)
    {
      dbm = m_txPowerBaseDbm + power * (m_txPowerEndDbm - m_txPowerBaseDbm) / (m_nTxPower - 1);
    }
  else
    {
      NS_ASSERT_MSG (m_txPowerBaseDbm == m_txPowerEndDbm, "cannot have TxPowerEnd != TxPowerStart with TxPowerLevels == 1");
      dbm = m_txPowerBaseDbm;
    }
  return dbm;
}


void
YansWifiPhy::EndReceive (Ptr<Packet> packet, Ptr<InterferenceHelper::Event> event)
{
	NS_LOG_FUNCTION (this << packet << event);
	NS_ASSERT (IsStateRx ());
	NS_ASSERT (event->GetEndTime () == Simulator::Now ());

	////David/Ramón
	//Packet receiver identification
	int i;
	u_int16_t txNodeId = 0;
	u_int16_t rxNodeId = 0;
	Ptr<YansWifiChannel> channel;
	//Headers parsing
	WifiMacHeader hdr;
	LlcSnapHeader llcHdr;
	Ipv4Header ipv4Hdr;
	TcpHeader tcpHdr;
	Ptr<Packet> pktCopy = packet->Copy();
	////End David/Ramón

	struct InterferenceHelper::SnrPer snrPer;
	snrPer = m_interference.CalculateSnrPer (event);
	m_interference.NotifyRxEnd ();

	NS_LOG_DEBUG ("mode=" << (event->GetPayloadMode ().GetDataRate ()) <<
			", snr=" << snrPer.snr << ", per=" << snrPer.per << ", size=" << packet->GetSize ());

	////David/Ramón
	/** We have carried out several tweaks regarding the legacy flow chart of this function. There will be two rather different possibilities:
	 * 		- First, if we have enabled any ErrorModel, we will proceed to avoid the use of the SNR and PER calculations, but we will make use of the particular behavior of ours models
	 * 		  (i.e. BearModel, HiddenMarkovModel, MatrixErrorModel).
	 *		- Second, we will maintain the default operation if we have no ErrorModel defined onto the scenario.
	 */

	if (m_errorModel)
	{
			//By the moment, we are going to make distinctions for the following three different ErrorModels: BearModel, HiddenMarkovModel and MatrixErrorModel
			Ptr<BearErrorModel> bearError = DynamicCast<BearErrorModel> (m_errorModel);
			Ptr<HiddenMarkovErrorModel> hmmError = DynamicCast<HiddenMarkovErrorModel> (m_errorModel);
			Ptr<MatrixErrorModel> matrixError = DynamicCast<MatrixErrorModel> (m_errorModel);

			//Common task --> Get the transmitter and receiver nodes
			//Identify the ID of the node that catches the frame in order to later trace it (As a wireless link will be characterized by the
			//broadcast nature of the medium, every node is prone to overhear a particular frame; hence, we will search which YansWifiPhy
			//instance is currently running to obtain the receiver entity
			for (i = 0; i < (int) NodeList::GetNNodes(); i ++)
			{
				for (u_int16_t j = 0; j < NodeList::GetNode(i)->GetNDevices(); j++)
				{
					Ptr<WifiNetDevice> wifi = DynamicCast <WifiNetDevice> (NodeList::GetNode(i)->GetDevice(j));
					if (wifi && (wifi->GetPhy() == this))
					{
						rxNodeId = i;
						goto endRx; 	//Nested loop exit (once located the receiver node)

					}
				}
			}

			endRx:
			//Locate the transmitter: to do so, we have to look a node with the particular MAC address of the transmitter
			WifiMacHeader header;
			packet->PeekHeader (header);

			if (header.GetAddr2 () != Mac48Address ("00:00:00:00:00:00"))
			{
				for (u_int16_t j = 0; j < NodeList::GetNNodes(); j++)
				{
					for (u_int16_t k = 0; k < NodeList::GetNode(j)->GetNDevices(); k++)
					{
						Mac48Address tx = tx.ConvertFrom(NodeList::GetNode(j)->GetDevice(k)->GetAddress());

						if (tx == header.GetAddr2 ())		//If found the source node, no need to continue looping
						{
							txNodeId = j;
							//DEBUG MESSAGE
							NS_LOG_DEBUG (Simulator::Now().GetSeconds() << " :TX " << (int) txNodeId << " (" << header.GetAddr2 () << ") "
									" -> RX " << (int) rxNodeId << " (" << header.GetAddr1 () << ") " << this );
							goto endTx;
						}
					}
				}
			}

			endTx:
			//Bear error model operation
			if (bearError)
			{
				bearError->SetTxIndex (txNodeId);
				bearError->SetRxIndex (rxNodeId);
			}
			else if (hmmError)
			{
				hmmError->SetTxIndex (txNodeId);
				hmmError->SetRxIndex (rxNodeId);
			}
			//Special case --> MatrixErrorModel: The error model has a special need, it must know which node is the receiver of the frame in order to decide
			//whether is correct or not
			else if (matrixError)
			{
				WifiMacHeader header;
				packet->PeekHeader (header);
				matrixError->SetReceiver ((u_int16_t) rxNodeId);

				if (header.GetAddr2 () == Mac48Address ("00:00:00:00:00:00"))		//Don't parse the IEEE 802.11 retransmissions
				{
					matrixError->SetCorrect (true);
				}
				else
				{
					matrixError->SetReceiver (rxNodeId);
					matrixError->SetTransmitter (txNodeId);
					matrixError->SetCorrect (false);
				}

				//Parse the packet and decide whether it should be defined as correct
				//Force the IEEE 802.11 ACK frames and all broadcast/control/management messages to be correct
				//We need a new packet copy
				Ptr<Packet> pktCopy2 = packet->Copy();
				pktCopy2->RemoveHeader(hdr);
				//Decide whether the frame is correct or not according to the frame type (data, TCP or broadcast/control)
				if (hdr.IsData() && !hdr.GetAddr1().IsBroadcast())
				{
					//We have split the packet decision into the following three conditions:
					// - ARP frames --> Always correct
					// - TCP ACK --> Always correct
					// - Data frames --> Legacy HMM decision process
					pktCopy2->RemoveHeader(llcHdr);

					switch (llcHdr.GetType())
					{
					case 0x0806:			//ARP
						matrixError->SetCorrect (true);
						break;
					case 0x0800:			//IP packet
						pktCopy2->RemoveHeader(ipv4Hdr);
						switch (ipv4Hdr.GetProtocol())
						{
						case 6:				//TCP
							pktCopy2->RemoveHeader(tcpHdr);
							//Data segments --> To be errored. We will consider data segments to those which has a payload length longer than 4 bytes
							if (pktCopy2->GetSize() > 300)
								matrixError->SetCorrect (false);
							else
								matrixError->SetCorrect (true);
							break;
						case 17:			//UDP
							matrixError->SetCorrect (false);
							break;
						default:
							NS_LOG_ERROR ("Protocol not implemented yet (IP) --> " << ipv4Hdr.GetProtocol());
							break;
						}
						break;
						default:
							NS_LOG_ERROR ("Protocol not implemented yet (LLC) --> " << llcHdr.GetType());
							break;
					}
				}
				else if (hdr.IsAck())
					matrixError->SetCorrect (true);
				else if (hdr.IsCtl() || hdr.IsMgt() || (hdr.GetAddr1()).IsBroadcast())
					matrixError->SetCorrect (true);
				else
					matrixError->SetCorrect (true);
			}


			//Decide whether a frame is correct or corrupted (the same operation for every ErrorModel)
			if (m_errorModel->IsCorrupt(packet)) 			//Error
			{
				NS_LOG_LOGIC("CORRUPT!!! Dropping pkt due to error model (" << this <<")");
				NotifyRxDrop (packet);
				m_state->SwitchFromRxEndError (packet, snrPer.snr);

				if (!m_phyRxCallback.IsNull())
				{
					////Special treatment for the AR and HiddenMarkovErrorModel
					if (DynamicCast<BearErrorModel> (m_errorModel) != 0)
					{
						Ptr <BearErrorModel> bear = m_errorModel->GetObject<BearErrorModel>();
						m_phyRxCallback (pktCopy, false, bearError->GetSnr(), rxNodeId);
					}
					else if (hmmError)
					{
						m_phyRxCallback (pktCopy, false, hmmError->GetCurrentState(), rxNodeId);
					}
					else
					{
						m_phyRxCallback (pktCopy, false, WToDbm(event->GetRxPowerW()), rxNodeId);
					}
				}
				return;
			}
			else      	//Correct reception
			{
				NS_LOG_LOGIC("CORRECT!!! (" << this <<")");
				NotifyRxEnd (packet);
				uint32_t dataRate500KbpsUnits = event->GetPayloadMode ().GetDataRate () / 500000;
				bool isShortPreamble = (WIFI_PREAMBLE_SHORT == event->GetPreambleType ());
				double signalDbm = RatioToDb (event->GetRxPowerW ()) + 30;
				double noiseDbm = RatioToDb (event->GetRxPowerW () / snrPer.snr) - GetRxNoiseFigure () + 30;
				NotifyMonitorSniffRx (packet, (uint16_t)GetChannelFrequencyMhz (), GetChannelNumber (), dataRate500KbpsUnits, isShortPreamble, signalDbm, noiseDbm);
				m_state->SwitchFromRxEndOk (packet, snrPer.snr, event->GetPayloadMode (), event->GetPreambleType ());

				if (!m_phyRxCallback.IsNull())
				{
					////Special treatment for the AR model
					if (DynamicCast<BearErrorModel> (m_errorModel) != 0)
					{
						Ptr <BearErrorModel> bear = m_errorModel->GetObject<BearErrorModel>();
						m_phyRxCallback (pktCopy, true, bearError->GetSnr(), rxNodeId);
					}
					else if (DynamicCast<HiddenMarkovErrorModel> (m_errorModel) != 0)
						m_phyRxCallback (pktCopy, true, DynamicCast<HiddenMarkovErrorModel> (m_errorModel)->GetCurrentState(), rxNodeId);
					else
						m_phyRxCallback (pktCopy, true, WToDbm(event->GetRxPowerW()), rxNodeId);
				}
				return;
			}
	}


	else     //For NS-3 default error rate model (NIST/YANS) --> Force management/ARP frames to be correct
	{
		//Force the IEEE 802.11 ACK frames and all broadcast/control/management messages to be correct
		pktCopy->RemoveHeader(hdr);
		//Decide whether the frame is correct or not according to the frame type (data, TCP or broadcast/control)
		if (hdr.IsData() && !hdr.GetAddr1().IsBroadcast())
		{
			//We have split the packet decision into the following three conditions:
			// - ARP frames --> Always correct
			// - TCP ACK --> Always correct
			// - Data frames --> Legacy HMM decision process
			pktCopy->RemoveHeader(llcHdr);

			switch (llcHdr.GetType())
			{
			case 0x0806:				//ARP
				snrPer.per = snrPer.per;
				break;
			case 0x0800:				//IP packet
				pktCopy->RemoveHeader(ipv4Hdr);
				switch (ipv4Hdr.GetProtocol())
				{
				case 6:				//TCP
					pktCopy->RemoveHeader(tcpHdr);
					//Data segments --> To be errored
					if (pktCopy->GetSize() > 4)
						snrPer.per = snrPer.per;
					else
						snrPer.per = 0;
					break;
				case 17:			//UDP
					snrPer.per = snrPer.per;
					break;
				default:
					NS_LOG_ERROR ("Protocol not implemented yet (IP) --> " << ipv4Hdr.GetProtocol());
					break;
				}
				break;
				default:
					NS_LOG_ERROR ("Protocol not implemented yet (LLC) --> " << llcHdr.GetType());
					break;
			}
		}
		else if (hdr.IsAck())
			snrPer.per = 0;
		else if (hdr.IsCtl() || hdr.IsMgt() || (hdr.GetAddr1()).IsBroadcast())
			snrPer.per = 0;
		else
			snrPer.per = 0;

		NS_LOG_DEBUG("SNR = " << 10*log10 (snrPer.snr) << " dB | PER = " << snrPer.per << " | Packet length =" << packet->GetSize());

		////End Ramón/David

		////////////////////LEGACY NS-3 Code//////////////

		if (m_ranvar.GetValue () > snrPer.per)
		{
			////David/Ramón
			if (!m_phyRxCallback.IsNull())
			{
				m_phyRxCallback (packet, true, 10 * log10 (snrPer.snr), rxNodeId);
			}
			////End David/Ramón
			NotifyRxEnd (packet);
			uint32_t dataRate500KbpsUnits = event->GetPayloadMode ().GetDataRate () / 500000;
			bool isShortPreamble = (WIFI_PREAMBLE_SHORT == event->GetPreambleType ());
			double signalDbm = RatioToDb (event->GetRxPowerW ()) + 30;
			double noiseDbm = RatioToDb (event->GetRxPowerW () / snrPer.snr) - GetRxNoiseFigure () + 30;
			NotifyMonitorSniffRx (packet, (uint16_t)GetChannelFrequencyMhz (), GetChannelNumber (), dataRate500KbpsUnits, isShortPreamble, signalDbm, noiseDbm);
			m_state->SwitchFromRxEndOk (packet, snrPer.snr, event->GetPayloadMode (), event->GetPreambleType ());
		}
		else
		{
			////David/Ramón
			if (!m_phyRxCallback.IsNull())
			{
				m_phyRxCallback (packet, false, 10 * log10 (snrPer.snr), rxNodeId);
			}
			////End David/Ramón
			/* failure. */
			NotifyRxDrop (packet);
			m_state->SwitchFromRxEndError (packet, snrPer.snr);
		}
		////////////////////LEGACY NS-3 Code//////////////
	}

}

} // namespace ns3
