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


#ifndef HIDDEN_MARKOV_ENTRY_H_
#define HIDDEN_MARKOV_ENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <unistd.h>

#include "ns3/core-module.h"
#include "ns3/channel-mesh-propagation-handler.h"

using namespace ns3;
using namespace std;

///Enumerate which defines the type of simulation:
// Time-based: We need to tailor the mean sojourn time at each state within the chain (see documentation)
// Frame-based: After each reception a change state function is triggered

//class HiddenMarkovErrorModel;

enum HiddenMarkovSimulationMode
{
	HMM_TIME_BASED_SIMULATION,
	HMM_FRAME_BASED_SIMULATION
};

class HiddenMarkovModelEntry: public Object
{
	friend class HiddenMarkovPropagationLossModel;
public:

	/* The Coefficients of the HiddenMarkovErrorModel */
	typedef map<int, vector<double> > coefSet_t;
	typedef map<int, vector<double> >::iterator coefSetIter_t;

	/**
	 * Default destructor
	 */
	HiddenMarkovModelEntry ();

	/**
	 * Default constructor
	 */
	~HiddenMarkovModelEntry ();

	/**
	 * \brief Map a FER value deciding which parameter configuration is the most suitable for the searched behavior
	 * We are going to allow three possible FER intervals, since we have only analized these ones:
	 * 		-   Ideal channel (FER < 0.03) --> HMM_4states/Ideal_TR.txt
	 *  	-	Good channel (FER ~= 0.16) --> HMM_4states/HMM_12_TR_%1d.txt
	 *  	-   Average channel (FER ~= 0.29) --> HMM_4states/HMM_9_TR_%1d.txt
	 *  	-	Bad channel (FER ~= 0.16) --> HMM_4states/HMM_5_TR_%1d.txt
	 *  NOTE: In a first version, we will ignore the nodes which we are supposedly setting the FER value
	 * \param fer FER value for the specified link
	 * \param from Source node ID
	 * \param to Destination node ID
	 */
	void MapFerValue (double fer);

	/**
	 * \brief Load the matrices according to the distance between the nodes (To be developed)
	 */
	void MapDistanceValue (double distance);

	/**
	 * Read the transmission and emission files and proceed to create the corresponding matrices
	 * \returns False if an error happened during the file extraction, 0  otherwise
	 */
	bool GetCoefficients (string transitionMatrixFileName, string emissionMatrixFileName);

	/**
	 * \brief Method that calculates the average transmission time as a function of the number of retransmission carried out by the source node
	 * We have followed the expression:
	 * t_i = (i + 1) * m_fixedTransmissionTime + ((2^4 * sum (j=0 ... i) {2^j} - (i + 1)/2) * m_slotTime)
	 *
	 * \param retx The number of retranmsmissions (Must be lower or equal than "m_transmissionAttempts" -1)
	 * \returns The average time estimated to transmit a frame (take into account that there is a probability of losing a frame)
	 */
	double CalcAverageTransmissionTime (u_int8_t retx);

	/**
	 * Check if there will be a shift at the chain:
	 * Time-based: After a timeout is triggered
	 * Frame-based: After each frame reception
	 */
	void ChangeState ();

	/**
	 * Print matrices (only for debugging issues). Namely, the transition and decision matrices,
	 * the average state duration and the average inter-frame space duration per state.
	 */
	void PrintMatrices ();

	/**
	 * Methods that handles the timers (only in time-based simulations)
	 * The first frame reception will lead to the creation of a ever-lasting state change cycle
	 */
	void InitializeTimer (void);

	/**
	 * Methods that handles the timers (only in time-based simulations)
	 * Once the timing mechanism is ongoing, after each time a timeout is triggered,
	 * we will handle this function member to force the HMP to change its current state
	 */
	void TimerHandler (void);

	/**
	 * If a node does not receive any frame for a large amount of time (i.e. 10 seconds), we will
	 * erase the continuous HMP state flow, because it will lead to a slower computational time (there will
	 * be always an event till the end of the simulation). Hence, in this member function, we will stop this
	 * trend
	 */
	void CoherenceTimeoutHandler (void);

	/**
	 *	Obtain the state in which the model is allocated at a time t
	 */
	u_int8_t GetCurrentState ();

	/**
	 * Look into the emission matrix and return the value belonging to the current state at an instant t
	 * \param currentState The current state within the HMP
	 * \returns The emission matrix coefficient
	 */
	double GetDecisionValue (u_int8_t currentState);


private:
	bool m_eventStarted;							//Flag enabled upon the first packet reception at a particular link
	u_int8_t m_currentState;						//State within the Markov chain at time t

	coefSet_t m_transitionMatrix;					//Transition probabilities among the states (NxN)
	coefSet_t m_emissionMatrix;						//Output observables (Corrupted, correct) (NxM)

	vector <double> m_meanDurationVector;   		//Mean duration (in frames) within each state (Nx1)
	vector <double> m_averageInterFrameTime;        //Each state will show a different average inter-frame space, inherent to its intrinsic Erroneous Frame Burst

	//Legacy IEEE 802.11b default parameters
	double m_fixedTransmissionTime;					//Deterministic time for a frame transmission (supposed 1472 bytes) --> 1617 microseconds (IMPORTANT: It is still missing the random contention window period)
	double m_slotTime;								//DCF slot time (Default slot time in legacy IEEE 802.11b) --> 20 microseconds
	u_int8_t m_transmissionAttempts;					//Number of transmission of a same frame (IEEE 802.11 retransmission scheme) --> 4 attempts (raw tx + 3 retx)

	//Needed information
	HiddenMarkovSimulationMode m_mode;				//We must need the type of analysis in order to perform

	//One timer per ChannelEntry object
	EventId m_changeStateTimeout;

	//In order not to allow that the timers will be enabled during all the simulation time, we have to set a timeout which will limit the maximum
	//time without receiving a frame; after that timeout, we will cancel any event regarding the HMP state shift
	Time m_coherenceTime;
	EventId m_coherenceTimeout;

protected:
	/**
	 * \return The current path (in string format)
	 */
	static std::string GetCwd ();
};





#endif /* HIDDEN_MARKOV_ENTRY_H_ */
