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
 * Author: Ramón Saiz Santos <keko89_@hotmail.com>
 * 		   David Gómez Fernández <dgomez@tlmat.unican.es>
 *		   Ramón Agüero Calvo <ramon@tlmat.unican.es>
 */


#include "more-network-coding-protocol.h"

using namespace ns3;
using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("MoreNetworkCodingProtocol");
NS_OBJECT_ENSURE_REGISTERED (MoreNetworkCodingProtocol);

/* see http://www.iana.org/assignments/protocol-numbers */
const uint8_t MoreNetworkCodingProtocol::PROT_NUMBER = 100;

TypeId MoreNetworkCodingProtocol::GetTypeId (void)
{
	static TypeId tid = TypeId ("ns3::MoreNetworkCodingProtocol")
		.SetParent<NetworkCodingL4Protocol> ()
		.AddConstructor<MoreNetworkCodingProtocol> ()
		;
	return tid;
}

MoreNetworkCodingProtocol::MoreNetworkCodingProtocol()
{
	NS_LOG_FUNCTION_NOARGS();
}

MoreNetworkCodingProtocol::~MoreNetworkCodingProtocol()
{
	NS_LOG_FUNCTION_NOARGS();
}

void MoreNetworkCodingProtocol::NotifyNewAggregate()
{
	NS_LOG_FUNCTION_NOARGS();
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
				this->SetDownTarget (MakeCallback (&Ipv4::Send, ipv4));
				m_ncBuffer.SetNode (node);									//Share the node address with the buffer (it will heavily ease the further handling of the packets)
			}

			//Check Ipv4L4Protocol objects instanced
			//Hook to upper layer--> Bidirectional
			//NOTE: We will catch the packets from the following Ipv4L4Protocol objects, hence we need three different callbacks
			if (Ptr<NscTcpL4Protocol> nsc = node->GetObject <NscTcpL4Protocol> ())
			{
				nsc->SetDownTarget (MakeCallback (&MoreNetworkCodingProtocol::ReceiveFromUpperLayer, this));
				this->SetUpNscTarget (MakeCallback (&NscTcpL4Protocol::Receive, nsc));
			}

			if (Ptr<TcpL4Protocol> tcp = node->GetObject <TcpL4Protocol> ())
			{
				tcp->SetDownTarget (MakeCallback (&MoreNetworkCodingProtocol::ReceiveFromUpperLayer, this));
				this->SetUpTcpTarget (MakeCallback (&TcpL4Protocol::Receive, tcp));
			}

//			Our first implementation does not support NC for UDP
//			if (Ptr<UdpL4Protocol> udp = node->GetObject <UdpL4Protocol> ())
//			{
//				udp->SetDownTarget (MakeCallback (&SimpleNetworkCoding::Send, this));
//				this->SetUpUdpTarget (MakeCallback (&UdpL4Protocol::Receive, udp));
//				upperLayer =true;
//			}
		}
	}
	Object::NotifyNewAggregate ();
}

void MoreNetworkCodingProtocol::DoDispose (void)
{
	NS_LOG_FUNCTION_NOARGS();
}

int MoreNetworkCodingProtocol::GetProtocolNumber (void) const
{
	return PROT_NUMBER;
}

Ptr<Node> MoreNetworkCodingProtocol::GetNode ()
{
	return m_node;
}

void MoreNetworkCodingProtocol::SetNode (Ptr<Node> node)
{
	m_node = node;
}

void MoreNetworkCodingProtocol::ReceiveFromUpperLayer (Ptr<Packet> packet, Ipv4Address source, Ipv4Address destination, uint8_t protocol, Ptr<Ipv4Route> route)
{
	NS_LOG_FUNCTION (this << " " << Simulator::Now().GetMilliSeconds() << " " <<  source << " " << destination  << " "<<  packet->GetSize());

	NetworkCodingHeader ncHeader;
	ncHeader.SetProtocolNumber (protocol);
//	Our first implementation does not support NC for UDP
	packet->AddHeader (ncHeader);

//	m_downTarget (packet, source, destination, SimpleNetworkCoding::PROT_NUMBER, 0);
	//	m_downTarget (packet, source, destination, 6, 	0);

}

void MoreNetworkCodingProtocol::Send (Ptr<Packet> packet, Ipv4Address source, Ipv4Address destination, uint8_t protocol, Ptr<Ipv4Route> route)
{
	Ipv4L4Protocol::DownTargetCallback downTarget = GetDownTarget();
	downTarget (packet, source, destination, MoreNetworkCodingProtocol::PROT_NUMBER, 	0);
}

enum Ipv4L4Protocol::RxStatus MoreNetworkCodingProtocol::Receive (Ptr<Packet> packet, Ipv4Header const &header, Ptr<Ipv4Interface> incomingInterface)
{
	NS_LOG_FUNCTION_NOARGS();
	return Ipv4L4Protocol::RX_OK;
}

bool MoreNetworkCodingProtocol::ReceivePromiscuous (Ptr<NetDevice> device, Ptr<const Packet> packet, uint16_t protocol, const Address &from, const Address &to, NetDevice::PacketType packetType)
{
	NS_LOG_FUNCTION_NOARGS();
	return true;
}

void MoreNetworkCodingProtocol::SetNetworkCodingBufferParameters (Time bufferTimeout, u_int32_t bufferSize, u_int8_t maxCodedPackets )
{
	NS_LOG_FUNCTION_NOARGS();

}

void MoreNetworkCodingProtocol::OpenTraceFile (string name)
{
	NS_LOG_FUNCTION_NOARGS();

}


