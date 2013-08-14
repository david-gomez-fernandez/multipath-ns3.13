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

#ifndef NETWORK_CODING_BUFFER_H_
#define NETWORK_CODING_BUFFER_H_

#include "ns3/core-module.h"
#include "ns3/internet-module.h"
#include "ns3/network-coding-header.h"

namespace ns3 {

class Node;

//Struct that will store the packet relative information at the buffers (similar to the one found at WifiMacQueue)
struct NetworkCodingItem {
	NetworkCodingItem ();
	NetworkCodingItem (Ptr<Packet> packet, Ipv4Address source, Ipv4Address destination,
			u_int8_t protocol, u_int16_t hash, Time tstamp);
	Ptr<Packet> packet;
	Ipv4Address source;
	Ipv4Address destination;
	u_int8_t protocol;
	u_int16_t hash;
	Time tstamp;
	void Print (std::ostream &os) const;
};

struct TcpAckItem {
	TcpAckItem ();
	TcpAckItem (Ptr<Packet> packet, TcpHeader header, Ipv4Address source,
			Ipv4Address destination, Time tstamp);
	Ptr<Packet> packet;
	TcpHeader header;
	Ipv4Address source;
	Ipv4Address destination;
	Time tstamp;
	void Print (std::ostream &os) const;
};


std::ostream & operator << (std::ostream &os, const struct NetworkCodingItem &item);
std::ostream & operator << (std::ostream &os, const struct TcpAckItem &item);

class NetworkCodingBuffer: public Object
{
public:

	//Callbacks to connect to the NetworkCodingL4 sending members
	typedef Callback <void> SendDownCallback;

	//Enum to handle the possible new timeout updates
	typedef enum
	{
		INSERT_ELEMENT,
		EJECT_ELEMENT

	} BufferTimeoutState_t;

	/**
	 * Attribute handler
	 */
	static TypeId GetTypeId (void);
	/**
	 * Default constructor
	 */
	NetworkCodingBuffer ();
	/**
	 * Additional constructor, which defines the buffer parameters
	 */
	NetworkCodingBuffer (Time bufferTimeout, u_int32_t maxBufferSize, u_int8_t maxCodedPackets);
	/**
	 * Default destructor
	 */
	virtual ~NetworkCodingBuffer ();

	//Getters/setters
	Ptr<Node> GetNode ();
	void SetNode (Ptr<Node> node);

	u_int32_t GetBufferSize () const;
	void SetBufferSize (u_int32_t maxBuf);

	Time GetBufferTimeout () const;
	void SetBufferTimeout (Time timeout);

	u_int8_t GetMaxCodedPackets () const;
	void SetMaxCodedPackets (u_int8_t maxCodedPackets);

	Time GetDecodingBufferStoreTime () const;
	void SetDecodingBufferStoreTime (Time storeTime);

	u_int8_t GetAckBufferSize () const;
	void SetAckBufferSize (u_int8_t maxBuf);

	Time GetAckBufferStoreTime () const;
	void SetAckBufferStoreTime (Time storeTime);

	/*
	 *	Hook the callback which will be invoked when a packet is about to be delivered
	 */
	void SetSendDownCallback (SendDownCallback callback);

	/*
	 *  Hook the callback which will be invoked when a TCP's ACK segment is about to be delivered
	 */
	void SetSendDownAckCallback (SendDownCallback callback);

	/**
	 * This function will take care of parsing and deciding what to do when the entity receives a packet from the Ipv4L4Protocol::Send method
	 * \param packet Received packet
	 * \param source Source IP address
	 * \param destination Destination IP address
	 * \returns True if the packet can directly go to the upper layer (i.e. corresponding native packet)
	 */
	bool UpdateDecodingBuffer (Ptr<Packet> packet, Ipv4Address source, Ipv4Address destination, uint8_t protocol);

	/**
	 * A new native arrival (via promiscuous reception) will trigger an update of the input packet pool flow-id buffer
	 * \param packet The overheard (or received) packet
	 * \param ncHeader The corresponding Network Coding header of
	 * \param source
	 * \param destination
	 * \param protocol
	 * \returns True if correct; false otherwise
	 */
	bool UpdateInputPacketPool (Ptr <Packet> packet, NetworkCodingHeader ncHeader, Ipv4Address source, Ipv4Address destination, u_int8_t protocol);

	/**
	 * \brief Update the input packet pool flow buffer timeout
	 * \param hash 32-bit value to locate the input packet element
	 * \param override True if the i.e. the buffer is full and we need to change the old timeout by the second packet in the list.
	 */
	void UpdateInputPacketPoolTimeouts (u_int16_t hash, BufferTimeoutState_t state = INSERT_ELEMENT);

	/**
	 * \brief Once a timeout is triggered, we need to extract the corresponding packet from the input packet pool and send it downwards
	 *
	 */
	void HandleInputPacketPoolTimeout (u_int16_t hash);

	/**
	 * \brief After a new coding opportunity, if the resulting packet can include more segments (i.e. it has not reached the maximum number of packets which can be coded together with), the combined
	 * 		  native packets will be held at this buffer, waiting a time equivalent to the oldest one resting sojourn time
	 */
	void UpdateOutbutBufferTimeout ();
	/**
	 * \brief Once an output buffer timeout is triggered, the corresponding combination of packets (remark that this buffer will only hold coded packets)
	 */
	void HandleOutputBufferTimeout ();

	/**
	 * \brief Get the first packet (oldest) from the output buffer
	 */
	std::vector<NetworkCodingItem> OutputBufferExtraction ();

	/**
	 * Extract the first element of the input packet pool flow-id entry (defined by the hash); besides, extract and update the timeouts
	 * \param hash Input packet pool key entry
	 * \returns The first element of the entry defined by the hash
	 */
	NetworkCodingItem InputPacketPoolExtraction (u_int16_t hash);

	/*
	 * IN A CODING NODE, after the reception of an ACK, if the ACK encapsulation is enabled, the NC scheme will search for an encapsulation opportunity within
	 * both the output buffer and the input packet
	 * \param packet Received packet
	 * \param source IP source address
	 * \param destination IP destination address
	 * \returns True is success; false otherwise
	 */
	bool UpdateAckBuffer (Ptr<Packet> packet, Ipv4Address source, Ipv4Address destination);

	/*
	 * If a packet is ejected from this buffer, this event will trigger a packet shift into the AckBuffer, therefore we need to update the new oldest packet timeout
	 */
	void UpdateAckBufferTimeout ();

	/**
	 * Extract the first element stored into the ACK buffer
	 * \returns The oldest ACK segment stored in the buffer
	 */
	TcpAckItem AckBufferExtraction ();

	/**
	 * Once a timeout is triggered at the ACK buffer, the first element will be ejected and sent downwards
	 */
	void HandleAckBufferTimeout ();

	/**
	 * After a new packet is added to the input packet pool
	 */
	bool SearchForCodingOpportunity (u_int16_t hash);

	/**
	 * Look for a concrete native packet into the decoding buffer
	 * \param hash Flow-id
	 * \param seqNum The TCP Sequence Number of the coded packet
	 * \returns The native packet searched; otherwise, a null pointer
	 */
	Ptr<Packet> SearchIntoDecodingBuffer (u_int16_t hash, u_int32_t seqNum);

	/**
	 * NOTE: Feature available only for coding nodes.
	 * Search into the NC buffer to find a stored native packet in order to encapsulate a TCP ACK segment within the Network Coding header
	 */
	bool SearchAckEncapsulation ();

	/*
	 * When a data packet is about to be delivered, check whether we can embed any ACK segment. If so, modify the header in order to encapsulate as much ACKs as possible
	 * \param ncHeader The Network Coding header of the packet will be sent down to the lower layer
	 * \param packetLength Length (in bytes) of the packet
	 * \returns True if it could be possible to add an ACK (or more than just one); false otherwise
	 */
	bool EncapsulateTcpAckSegments (NetworkCodingHeader &ncHeader, u_int16_t packetLength);

	/**
	 * Append a data packet to the end of the buffer
	 *
	 * \param p The packet to be appended to the Tx buffer
	 * \param hash 16-bit MD5 hash of the tuple <IP source address, IP destination address, TCP/UDP source port, TCP/UDP destination port>
	 * \return Boolean to indicate success
	 */
	bool Add (Ptr<Packet> p, u_int16_t hash);

	/**
	 * Hashing. The function will receive the EndPoints and will return the MD5 32-bit hash function, using the Open SSL library
	 * \param ipSrc   Source IP address
	 * \param ipDst   Destination IP address
	 * \param portSrc Source port (TCP/UDP)
	 * \param portDst Destination port (TCP/UDP)
	 * \returns 	  The hash digest value
	 */
	u_int16_t Hash (Ipv4Address ipSrc, Ipv4Address ipDst, u_int16_t portSrc, u_int16_t portDst);

	/**
	 * Cleaning member (it will take care of handling the buffer which do not explicitly implement timeout handlers)
	 */
	void Cleanup (void);

private:
	//Node in which the buffer is instanced
	Ptr<Node> m_node;				//Pointer to the node which holds the buffer. It is initialized (by default) at SimpleNetworkCoding::SimpleNetworkCoding

	//Customizable parameters --> These two parameters will bring about an important impact over the system performance
	Time m_ncBufferTimeout;								//Time interval while the buffer keeps the overheard packets
	u_int32_t m_maxBufferSize;							//Input packet pool size (in packets)
	u_int8_t m_maxCodedPackets;							//Maximum number of packets that can be coded together with
	Time m_decodingBufferStoreTime;						//Time during which the decoding buffer will hold on a native packet
	u_int8_t m_ackBufferSize;							//Maximum number of packets held by the ACK buffer
	Time m_ackBufferStoreTime;							//Time interval during while the buffers can keeps an ACK

	//Input packet pool --> Recall that it will be instanced a buffer for each flow overheard by the node
	typedef std::list <struct NetworkCodingItem> InputBuffer;								//FIFO queue of the packets to be forwarded
	typedef std::map <u_int16_t, InputBuffer> InputPacketPool;
	typedef std::map <u_int16_t, InputBuffer>::iterator InputPacketPoolIterator;
	typedef std::map <u_int16_t, EventId> InputPacketPoolTimeouts;		//Each flow buffer is tightly linked to a timeout
	typedef std::map <u_int16_t, EventId>::iterator InputPacketPoolTimeoutIterator;
	InputPacketPool m_input;
	InputPacketPoolTimeouts m_inputTimeouts;

	//Output queue --> Second stage: Once a packet passes through the input packet pool, it reaches this one waiting for a new coding opportunity; if the timeout is triggered, it will directly go the lower layer
	typedef std::list <std::vector <struct NetworkCodingItem> > OutputBuffer;
	typedef std::list <std::vector <struct NetworkCodingItem> >::iterator OutputBufferIterator;
	typedef std::list <EventId> OutputBufferTimeouts;						//List of timeouts associated to the output buffer
	typedef std::list <EventId>::iterator OutputBufferTimeoutIterator;
	OutputBuffer m_output;
	OutputBufferTimeouts m_outputTimeouts;

	//Decoding buffer --> We will temporary store all the native packets so as to retrieve the original information from the coded ones
	//Key element --> EndPoints hash + TCP Sequence Number => Each packet can be individually found at the decoding buffer
	typedef std::pair<u_int32_t, u_int32_t> decodingKey;
	typedef std::map<decodingKey, struct NetworkCodingItem> DecodingBuffer;
	typedef std::map<decodingKey, struct NetworkCodingItem>::iterator DecodingBufferIterator;
	DecodingBuffer m_decodingBuffer;

	//ACK buffer --> In order to handle the new TCP ACK encapsulation, we will handle another buffer (namely, a FIFO queue) which will take care of the overheard ACKs
	typedef std::list <struct TcpAckItem > AckBuffer;
	typedef std::list <struct TcpAckItem >::iterator AckBufferIterator;
	AckBuffer m_ackBuffer;
	EventId m_ackBufferTimeout;						//The timeout defined by the first stored element

	//NetworkCodingL4Protocol interaction callbacks
	SendDownCallback m_sendDownCallback;
	SendDownCallback m_sendDownAckCallback;
};

}  //End namespace
#endif /* NETWORK_CODING_BUFFER_H_ */
