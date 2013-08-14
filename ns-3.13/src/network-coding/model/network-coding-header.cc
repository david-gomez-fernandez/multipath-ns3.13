/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2012 Universidad de Cantabria
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
 *  	   Mario Puente <mario.puente@alumnos.unican.es>
 *		   Ramón Agüero Calvo <ramon@tlmat.unican.es>
 */

#include <ns3/node.h>
#include <ns3/node-list.h>
#include "ns3/simulator.h"
#include "ns3/packet.h"
#include "ns3/assert.h"
#include "ns3/log.h"
#include "ns3/boolean.h"
#include "ns3/enum.h"
#include "ns3/double.h"
#include "ns3/integer.h"
#include "ns3/string.h"

#include "network-coding-header.h"

#include <stdio.h>

using namespace ns3;
using namespace std;

NS_LOG_COMPONENT_DEFINE ("NetworkCodingHeader");

NS_OBJECT_ENSURE_REGISTERED (NetworkCodingHeader);

NetworkCodingHeader::Item::Item (const Ipv4Address destination,
		const SequenceNumber32 seqNum,
		const u_int16_t hash,
		const u_int16_t payloadLength)
  : destination (destination),
    seqNum (seqNum),
    hash (hash),
    payloadLength (payloadLength)
{
}

NetworkCodingHeader::AckInfo::AckInfo (const Ipv4Address destination,
		const TcpHeader tcpHeader):
	destination(destination),
	tcpHeader (tcpHeader)
	{
	}

NetworkCodingHeader::NetworkCodingHeader()
{
	NS_LOG_FUNCTION(this);
	m_protocol = 0;
	m_type = 0;
	m_codedPackets = 0;
	m_embeddedAcks = 0;
}

NetworkCodingHeader::~NetworkCodingHeader()
{
	NS_LOG_FUNCTION(this);
}

TypeId
NetworkCodingHeader::GetTypeId (void)
{
  static TypeId tid = TypeId ("ns3::NetworkCodingHeader")
    .SetParent<Header> ()
    .AddConstructor<NetworkCodingHeader> ()
  ;
  return tid;
}
TypeId
NetworkCodingHeader::GetInstanceTypeId (void) const
{
  return GetTypeId ();
}

//Getters/setters
void NetworkCodingHeader::SetProtocolNumber (u_int8_t protocol)
{
	m_protocol = protocol;
}

u_int32_t NetworkCodingHeader::GetProtocolNumber () const
{
	return m_protocol;
}

void NetworkCodingHeader::SetCodedPackets (u_int8_t codedPackets)
{
	m_codedPackets = codedPackets;
}

u_int8_t NetworkCodingHeader::GetCodedPackets () const
{
	return m_codedPackets;
}

void NetworkCodingHeader::SetEmbeddedAcks (u_int8_t embeddedAcks)
{
	m_embeddedAcks = embeddedAcks;
}

u_int8_t NetworkCodingHeader::GetEmbeddedAcks () const
{
	return m_embeddedAcks;
}

void NetworkCodingHeader::SetPacketType (u_int8_t type)
{
	m_type = type;
}

u_int8_t NetworkCodingHeader::GetPacketType() const
{
	return m_type;
}

//Inherited methods from base class "Header" (pure virtual)

uint32_t NetworkCodingHeader::GetSerializedSize (void) const
{
	NS_LOG_FUNCTION (this);
	if (m_packetVector.size() == 1)
		return 4 + 24 * m_tcpAckVector.size();
	else
		return 4 + 12 * m_packetVector.size() + 24 * m_tcpAckVector.size();

}
void NetworkCodingHeader::Serialize (Buffer::Iterator start) const
{
	NS_LOG_FUNCTION (this);

	u_int8_t count;

	Buffer::Iterator i =start;

	//Fixed header
	i.WriteU8 (m_protocol);
	i.WriteU8 (m_type);
	i.WriteU8 (m_packetVector.size());
	i.WriteU8 (m_tcpAckVector.size());

	//Variable header (two main groups: the former one will be in charge of gathering the information of the coded data packets, if they are two or more;
	//on the other hand, in the second group we will encapsulate the ACK segments

	NS_ASSERT (m_codedPackets >= 0);

	//Serialize the native packet information
	if (m_packetVector.size() > 1)		//IMPORTANT: We will only add this field into the only if there are at least two packets coded together with
	{
		for (count=0; count < m_packetVector.size(); count++)
		{
			i.WriteHtonU32 (m_packetVector[count].destination.Get());
			i.WriteHtonU32 (m_packetVector[count].seqNum.GetValue());
			i.WriteHtonU16 (m_packetVector[count].hash);
			i.WriteHtonU16 (m_packetVector[count].payloadLength);
		}
	}

	if (m_embeddedAcks)
	{
		for (count=0; count < m_tcpAckVector.size(); count ++)
		{
			i.WriteHtonU32 (m_tcpAckVector[count].destination.Get());
			i.Write ((unsigned char *) & m_tcpAckVector[count].tcpHeader, 20);
		}
	}

}


uint32_t NetworkCodingHeader::Deserialize (Buffer::Iterator start)
{
	NS_LOG_FUNCTION (this);
	Buffer::Iterator i = start;
	u_int8_t count;

	m_protocol = i.ReadU8 ();
	m_type = i.ReadU8 ();
	m_codedPackets = i.ReadU8 ();
	m_embeddedAcks = i.ReadU8 ();

	//Deserialize the native packet information
	if (m_codedPackets > 1)
	{
		for (count=0; count < m_codedPackets; count++)
		{
			Ipv4Address destination;
			SequenceNumber32 seqNum;
			destination.Set (i.ReadNtohU32());
			seqNum = i.ReadNtohU32 ();
			u_int16_t hash = i.ReadNtohU16();
			u_int16_t payloadLength = i.ReadNtohU16();

			m_packetVector.push_back (Item (destination, seqNum, hash, payloadLength));
		}
	}

	//Deserialize the embedded-ACK TCP header
	if (m_embeddedAcks)
	{
		for (count=0; count < m_embeddedAcks; count++)
		{
			Ipv4Address destination;
			TcpHeader tcpHeader;
			unsigned char *temp = (unsigned char *) malloc (20);
			destination.Set (i.ReadNtohU32());
			i.Read (temp, 20);
			memcpy ((unsigned char *) &tcpHeader, temp, 20);

			m_tcpAckVector.push_back (AckInfo (destination, tcpHeader));
			free (temp);
		}
	}

	return GetSerializedSize ();
}

void NetworkCodingHeader::Print (std::ostream &os) const
{
	u_int8_t i;
	os << "Network Coding Header: Protocol " << (int) m_protocol << " Type " << (int) m_type << " Coded packets " << (int) m_codedPackets << " Embedded ACKs " << (int) m_embeddedAcks;

	if (m_packetVector.size() > 1)
	{
		for (i = 0; i < m_packetVector.size(); i ++)
		{
			os << endl <<" Packet " << (int) i << ": " << "Destination IP address: " << m_packetVector[i].destination
					<< " Sequence Number: " << m_packetVector[i].seqNum << " Hash: 0x" << std::hex << m_packetVector[i].hash << std::dec
					<< " Payload length " << (int) m_packetVector[i].payloadLength;
		}
	}
	if (m_tcpAckVector.size())
	{
		for (i=0; i < m_tcpAckVector.size(); i++)
		{
			os << endl << " ACK Segment - " << (int) i << " Destination IP address " << m_tcpAckVector[i].destination << " TCP Header " << m_tcpAckVector[i].tcpHeader;
		}
	}


}

