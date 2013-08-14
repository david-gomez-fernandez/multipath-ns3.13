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
 *		   Ramón Agüero Calvo <ramon@tlmat.unican.es>
 */


#include <sys/types.h>

#include "network-coding-helper.h"

using namespace ns3;
using namespace std;


NetworkCodingHelper::NetworkCodingHelper()
{
	m_printStatistics = false;

}

NetworkCodingHelper::~NetworkCodingHelper()
{
	PrintStatistics();

	if (m_traceFile.is_open())
		m_traceFile.close();
}

void NetworkCodingHelper::Install (NodeContainer c, std::string typeId)
{
	for (NodeContainer::Iterator iter = c.Begin(); iter != c.End(); iter ++)
	{
		Ptr<Node> node = *iter;
		Ptr <NetworkCodingL4Protocol> networkCoding = CreateAndAggregateObjectFromTypeId (node, "ns3::" + typeId);
		networkCoding->SetNode(node);
		m_networkCodingList.push_back (networkCoding);

		// IMPORTANT: Configure the promiscuous nodes
		//Connect the nodes to a promiscuous reception
		for (u_int32_t i = 0; i < node->GetNDevices(); i++)
		{
			//Aggregate only for WifiNetDevice objects
			if (node->GetDevice(i)->GetObject<WifiNetDevice> ())
			{
				Ptr<WifiNetDevice> wifi = node->GetDevice(i)->GetObject<WifiNetDevice> ();
				wifi->SetPromiscReceiveCallback(MakeCallback(&NetworkCodingL4Protocol::ReceivePromiscuous, networkCoding));
			}
		}
	}
}

void NetworkCodingHelper::SetNetworkCodingBuffer (Time bufferTimeout, u_int32_t bufferSize, u_int8_t maxCodedPackets)
{
	m_bufferTimeout = bufferTimeout;
	m_bufferSize = bufferSize;
	m_maxCodedPackets = maxCodedPackets;
}

void NetworkCodingHelper::SetAckBufferParameters (Time bufferTimeout, u_int8_t bufferSize)
{
	m_ackBufferTimeout = bufferTimeout;
	m_ackBufferSize = bufferSize;
}

Ptr<NetworkCodingL4Protocol> NetworkCodingHelper::CreateAndAggregateObjectFromTypeId (Ptr<Node> node, const std::string typeId)
{
	ObjectFactory factory;
	factory.SetTypeId (typeId);
	Ptr<NetworkCodingL4Protocol> protocol = factory.Create <NetworkCodingL4Protocol> ();
	node->AggregateObject (protocol);

	return protocol;
}

void NetworkCodingHelper::SetEmbeddedAckScheme (bool flag)
{
	for (u_int16_t i = 0; i < m_networkCodingList.size (); i++)
	{
		//Check if we are working on SimpleNetworkCoding scheme
		Ptr<SimpleNetworkCoding> simple = DynamicCast<SimpleNetworkCoding> (m_networkCodingList[i]);
		if (simple)
			simple->SetEmbeddedAcks (flag);
	}
}

void NetworkCodingHelper::EnableTracing (string name, u_int32_t run, double fer)
{
	m_printStatistics = true;
	m_run = run;
	m_fer = fer;

	//Try to open an existing file; if error, open a new one
	name.erase (name.begin () + name.length () - 1, name.begin() + name.length ());
	name = "traces/" + name + ".tr";

	m_traceFile.open (name.c_str (), fstream::in | fstream::out | fstream::ate);

	if (m_traceFile.fail ())
	{
		m_traceFile.close ();
		char headerLine [196];
		NS_LOG_UNCOND ("NetworkCodingHelper::EnableTracing --> File not found");
		m_traceFile.open (name.c_str (), fstream::out | fstream::ate);

		sprintf (headerLine, "%14s %14s %14s %14s %14s %14s %14s %14s %14s %14s %14s %14s %14s",
						"No.", "BufSiz", "BufTO", "MaxCP", "AckBufSiz", "AckBufTO", "FER", "Coding Rate", "Decod rate", "Rcvd bytes", "Elapsed time", "Throughput", "Transmissions");

		m_traceFile << headerLine << endl;
	}
}

void NetworkCodingHelper::PrintStatistics ()
{
	u_int32_t totalCodedTx = 0;
	u_int32_t totalUncodedTx = 0;
	u_int32_t totalDecodeSuccess = 0;
	u_int32_t totalDecodeFailure = 0;

	u_int32_t totalRxBytes = 0;
	u_int32_t totalTransmissions = 0;

	float totalThput = 0.0;
	u_int8_t counter = 0;			//Number of flows counter

	double codingRate = 0.0;
	double decodingRate = 0.0;

	double elapsedTime = 0.0;
	double totalElapsedTime = 0.0;

	char line [256];

	for (u_int8_t i = 0; i < m_networkCodingList.size(); i ++)
	{
		double thput;
		NetworkCodingStatistics_t *temp = m_networkCodingList[i]->GetNetworkCodingStatistics();

		totalCodedTx += temp->codedPacketTx;
		totalUncodedTx += temp->uncodedPacketTx;
		totalDecodeSuccess += temp->decodeSuccess;
		totalDecodeFailure += temp->decodeFailure;
		totalRxBytes += temp->networkCodingLayerTotalBytes;
		totalTransmissions += temp->transmissionNumber;

		elapsedTime = temp->lastReception - temp->startingTime;
		thput = (double) temp->networkCodingLayerTotalBytes * 8 / (temp->lastReception - temp->startingTime) / 1e6;

//		if (thput == thput)			//Odd style to check if a double variable has a NaN value
		if (temp->networkCodingLayerTotalBytes)
		{
			totalElapsedTime += elapsedTime;
			totalThput += thput;
			counter ++;
		}
	}

	codingRate = (double) totalCodedTx / (totalCodedTx + totalUncodedTx);
	if (codingRate != codingRate)
		codingRate = 0.0;
	decodingRate = (double) totalDecodeSuccess / (totalDecodeSuccess + totalDecodeFailure);
	if (decodingRate != decodingRate)
		decodingRate = 0.0;

	if (totalThput != totalThput)
		totalThput = 0.0;

	if (m_printStatistics)
	{
		sprintf (line, "%14d %14d %14d %14d %14d %14d %14.2f %14.4f %14.4f %14d %14.4f %14.4f %14d",
				m_run, m_bufferSize, (int) m_bufferTimeout.GetMilliSeconds(), 2,
				m_ackBufferSize, (int) m_ackBufferTimeout.GetMilliSeconds(),
				m_fer, codingRate, decodingRate,
				totalRxBytes, (double) elapsedTime,
				(double) totalThput / counter,
				totalTransmissions);

		m_traceFile << line << endl;

		NS_LOG_UNCOND("Timeout " <<  m_bufferTimeout.GetSeconds() << " Size " << (int) m_bufferSize  << " FER " <<
				m_fer << " ACK buffer timeout " << m_ackBufferTimeout.GetSeconds() << " ACK buffer size " << (int) m_ackBufferSize);
	}
}
