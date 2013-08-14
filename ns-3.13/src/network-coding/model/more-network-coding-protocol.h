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

#ifndef MORE_NETWORK_CODING_PROTOCOL_H_
#define MORE_NETWORK_CODING_PROTOCOL_H_

#include "ns3/core-module.h"
#include "network-coding-l4-protocol.h"

namespace ns3 {

class MoreNetworkCodingProtocol: public NetworkCodingL4Protocol {
public:

	static const uint8_t PROT_NUMBER;
	/**
	 * Attribute handler
	 */
	static TypeId GetTypeId (void);
	/**
	 * Default constructor
	 */
	MoreNetworkCodingProtocol();

	/**
	 * Default destructor
	 */
	virtual ~MoreNetworkCodingProtocol();

	/**
	 * \returns the protocol number of this protocol.
	 */
	virtual int GetProtocolNumber (void) const;

	/**
	 *	Locate in which node the SimpleNetworkCodingObject is stored
	 *	\param node Node that contains the object
	 */
	virtual void SetNode (Ptr <Node> node);

	virtual Ptr<Node> GetNode ();

	/**
	 * \param packet packet to send
	 * \param source source address of packet
	 * \param destination address of packet
	 * \param protocol number of packet
	 * \param route route entry
	 *
	 * Higher-level layers call this method to send a packet
	 * down the stack to the IP level
	 */
	virtual void ReceiveFromUpperLayer (Ptr<Packet> packet, Ipv4Address source, Ipv4Address destination, uint8_t protocol, Ptr<Ipv4Route> route);

	/**
	 * \param packet packet to send
	 * \param source source address of packet
	 * \param destination address of packet
	 * \param protocol number of packet
	 * \param route route entry
	 *
	 * Higher-level layers call this method to send a packet
	 * down the stack to the IP level
	 */
	virtual void Send (Ptr<Packet> packet, Ipv4Address source, Ipv4Address destination, uint8_t protocol, Ptr<Ipv4Route> route);

	/**
	 * \param p packet to forward up
	 * \param header IPv4 Header information
	 * \param incomingInterface the Ipv4Interface on which the packet arrived
	 * Called from lower-level layers to send the packet up
	 * in the stack.
	 */
	virtual enum Ipv4L4Protocol::RxStatus Receive (Ptr<Packet> packet, Ipv4Header const &header, Ptr<Ipv4Interface> incomingInterface);  	//Old version, inherited form base clase Ipv4L4Protocol

	/**
	 * As we need to overhear all the packets incoming from the node's surrounding area, we must configure promiscuous nodes. For that purpose, we need to hook a method through the method
	 * WifiNetDevice::SetPromiscReceiveCallback, which will invoke this method (since we have linked them). Therefore, a "promiscuous" packet will be bypassed directly from the Link Layer
	 * the Network Coding level, thus passing through the network layer. Therefore, we must discard the IP header in order to get execution exceptions.
	 * NOTE: It is worth highlighting that the callback method will deliver every received frame (including if the node is the expected receiver), hence he have to be careful of parsing
	 * duplicated packets
	 * \param device The NetDevice object from which we will receive the packet
	 * \param packet The overheard packet
	 * \param protocol LLC Header's protocol type
	 * \param from Source address (class Address)
	 * \param to Destination address (class Address)
	 * \param packetType NetDevice::PacketType enumerate
	 * \returns True if success; false otherwise
	 */
	bool ReceivePromiscuous (Ptr<NetDevice> device, Ptr<const Packet> packet, uint16_t protocol, const Address &from, const Address &to, NetDevice::PacketType packetType);

	/**
	 * Try to remove this dependency
	 */
	virtual void SetNetworkCodingBufferParameters (Time bufferTimeout, u_int32_t bufferSize, u_int8_t maxCodedPackets);

	/**
	 * This method allows a caller to set the current down target callback set for this L4 protocol
	 * \param cb current Callback for the L4 protocol
	 */
	inline void SetUpNscTarget (UpTargetCallback cb) {m_upNscTcpTarget = cb;}
	inline void SetUpTcpTarget (UpTargetCallback cb) {m_upTcpTarget = cb;}
	inline void SetUpUdpTarget (UpTargetCallback cb) {m_upUdpTarget = cb;}

	/**
	 * Open a trace file which will contain the most highlighting information relative to the statistics gathered during the simulation.
	 * \param name File name
	 */
	virtual void OpenTraceFile (string name);

protected:
	/**
	 * Cleanup the object
	 */
	virtual void DoDispose (void);
	/*
	 * This function will notify other components connected to the node that a new stack member is now connected
	 * This will be used to notify Layer 3 protocol of layer 4 protocol stack to connect them together.
	 */
	virtual void NotifyNewAggregate ();

private:
	Ptr<Node> m_node;
	NetworkCodingBuffer m_ncBuffer;

	//Callback hooks
	UpTargetCallback m_upNscTcpTarget;
	UpTargetCallback m_upTcpTarget;
	UpTargetCallback m_upUdpTarget;

};

}  	//End namespace
#endif /* MORE_NETWORK_CODING_PROTOCOL_H_ */
