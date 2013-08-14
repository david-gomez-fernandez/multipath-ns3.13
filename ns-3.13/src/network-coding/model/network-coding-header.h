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
 *   	   Mario Puente <mario.puente@alumnos.unican.es>
 *		   Ramón Agüero Calvo <ramon@tlmat.unican.es>
 */

#ifndef NETWORK_CODING_HEADER_H_
#define NETWORK_CODING_HEADER_H_

#include "ns3/header.h"

#include "ns3/object.h"
#include "ns3/random-variable.h"
#include "ns3/packet.h"
#include "ns3/sequence-number.h"
#include "ns3/ipv4-address.h"
#include "ns3/tcp-header.h"

#include <stdio.h>
#include <iostream>

#include <openssl/md5.h> //Open SSL library --> Needed for hashing

namespace ns3 {

//NC packet types
//typedef enum
//{
//	NC_DATA,
//	NC_CONTROL,
//	NC_ACK,
//	NC_RETX_REQUEST,
//	NC_RETX_RESPONSE
//} NcType_t;

class NetworkCodingHeader:  public Header
{
public:
	/**
	 * Attribute handler
	 */
	static TypeId GetTypeId (void);
	virtual TypeId GetInstanceTypeId (void) const;
	/**
	 * Default constructor
	 */
	NetworkCodingHeader ();
	/**
	 * Default destructor
	 */
	virtual ~NetworkCodingHeader ();

	//Getters/setters
	void SetProtocolNumber (u_int8_t protocol);
	virtual u_int32_t GetProtocolNumber () const;

	void SetPacketType (u_int8_t type);
	u_int8_t GetPacketType (void) const;

	void SetCodedPackets (u_int8_t codedPackets);
	virtual u_int8_t GetCodedPackets (void) const;

	void SetEmbeddedAcks (u_int8_t embeddedPackets);
	virtual u_int8_t GetEmbeddedAcks () const;

	//Inherited methods from base class "Header" (pure virtual)
	virtual uint32_t GetSerializedSize (void) const;
	virtual void Serialize (Buffer::Iterator start) const;
	virtual uint32_t Deserialize (Buffer::Iterator start);
	virtual void Print (std::ostream &os) const;

	//For each coded packet, the header will include the required information
	struct Item {
		Item (const Ipv4Address destination,
				const SequenceNumber32 seqNum,
				const u_int16_t hash,
				const u_int16_t payloadLength);
		Ipv4Address destination;
		SequenceNumber32 seqNum;
		u_int16_t hash;
		u_int16_t payloadLength;
	};

	//Encapsulated ACK transmitted information
	struct AckInfo {
		AckInfo (const Ipv4Address destination,
				const TcpHeader tcpHeader);
		Ipv4Address destination;
		TcpHeader tcpHeader;
	};

	std::vector <struct Item>  m_packetVector; 		//Information relative to each native packet coded together
	std::vector <struct AckInfo> m_tcpAckVector;  //TCP Acknowledgement information (used for ACK embedding issues)

private:

	u_int8_t m_protocol;						//Upper layer protocol
	u_int8_t m_type;							//Will use 3 bits, hence we have 7 possible Types
	u_int8_t m_codedPackets; 					//Number of native packets coded together with
	u_int8_t m_embeddedAcks;					//Number of acks which are included into the NC header

};

} //namespace ns3
#endif /* NETWORK_CODING_HEADER_H_ */
