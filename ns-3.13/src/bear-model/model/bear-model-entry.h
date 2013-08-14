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

#ifndef BEAR_MODEL_ENTRY_H_
#define BEAR_MODEL_ENTRY_H_


#include <string>
#include <vector>
#include <map>
#include <unistd.h>

#include "ns3/object.h"
#include "ns3/nstime.h"

//AR model will play the role as the derived classes of both Error and Propagation Loss models
#include "ns3/mobility-model.h"
#include "ns3/propagation-loss-model.h"

#include "ns3/event-id.h"
#include "ns3/channel-mesh-propagation-handler.h"

using namespace std;
namespace ns3 {

class Packet;
class BearErrorModel;

struct prevValues_t {
	double 		snr;
	Time 		time;
};

class BearModelEntry: public Object
{
public:
	/**
	 * Constructor
	 */
	BearModelEntry ();
	/**
	 * \param order Auto Regressive filter order
	 * \
	 */
	BearModelEntry (int order, double coherenceTime);

	/**
	 * Destructor
	 */
	~BearModelEntry ();
	 /**
	  * When a new frame arrives, we need to update the vector that contains the AR order previous frames information; furthermore, we must
	  * update the BearModelEntry oldest received frame timeout
	  * \param snr SNR read from the physical layer
	  * \param order Order of the AR filter
	  */
	 void UpdateSnr (double snr);

	 /**
	  *  \param previousSnr Vector which will hold the SNR values (window)
	  *  \returns The size of the input vector
	  */
	 int GetPreviousSnr (vector<double> &previousSnr);

	 /**
	  * \param coherenceTime Channel coherence
	  * \returns The instant the next timeout should be invoked
	  */
	 double GetNextTimeout();
	 /**
	  * \brief Handle the timeout event when the coherence timer expires
	  */
	 void HandleCoherenceTimeout ();

	 /**
	  *  \brief Print the captured packet queue (AR model window)
	  */
	 void DisplaySnrQueue (void);
	 /**
	  *
	  */
	 void SetCurrentRxPower (double value);
	 /**
	  *
	  */
	 void SetCurrentSlowFading (double value);
	 /**
	  *
	  */
	 void SetCurrentFastFading (double value);
	 /**
	  *
	  */
	 void SetCurrentSnr (double value);
	 /**
	  *
	  */
	 double GetCurrentRxPower () const;
	 /**
	  *
	  */
	 double GetCurrentSlowFading () const;
	 /**
	  *
	  */
	 double GetCurrentFastFading () const;
	 /**
	  *
	  */
	 double GetCurrentSnr () const;

private:

	 //Vector that stores the SNR and the timestamp of the overheard packets (Size set by the AR filter order)
	 vector <struct prevValues_t> m_previousSnr;

	 //One timer per ChannelEntry object
	 EventId m_coherenceTimeout;

	 int m_order;
	 double m_coherenceTime;

	 //Current SNR values --> We need them to be later used within the error model
	 double m_currentRxPower;
	 double m_currentSlowFading;
	 double m_currentFastFading;
	 double m_currentSnr;
};


}	//End namespace ns3

#endif /* BEAR_MODEL_ENTRY_H_ */
