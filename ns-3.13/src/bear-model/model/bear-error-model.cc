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
 */


#include "bear-error-model.h"
#include "ns3/node-list.h"
#include "ns3/mobility-model.h"

#include "bear-propagation-loss-model.h"

using namespace std;
using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("BearErrorModel");
NS_OBJECT_ENSURE_REGISTERED (BearErrorModel);

BearLogisticFunction::BearLogisticFunction ()
{
}

BearLogisticFunction::BearLogisticFunction (const double a, const double b,
		const double c, const int lowThreshold, const int highThreshold) :
				a (a),
				b (b),
				c (c),
				lowThreshold (lowThreshold),
				highThreshold (highThreshold)
{
}

TypeId
BearErrorModel::GetTypeId(void)
{
	static TypeId tid = TypeId ("ns3::BearErrorModel")
	.SetParent<ErrorModel> ()
	.AddConstructor<BearErrorModel> ()
	.AddAttribute("BearModel",
			"Flag to decide the error model decider to use",
			EnumValue(BEAR_MODEL),
			MakeEnumAccessor(&BearErrorModel::m_errorModelType),
			MakeEnumChecker(NO_ERROR_MODEL, "NO_ERROR_MODEL",
					BEAR_MODEL, "BEAR_MODEL",
					SHADOWING_MODEL, "SHADOWING_MODEL"))
	.AddAttribute ("RanVar",
			"Random variable which determine a packet to be successfully received or not",
			RandomVariableValue (UniformVariable (0.0, 1.0)),
			MakeRandomVariableAccessor (&BearErrorModel::m_ranvar),
			MakeRandomVariableChecker ())
	.AddTraceSource ("BearRxTrace",
			"Packet tracing",
	        MakeTraceSourceAccessor (&BearErrorModel::m_rxTrace))
		       ;
  return tid;
}

BearErrorModel::BearErrorModel()
{
	NS_LOG_FUNCTION_NOARGS();

	m_errorModelType = BEAR_MODEL;

	//Static configuration for the IEEE 802.11b parameters
	m_dataLogParams = BearLogisticFunction::BearLogisticFunction (1.24, 0.366, 6.88, 3, 16);
	m_ackLogParams = BearLogisticFunction::BearLogisticFunction (1.00, 0.886, 6.88, 0, 13);
	m_bcastCtrlLogParams = BearLogisticFunction::BearLogisticFunction (1.9, 0.6, 0.0, 0, 10);
}

BearErrorModel::~BearErrorModel()
{
	NS_LOG_FUNCTION_NOARGS();
}

void BearErrorModel::SetRxCallback(BearRxCallback_t callback)
{
	NS_LOG_FUNCTION_NOARGS();
	m_rxCallback = callback;
}

bool BearErrorModel::DoCorrupt(Ptr<Packet> packet)
{
	NS_LOG_FUNCTION_NOARGS ();

	bool rxError;
	packetInfo_t packetInfo;

	//Locate the SNR within the map
	channelSetIter_t iter = m_channelSetMap->find (ChannelMeshPropagationKey (NodeList::GetNode (m_txIndex)->GetObject<MobilityModel> (),
			NodeList::GetNode (m_rxIndex)->GetObject<MobilityModel> ()));

	if (iter != m_channelSetMap->end())
	{
		m_snr = iter->second->GetCurrentSnr();
	}

	packetInfo = ParsePacket(packet);

	//Decide whether the frame is correct or not according to the frame type (data, TCP or broadcast/control)
	if ((packetInfo.type == UDP_DATA || packetInfo.type == TCP_DATA || packetInfo.type == NETWORK_CODING_DATA) && (packetInfo.payloadLength > 4))		//Discard ACKs TCP
	{
		rxError = CorruptDataFrame(packet);
	}
	else if (packetInfo.type == TCP_DATA && packetInfo.payloadLength < 4 \
			&& (!(packetInfo.tcpHdr.GetFlags() & 0x02)	&& !(packetInfo.tcpHdr.GetFlags() & 0x01)))  			//TCP ACK particular logistic function
	{
		rxError = CorruptAckFrame(packet);

	}
	else if (packetInfo.wifiHdr.IsCtl() || packetInfo.wifiHdr.IsMgt() ||  \
			(packetInfo.wifiHdr.GetAddr1()).IsBroadcast() || \
			packetInfo.ipv4Hdr.GetDestination().IsBroadcast())
	{
		rxError = CorruptBcastCtrlFrame(packet);
	}
	else
	{
		rxError = false;
	}

	//Tracing and callbacks
	m_rxTrace (packet, 0, rxError, iter->second->GetCurrentRxPower(), iter->second->GetCurrentSlowFading(), iter->second->GetCurrentFastFading());

	if (!m_rxCallback.IsNull ())
	{
		m_rxCallback (packet, 0, rxError, iter->second->GetCurrentRxPower(), iter->second->GetCurrentSlowFading(), iter->second->GetCurrentFastFading());
	}

	return rxError;
}

bool BearErrorModel::CorruptDataFrame(Ptr<Packet>)
{
	NS_LOG_FUNCTION_NOARGS();
	double fer;
	double value;
	bool error;

	//Reception decision
		switch (m_errorModelType)	{

		case NO_ERROR_MODEL:
			fer = 0.0;
			break;
		case BEAR_MODEL:
			fer = GetBearFer(&m_dataLogParams);
			break;
		case SHADOWING_MODEL:
			if (m_snr < 9)
				fer = 1.0;
			else
				fer = 0.0;
			break;

		default:
			NS_LOG_ERROR("Error model not found... Please fix");
			fer = 0.0;
			break;
		}
		//Use a random value to decide if the frame is received correctly
		value = m_ranvar.GetValue();
		NS_LOG_DEBUG ("Random value (" << value << ") < FER (" << fer << ")");
		if (value  < fer)
		{
			NS_LOG_LOGIC("CORRUPT!!");
			error = true;
		}
		else
		{
			NS_LOG_LOGIC("CORRECT!!");
			error = false;
		}
		return error;
}

bool BearErrorModel::CorruptAckFrame(Ptr<Packet>)
{
	NS_LOG_FUNCTION_NOARGS();
	double fer;
	bool error;

	//Reception decision
	switch (m_errorModelType)	{

	case NO_ERROR_MODEL:
		fer = 0.0;
		break;
	case BEAR_MODEL:
//		fer = GetBearFer(&m_ackLogParams);
		fer = 0.0;			//Test version --> All ACK (TCP) are received correctly

		break;
	case SHADOWING_MODEL:
		if (m_snr < 8)
			fer = 1.0;
		else
			fer = 0.0;
		break;

	default:
		NS_LOG_ERROR("Error model not found... Please fix");
		fer = 0.0;
				break;
	}

	//Force ACK to be correct
//	return false;

	if (m_ranvar.GetValue() < fer)
	{
		error = true;
	}
	else
	{
		error = false;
	}

	return error;
}

bool BearErrorModel::CorruptBcastCtrlFrame(Ptr<Packet>)
{
	NS_LOG_FUNCTION_NOARGS();
	double fer;

	bool error;
	//Reception decision
	switch (m_errorModelType)	{

	case NO_ERROR_MODEL:
		fer = 0.0;
		break;
	case BEAR_MODEL:
		fer = GetBearFer(&m_bcastCtrlLogParams);
		break;
	case SHADOWING_MODEL:
		if (m_snr < 1.7)
			fer = 1.0;
		else
			fer = 0.0;
		break;

	default:
		NS_LOG_ERROR("Error model not found... Please fix");
		fer = 0.0;
		break;
	}


	//// In order not to get an ARP message lost which cut the measurement out, force the broadcast frames to be correct
	return false;

	if (m_ranvar.GetValue() < fer)
	{
		error = true;
	}
	else
	{
		error = false;
	}

	return error;
}

double BearErrorModel::GetBearFer(BearLogisticFunction::BearLogisticFunction *params)
{
	NS_LOG_FUNCTION_NOARGS();
	double fer;

	if (m_snr < params->lowThreshold)
		fer = 1;
	else if (m_snr < params->highThreshold)
	{
		fer = params->a / (1 + exp(params->b * (m_snr - params->c)));
		NS_LOG_DEBUG ("FER = " << params->a << " / (1 + e^(" << params->b << "* (" << m_snr << 				\
				" - " << params->c << "))) = " << fer);
	}
	else
	{
		fer = 0;
	}
	return fer;
}

void BearErrorModel::DoReset()
{
	NS_LOG_FUNCTION_NOARGS ();
}

void BearErrorModel::SetTxIndex (u_int16_t tx)
{
	NS_LOG_FUNCTION_NOARGS ();
	m_txIndex = tx;
}

void BearErrorModel::SetRxIndex (u_int16_t rx)
{
	NS_LOG_FUNCTION_NOARGS ();
	m_rxIndex = rx;
}

double BearErrorModel::GetSnr () const
{
	NS_LOG_FUNCTION_NOARGS ();
	return m_snr;
}

packetInfo_t BearErrorModel::ParsePacket (Ptr<Packet> packet)
{
	NS_LOG_FUNCTION(packet);

	packetInfo_t packetInfo;
	Ptr<Packet> pktCopy = packet->Copy();

	pktCopy->RemoveHeader(packetInfo.wifiHdr);

	if (packetInfo.wifiHdr.IsData())
	{
		pktCopy->RemoveHeader(packetInfo.llcHdr);
		switch (packetInfo.llcHdr.GetType())
		{
		case 0x0806:			//ARP
			packetInfo.type = ARP_PACKET;
			break;
		case 0x0800:			//IP packet
			pktCopy->RemoveHeader(packetInfo.ipv4Hdr);
			switch (packetInfo.ipv4Hdr.GetProtocol())
			{
			case 6:				//TCP
				pktCopy->RemoveHeader(packetInfo.tcpHdr);
				packetInfo.type = TCP_DATA;
				break;
			case 17:			//UDP
				pktCopy->RemoveHeader(packetInfo.udpHdr);
				packetInfo.type = UDP_DATA;
				break;
			case 99:			//Network Coding
				pktCopy->RemoveHeader(packetInfo.ncHeader);
				packetInfo.type = NETWORK_CODING_DATA;
				break;
			default:
				NS_LOG_ERROR ("Protocol not implemented yet (IP header) --> " << packetInfo.ipv4Hdr.GetProtocol());
				break;
			}
			break;
		default:
			NS_LOG_ERROR ("Protocol not implemented yet (LLC header) --> " << packetInfo.llcHdr.GetType());
			break;
		}
	}
	else if (packetInfo.wifiHdr.IsAck())
	{
		packetInfo.type = IEEE_80211_ACK;
	}
	else	// 802.11 Control/Management frame
	{
		packetInfo.type = IEEE_80211_NODATA;
	}

	packetInfo.payloadLength = pktCopy->GetSize() - 4;								//Last four bytes are used for tagging

	return packetInfo;
}
