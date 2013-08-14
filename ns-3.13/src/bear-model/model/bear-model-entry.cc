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

#include "bear-model-entry.h"

#include <math.h>
#include <fstream>
#include <stdio.h>

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
#include "ns3/wifi-mac-header.h"

#include "bear-propagation-loss-model.h"

const bool g_debug = false;  							//Temporal solution (only for debugging)

using namespace std;
using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("BearModelEntry");
NS_OBJECT_ENSURE_REGISTERED (BearModelEntry);

BearModelEntry::BearModelEntry():
		m_currentRxPower (0.0),
		m_currentSlowFading (0.0),
		m_currentFastFading (0.0),
		m_currentSnr (0.0)
{
	NS_LOG_FUNCTION (this);
}

BearModelEntry::BearModelEntry(int order, double coherenceTime):
		m_order (order),
		m_coherenceTime (coherenceTime),
		m_currentRxPower (0.0),
		m_currentSlowFading (0.0),
		m_currentFastFading (0.0),
		m_currentSnr (0.0)
{
	NS_LOG_FUNCTION ("AR filter order " << order << " -- Coherence Time" << coherenceTime);
}

BearModelEntry::~BearModelEntry()
{
	NS_LOG_FUNCTION (this);
}

void BearModelEntry::UpdateSnr (double snr)
{
	NS_LOG_FUNCTION (this);

	struct prevValues_t newSample;
	double newTimeout;
	newSample.time = Simulator::Now();

	//If the vector is empty, set the timer with the arrival of the first frame
	if (!m_previousSnr.size())
	{
		m_coherenceTimeout = Simulator::Schedule(MilliSeconds(m_coherenceTime), &BearModelEntry::HandleCoherenceTimeout, this);
		NS_LOG_DEBUG("Timeout established at " << Simulator::Now().GetSeconds() + m_coherenceTime/1e3);
	}
	//If the vector is full (already holds AR model order values), we do erase the oldest one (the first one), and push back the newest one
	//at the end of the vector. It is worth highlighting, that if there is an active timer
	if(m_previousSnr.size() && m_previousSnr.size() == ((unsigned) m_order)) {
		m_previousSnr.erase(m_previousSnr.begin());
		if (m_coherenceTimeout.IsRunning())
		{
			m_coherenceTimeout.Cancel();
			//Update the new timer
			newTimeout = GetNextTimeout();
			m_coherenceTimeout = Simulator::Schedule(MilliSeconds(newTimeout), &BearModelEntry::HandleCoherenceTimeout, this);
		}
		//Option not tested yet
//		else
//		{
//			newTimeout = GetNextTimeout();
//			m_coherenceTimeout = Simulator::Schedule(MilliSeconds(newTimeout), &BearModelEntry::HandleCoherenceTimeout, this);
//		}
	}
	newSample.snr = snr;
	m_previousSnr.push_back(newSample);
	DisplaySnrQueue();
}

int BearModelEntry::GetPreviousSnr(vector<double> &previousSnr)
{
	NS_LOG_FUNCTION_NOARGS();
	int i;

	for(i = 0 ; i < (int) m_previousSnr.size() ; i++) {
		previousSnr.push_back(m_previousSnr[i].snr);
	}

	return ((int) m_previousSnr.size());
}

double BearModelEntry::GetNextTimeout()
{
	NS_LOG_FUNCTION(this);
	double timeout, currentTime, firstArrival;

	if(m_previousSnr.size())
	{
		firstArrival = m_previousSnr[0].time.GetMilliSeconds();
		currentTime = Simulator::Now().GetMilliSeconds();
		timeout = m_coherenceTime - (currentTime - firstArrival);

		NS_LOG_DEBUG ("Getting next timeout = " << m_coherenceTime << " - " << "(" 		\
				<< currentTime << " - " << firstArrival << ") = " << timeout << " --> " << Simulator::Now().GetSeconds() + timeout/1e3);
		//Maximum precision 1 msec
		if(timeout < 1)
			timeout = 1;

	} else {
		timeout = 0.0;
	}

	NS_LOG_DEBUG("Introducing a new timeout in " << timeout << " milliseconds");

	return timeout;
}

void BearModelEntry::HandleCoherenceTimeout()
{
	NS_LOG_FUNCTION(Simulator::Now().GetSeconds());

	if(m_previousSnr.size())
	{
		m_previousSnr.erase(m_previousSnr.begin());
		m_coherenceTimeout = Simulator::Schedule (MilliSeconds(GetNextTimeout()), &BearModelEntry::HandleCoherenceTimeout, this);
	}
	else
		NS_LOG_ERROR("There are not buffered samples");
}

void BearModelEntry::DisplaySnrQueue()
{
	NS_LOG_FUNCTION(Simulator::Now().GetSeconds());
	u_int8_t i;
	char message[256];

	for (i=0; i < m_previousSnr.size(); i++)
	{
		sprintf(message, "%3d SNR = %2.6f Time = %4.5f", i, m_previousSnr[i].snr, m_previousSnr[i].time.GetSeconds());
		NS_LOG_DEBUG(message);
	}
}

void BearModelEntry::SetCurrentRxPower (double value)
{
	m_currentRxPower = value;
}

void BearModelEntry::SetCurrentSlowFading (double value)
{
	m_currentSlowFading = value;
}

void BearModelEntry::SetCurrentFastFading (double value)
{
	m_currentFastFading = value;
}

void BearModelEntry::SetCurrentSnr (double value)
{
	m_currentSnr = value;
}

double BearModelEntry::GetCurrentRxPower () const
{
	return m_currentRxPower;
}

double BearModelEntry::GetCurrentSlowFading () const
{
	return m_currentSlowFading;
}

double BearModelEntry::GetCurrentFastFading () const
{
	return m_currentFastFading;
}

double BearModelEntry::GetCurrentSnr () const
{
	return m_currentSnr;
}
