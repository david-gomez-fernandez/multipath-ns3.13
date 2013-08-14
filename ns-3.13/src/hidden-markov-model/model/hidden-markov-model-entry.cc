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

#include "hidden-markov-model-entry.h"

using namespace ns3;
using namespace std;

NS_LOG_COMPONENT_DEFINE("HiddenMarkovModelEntry");
NS_OBJECT_ENSURE_REGISTERED (HiddenMarkovModelEntry);

HiddenMarkovModelEntry::HiddenMarkovModelEntry ()
{
	NS_LOG_FUNCTION (this);
	m_fixedTransmissionTime = 1617;
	m_slotTime = 20;
	m_transmissionAttempts = 4;
	m_currentState = 0;
	m_eventStarted = false;
	m_coherenceTime = Seconds (10.0);
}

HiddenMarkovModelEntry::~HiddenMarkovModelEntry ()
{
	NS_LOG_FUNCTION (this);
	if (m_changeStateTimeout.IsRunning())
	{
		m_changeStateTimeout.Cancel();
	}

}

void HiddenMarkovModelEntry::MapFerValue (double fer)
{
	NS_LOG_FUNCTION(this);

	string transitionMatrixFileName, emissionMatrixFileName;

	if (fer < 0.03)			//Load idealchannel
	{
		transitionMatrixFileName = "HMM_4states/Ideal_TR.txt";
		emissionMatrixFileName = "HMM_4states/Ideal_EMIS.txt";
	}
	else if (fer < 0.25)  	//Load good channel Coeffs
	{
		transitionMatrixFileName = "HMM_4states/HMM_12_TR_1.txt";
		emissionMatrixFileName = "HMM_4states/HMM_12_EMIS_1.txt";
	}
	else if (fer < 0.40)  	//Load average channel Coeffs
	{
		transitionMatrixFileName = "HMM_4states/HMM_09_TR_1.txt";
		emissionMatrixFileName = "HMM_4states/HMM_09_EMIS_1.txt";
	}
	else if (fer < 0.70)	//Load Bad Channel Coefficients
	{
		transitionMatrixFileName = "HMM_4states/HMM_05_TR_2.txt";
		emissionMatrixFileName = "HMM_4states/HMM_05_EMIS_2.txt";
	}
	else
	{
		transitionMatrixFileName = "HMM_4states/Corrupt_all_TR.txt";
		emissionMatrixFileName = "HMM_4states/Corrupt_all_EMIS.txt";
	}

	GetCoefficients (transitionMatrixFileName, emissionMatrixFileName);

}


void HiddenMarkovModelEntry::MapDistanceValue (double distance)
{
	NS_LOG_FUNCTION (distance);

	string transitionMatrixFileName, emissionMatrixFileName;

	//IMPORTANT --> This is not optimized at all! We need to accomplish further analysis to tailor the
	// distance/matrices switching points
	if (distance < 12)			//Load idealchannel
	{
		transitionMatrixFileName = "HMM_4states/Ideal_TR.txt";
		emissionMatrixFileName = "HMM_4states/Ideal_EMIS.txt";
	}
	else if (distance < 24)  	//Load good channel Coeffs
	{
		transitionMatrixFileName = "HMM_4states/HMM_12_TR_1.txt";
		emissionMatrixFileName = "HMM_4states/HMM_12_EMIS_1.txt";
	}
	else if (distance < 29)  	//Load average channel Coeffs
	{
		transitionMatrixFileName = "HMM_4states/HMM_09_TR_1.txt";
		emissionMatrixFileName = "HMM_4states/HMM_09_EMIS_1.txt";
	}
	else if (distance < 34)	//Load Bad Channel Coefficients
	{
		transitionMatrixFileName = "HMM_4states/HMM_05_TR_2.txt";
		emissionMatrixFileName = "HMM_4states/HMM_05_EMIS_2.txt";
	}
	else
	{
		transitionMatrixFileName = "HMM_4states/Corrupt_all_TR.txt";
		emissionMatrixFileName = "HMM_4states/Corrupt_all_EMIS.txt";
	}

	GetCoefficients (transitionMatrixFileName, emissionMatrixFileName);

}

bool HiddenMarkovModelEntry::GetCoefficients (string transitionMatrixFileName, string emissionMatrixFileName)
{
	NS_LOG_FUNCTION(transitionMatrixFileName <<  emissionMatrixFileName);

	string transitionMatrixPath;
	string emissionMatrixPath;

	fstream transitionMatrixFile;
	fstream emissionMatrixFile;
	char line[256];

	int  rowNumber,i,j, states = 0;												//Auxiliar counters
	double coefficient;
	vector<double> coefficientsVector;

	//If invoked in a second time), flush the previous maps content
	if (m_transitionMatrix.size())
		m_transitionMatrix.clear();
	if (m_emissionMatrix.size())
		m_emissionMatrix.clear();
	if (m_meanDurationVector.size())
		m_meanDurationVector.clear();

	coefSetIter_t iter_;

	transitionMatrixPath = GetCwd() + "/src/hidden-markov-model/configs/" + transitionMatrixFileName;
	emissionMatrixPath = GetCwd() + "/src/hidden-markov-model/configs/" + emissionMatrixFileName;

	transitionMatrixFile.open((const char *) transitionMatrixPath.c_str(), ios::in);
	emissionMatrixFile.open((const char *) emissionMatrixPath.c_str(), ios::in);

	rowNumber = 0;

	NS_ASSERT (transitionMatrixFile);
	while (transitionMatrixFile.getline(line, 256)) {
		if (rowNumber == 0) { 											//First item in file--> Number of states in the Hidden Markov Chain
			states = atoi (line);
		} else { 														//Rest of values are the coefficient of the channel model
			j = 0;
			for (i = 0; i < states; i++) {
				//First value at position '0'
				if (i == 0) {
					coefficient = atof (line);
					coefficientsVector.push_back (coefficient);
					j++;
				} else {
					while (line[j] != ' ' && line[j] != '\t') { 		//Look for "white" spaces between Coefficients
						j++;
					}
					coefficient = atof (line + j);
					j++;
					coefficientsVector.push_back(coefficient);
				}
			}
			m_transitionMatrix.insert(pair<int, vector <double> > (rowNumber - 1, coefficientsVector));   //rowNumber shifted 1 position
			coefficientsVector.clear();

			//As seen in the analytical studio, the probability to hold on the same state is calculated as follows:
			//N_i = 1 / (1 - a_ii)
			m_meanDurationVector.push_back (1 / (1 - (m_transitionMatrix [rowNumber - 1][rowNumber -1 ])));
		}
		rowNumber++;
	}


	//Reset the rowNumber counter
	rowNumber = 0;

	NS_ASSERT (emissionMatrixFile);
	while (emissionMatrixFile.getline(line, 256)) {
		j = 0;
		for (i = 0; i < 2; i++) {			//Two will always be the number of hidden states
			//First value at position '0'
			if (i == 0) {
				coefficient = atof(line);
				coefficientsVector.push_back(coefficient);
				j++;
			} else {
				while (line[j] != ' ' && line[j] != '\t') { 		//Look for "white" spaces between Coefficients
					j++;
				}
				coefficient = atof(line + j);
				j++;
				coefficientsVector.push_back(coefficient);
			}
		}
		m_emissionMatrix.insert(pair<int, vector <double> > ((int) rowNumber, coefficientsVector));

		//Average time sojourn per state (only when the dynamic time mode is enabled; otherwise, this value will be the same (2000
		//microseconds) for each state of the chain.  --> By default, it will be the first option; otherwise, we should change the
		//condition here in the code, manually
		if (true)
		{
			double meanTimeDuration = 0;
			double temp = 0;
			for (i= 0; i < m_transmissionAttempts; i ++)
			{
				temp += coefficientsVector[1] * pow(coefficientsVector[0], i) * CalcAverageTransmissionTime(i);
			}
			meanTimeDuration = pow (coefficientsVector[0], 4) * CalcAverageTransmissionTime(3) + temp;
			m_averageInterFrameTime.push_back(meanTimeDuration);
		}
		//In this case, we will fix a constant interframe time for every state; that is to say, we will add the average CW value to the
		//deterministic part of the expression
		else
		{
			double meanTimeDuration = 0;
			meanTimeDuration = m_fixedTransmissionTime + ((32 - 1) / 2) * m_slotTime;
			m_averageInterFrameTime.push_back(meanTimeDuration);
		}
		coefficientsVector.clear();
		rowNumber ++;
	}

	transitionMatrixFile.close();
	emissionMatrixFile.close();

	return true;
}


double HiddenMarkovModelEntry::CalcAverageTransmissionTime (u_int8_t retx)
{
//	NS_LOG_FUNCTION(this);
	u_int8_t i;
	double transmissionTime = 0.0;
	double temp = 0.0;

	//Check if the number of retransmissions if <= Maximum transmission attempts
	if (retx >= m_transmissionAttempts)
		NS_LOG_ERROR("HiddenMarkovErrorModel::CalcAverageTransmissionTime --> Number of retx > Maximum number of transmission attempts");

	for (i = 0; i <= retx; i++)
	{
		temp += pow(2,i);
	}

	transmissionTime = ((retx + 1) * m_fixedTransmissionTime + (pow(2,4)*temp - ((retx + 1) / 2)) * m_slotTime) / (retx + 1);
//	NS_LOG_DEBUG ("Average transmission time ( " << (int) retx << " retx) = " << transmissionTime << " microseconds");
	return transmissionTime;

}

void HiddenMarkovModelEntry::ChangeState ()
{
	NS_LOG_FUNCTION( this << "State" << (int) m_currentState << "Time" << Simulator::Now().GetSeconds());
	u_int8_t i, maxState = 0;
	double transitionProbability, max, randomSample;
	max = -1;
	UniformVariable ranvar (0.0, 1.0);


	for (i = 0; (int) i < (m_transitionMatrix [m_currentState]).size(); i++)
	{
		randomSample = ranvar.GetValue();
		transitionProbability = (m_transitionMatrix [m_currentState])[i]	* randomSample;
		//Different possibilities, depending on the type of simulation chosen:
		//EU_TIME: One call to this method brings about necessarily a state change (called after every average state stay duration)
		//Otherwise: As called at each frame reception, it may hold the same state
		if (m_mode == HMM_TIME_BASED_SIMULATION)  		//&& (transitionProbability > max) && (i != m_currentState))   //Time-based --> MUST change state
		{
			if ((transitionProbability > max) && (i != m_currentState))
			{
				max = transitionProbability;
				maxState = i;
			}
		}
		else
		{
//			NS_LOG_UNCOND ("State " << (int) i << " Value " << (m_transitionMatrix[m_currentState])[i] * randomSample);

			if (transitionProbability > max)
			{
				max = transitionProbability;
				maxState = i;
			}
		}
	}


	//Did actually make a state change??
	if (m_currentState != maxState)
	{
		NS_LOG_DEBUG( "State change: (" << (int) m_currentState << ") --> (" << (int) maxState << ") (" << this << ")" );
		m_currentState = maxState;
	}
}

void HiddenMarkovModelEntry::InitializeTimer ()
{
	NS_LOG_FUNCTION(this);
	double nextTimeout;
	double nextTimeoutMeanValue;

	//Set the next timeout
//	nextTimeoutMeanValue = m_meanDurationVector[m_currentState] * m_fixedTransmissionTime;
	nextTimeoutMeanValue = m_meanDurationVector[m_currentState] * m_averageInterFrameTime[m_currentState];
	ExponentialVariable expVar(nextTimeoutMeanValue);
	nextTimeout = expVar.GetValue();

	NS_LOG_INFO("(" << Simulator::Now().GetSeconds() << ") - Next timeout " << nextTimeoutMeanValue   \
				<< " --> " << nextTimeout << " (" << m_currentState << ")");
	m_changeStateTimeout =  Simulator::Schedule(MicroSeconds(nextTimeout), &HiddenMarkovModelEntry::TimerHandler, this);
}

void HiddenMarkovModelEntry::TimerHandler ()
{
	NS_LOG_FUNCTION(this << Simulator::Now().GetSeconds());
	double nextTimeout;
	double nextTimeoutMeanValue;

	//Once the timeout is reached, check if the states changes
	//Set the next timeout
//	nextTimeoutMeanValue = m_meanDurationVector[m_currentState] * m_fixedTransmissionTime;
	nextTimeoutMeanValue = m_meanDurationVector[m_currentState] * m_averageInterFrameTime[m_currentState];
	ExponentialVariable expVar(nextTimeoutMeanValue);
	nextTimeout = expVar.GetValue();

	ChangeState();
	NS_LOG_INFO("(" << Simulator::Now().GetSeconds() << ") - Next timeout " << nextTimeoutMeanValue   \
			<< " --> " << nextTimeout << " (" << (int) m_currentState << ")");
	m_changeStateTimeout = Simulator::Schedule(MicroSeconds(nextTimeout),&HiddenMarkovModelEntry::TimerHandler, this);
}

void HiddenMarkovModelEntry::CoherenceTimeoutHandler ()
{
	NS_LOG_FUNCTION (this << Simulator::Now().GetSeconds());
	UniformVariable ranvar (0.0, (double) m_transitionMatrix.size() - 1);

	if (m_changeStateTimeout.IsRunning ())
	{
		m_changeStateTimeout.Cancel ();
		m_eventStarted = false;

		//Randomly choose the new current state
		m_currentState = ranvar.GetInteger(0, m_transitionMatrix.size() - 1);
	}

	if (m_coherenceTimeout.IsRunning ())
	{
		m_coherenceTimeout.Cancel ();
	}

}


void HiddenMarkovModelEntry::PrintMatrices ()
{
	NS_LOG_FUNCTION_NOARGS();
	coefSetIter_t iter_;
	u_int8_t i, j;

	//Print the m_transitionMatrix map
	printf("---Transition Matrix---\n");
	for (iter_ = m_transitionMatrix.begin(); iter_ != m_transitionMatrix.end(); iter_ ++ )
	{
		for (i = 0; i < (int) (iter_->second).size(); i++)
		{
			printf("%f  ", (iter_->second)[i]);
		}
		printf("\n");
	}

	//Print the m_emissionMatrix map
	printf("---Emission Matrix---\n");
	for (iter_ = m_emissionMatrix.begin(); iter_ != m_emissionMatrix.end();
			iter_++) {
		for (i = 0; i < (int) (iter_->second).size(); i++) {
			printf("%f  ", (iter_->second)[i]);
		}
		printf("\n");
	}

	//Print the m_meanDurationVector
	printf("---Mean Duration within each state (in frames)---\n");
	for (j = 0; j < (int) m_meanDurationVector.size(); j++ )
	{
		printf("%f\n", m_meanDurationVector[j]);
	}

	printf ("---Average inter-frame duration within each state---\n");
	for (j = 0; j < (int) m_averageInterFrameTime.size(); j++ )
	{
		printf ("State %d --> Average Inter-frame gap = %.4f microseconds\n", j, m_averageInterFrameTime[j]);
	}

}

u_int8_t HiddenMarkovModelEntry::GetCurrentState ()
{
	return m_currentState;
}

double HiddenMarkovModelEntry::GetDecisionValue (u_int8_t currentState)
{
	return m_emissionMatrix.at(currentState).at(0);
}



std::string HiddenMarkovModelEntry::GetCwd()
{
	char buf[FILENAME_MAX];
	char* succ = getcwd(buf, FILENAME_MAX);
	if (succ)
		return std::string(succ);
	return ""; 						// raise a flag, throw an exception, ...
}
