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

#include <math.h>
#include <fstream>

#include "ns3/simulator.h"
#include "ns3/packet.h"
#include "ns3/assert.h"
#include "ns3/log.h"
#include "ns3/boolean.h"
#include "ns3/enum.h"
#include "ns3/double.h"
#include "ns3/integer.h"
#include "ns3/string.h"
#include "ns3/object-base.h"
#include "ns3/node-list.h"

#include "hidden-markov-propagation-loss-model.h"
#include "hidden-markov-error-model.h"


using namespace std;
using namespace ns3;

NS_LOG_COMPONENT_DEFINE("HiddenMarkovErrorModel");
NS_OBJECT_ENSURE_REGISTERED (HiddenMarkovErrorModel);

const bool g_debug = false;  //Temporal solution (only for debugging)

TypeId
HiddenMarkovErrorModel::GetTypeId(void) {
	static TypeId tid = TypeId ("ns3::HiddenMarkovErrorModel")
	.SetParent <ErrorModel> ()
	.AddConstructor<HiddenMarkovErrorModel> ()
	       ;
  return tid;
}

HiddenMarkovErrorModel::HiddenMarkovErrorModel()
{
	NS_LOG_FUNCTION (this);
}

HiddenMarkovErrorModel::~HiddenMarkovErrorModel()
{
	NS_LOG_FUNCTION (this);
}

bool HiddenMarkovErrorModel::DoCorrupt(Ptr<Packet> packet)
{
	NS_LOG_FUNCTION(this);
	bool corruptedPacket = false;
	WifiMacHeader hdr;
	LlcSnapHeader llcHdr;
	Ipv4Header ipv4Hdr;
	UdpHeader udpHdr;
	TcpHeader tcpHdr;

	Ptr<Packet> pktCopy = packet->Copy();
	pktCopy->RemoveHeader(hdr);

	//Locate the SNR within the map
	channelSetIter_t iter = m_hmmNetworkMap->find (ChannelMeshPropagationKey (NodeList::GetNode (m_txIndex)->GetObject<MobilityModel> (),
			NodeList::GetNode (m_rxIndex)->GetObject<MobilityModel> ()));

	if (iter != m_hmmNetworkMap->end())
	{
		m_currentState = iter->second->GetCurrentState();							//Variable needed to access from YansWifiPhy::EndReceive
		m_decisionValue = iter->second->GetDecisionValue (m_currentState);
	}

	//Decide whether the frame is correct or not according to the frame type (data, TCP or broadcast/control)
	//Force packet with length < 128 to be always correct
	if (hdr.IsData() && !hdr.GetAddr1().IsBroadcast())
	{
		//We have split the packet decision into the following three conditions:
		// - ARP frames --> Always correct
		// - TCP ACK --> Always correct
		// - Data frames --> Legacy HMM decision process
		pktCopy->RemoveHeader(llcHdr);

		switch (llcHdr.GetType())
		{
		case 0x0806:			//ARP
			corruptedPacket = false;
			break;
		case 0x0800:			//IP packet
			pktCopy->RemoveHeader(ipv4Hdr);
			switch (ipv4Hdr.GetProtocol())
			{
			case 6:				//TCP
				pktCopy->RemoveHeader(tcpHdr);

				//Data segments --> To be corrupted
				if (pktCopy->GetSize() > 4)
					corruptedPacket = Decide ();
				else
					corruptedPacket = false;
				break;
			case 17:			//UDP
				corruptedPacket =  Decide();
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

	//Force 802.11 ACKs, broadcast and control/management frames to be correct
	else if (hdr.IsAck())
	{
		corruptedPacket = false;

	}
	else if (hdr.IsCtl() || hdr.IsMgt() || (hdr.GetAddr1()).IsBroadcast())
	{
		corruptedPacket = false;
	}
	else
	{
		corruptedPacket = false;
	}

	return corruptedPacket;
}

bool HiddenMarkovErrorModel::Decide ()
{
	NS_LOG_FUNCTION_NOARGS ();
	bool corruptedPacket;
	UniformVariable ranvar (0.0, 1.0);

	//Two posibilities:
	//Time --> Check into the emission matrix (current state)
	//Frames --> The same criteria as the time-based one and a possible state change

	if (ranvar.GetValue() < m_decisionValue) //First column in emission matrix --> Error probability (state i)
	{
		NS_LOG_LOGIC("CORRUPT! (" << this << ") (" << Simulator::Now().GetSeconds() << ") State: " << (int) m_currentState);
		corruptedPacket = true; 			//Frame received with errors
	}
	else
	{
		NS_LOG_LOGIC("CORRECT! (" << this << ") (" << Simulator::Now().GetSeconds() << ") State: " << (int) m_currentState);
		corruptedPacket = false;			//Frame received successfully
	}

	return corruptedPacket;
}

void HiddenMarkovErrorModel::DoReset (void)
{
	NS_LOG_FUNCTION_NOARGS();
	m_currentState = 0;
}


void HiddenMarkovErrorModel::SetDecisionValue (double value)
{
	NS_LOG_FUNCTION_NOARGS();
	m_decisionValue = value;
}

u_int8_t HiddenMarkovErrorModel::GetCurrentState() const
{
    return m_currentState;
}

void HiddenMarkovErrorModel::SetCurrentState(u_int8_t state)
{
    this->m_currentState = state;
}

void HiddenMarkovErrorModel::SetTxIndex (u_int16_t tx)
{
	NS_LOG_FUNCTION_NOARGS ();
	m_txIndex = tx;
}

void HiddenMarkovErrorModel::SetRxIndex (u_int16_t rx)
{
	NS_LOG_FUNCTION_NOARGS ();
	m_rxIndex = rx;
}

