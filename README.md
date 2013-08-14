# MPTCP protocol implementation on ns-3 (ns-3.13) #

## Introduction ##

In this work, starting from the work carried out by Chihani et al. [1] (for further information please take a look at [2]). It is worth mentioning that this original work was implemented on the sixth version of the simulator; however, we have opted for re-write it on a newer version (ns-3.13), but respecting the legacy operation performed in the original version. The protocol implementation satisfies the definitions imposed by some IETF's RFCs (Request For Comments) that shape the protocol itself (i.e. RFC 6824, 6182 and 6356).

Furthermore, we have tried to cleanse the coding style, aiming to fulfill the requirements imposed by the ns3 maintainers (by the way, we need deeper work to have the code ready for a valid review).

## Main changes ##

New modules added (brief description of each one):

  - **Bear** (Bursty Error model based on an Auto-Regressive filter) [3] --> This first model estimates the received SNR (Signal to Noise Ratio) from the results obtained through a thorough experimental campaign over a typical indoor office environment. By means of this collected data, we have tailored the coefficients of an auto-regressive filter which will shape the slow signal variations observed at a real wireless channel. Besides, a Gaussian contribution will represent the presence of the well-known fast fading variations observed as well over a real environment. 

  - **HMP** (Hidden Markov Process model) [3] --> In this case, the wireless channel behavior (IEEE 802.11b as well) is reflected by means of an Markov chain of N states, which was "trained" from the results achieved over an empirical campaign, thus tailoring the response leveraged by the emulated channel.   

  - **Scenario Creator** --> Thanks to this brand new model, we are now able to easily define the main characteristics of a wireless scenario (it is worth highlighting that all the links will be configured by means of an IEEE 802.11b channel). Though the documentation of this module is not ready yet, we can find some help in the README files which are located within the source code. Besides, this module implement a brand new tracing scheme, which is able to print the most relevant transmission information at several levels (i.e. physical, transport and application).

  - **MPTCP** --> The actual cornerstone of this repository. Following the aforementioned work, we have ported the source code onto a newer and more complete version of the simulator; besides, we could have made use of some of the features we had already developed for this version, such as the scenario creator or the wireless channel models. To find more details about the implementation, please follow [1], [2] and the mentioned RFCs. The maximum number of subflows tested in this repository is 2. On the other hand, we can either configure the different subflows over the same wireless channel (thus inducing a worse performance due to the high number of collisions) or choosing orthogonal ones, thus avoiding the interferences between different path transmissions and boosting the end-to-end performance.

New files (needed for a correct operation):

 - **Applications** --> Taking as the basis the aforementioned implementation on ns-3.6, we have tweaked some of the legacy applications, adapting the requirements of the new socket definition, thus giving rise to a number of new ones (they can be found in the "application" folder). Namely, they are: *mp-tcp-on-off* and *mp-tcp-packet-sink*.

 - **Internet** --> We can find the file "tcp-typedefs" (inside the *internet/model* folder), in which they are defined some of the data types that will be used in the protocol implementation.

[1] [MPTCP implementation over ns-3.6](https://code.google.com/p/mptcp-ns3/ "Google code")

[2] Chihani, B., Collange, D.: *A multipath TCP model for ns-3 simulator*. In Proceeding of WNS3 (2011) - [PDF file](https://www.dropbox.com/s/u48g31rl4k29tkt/A%20Multipath%20TCP%20model%20for%20ns-3%20simulator.pdf "MPTCP on ns-3")

[3] Both HMP and BEAR models are deeper depicted and explained in [here](http://dgomezphd.wordpress.com/2012/03/15/searching-a-realistic-wireless-model-in-network-simulator-environments/ "Dgomez PhD's blog"), including some links to i.e. user manuals, source code and patches.

## Usage and examples ##

  In order to make a straightforward use of this piece of code, we strongly recommend the utilization of the "Scenario Creator" module we have implemented to ease the definition of the scenario. For that purpose, among all the files we can find in the "scratch folder", we will highlight in this document the one named "*mp-4-nodes-scenario*", whose operation is outlined as follows (and the figure below): a source node (S<sub>1</sub>) will establish a MPTCP (or TCP) session with the destination node (D<sub>1</sub>). Since it cannot directly reach the destination, S<sub>1</sub> has to rely on intermediate relay nodes, such as R<sub>1</sub> and R<sub>2</sub>. As we can see, it calls a configuration file, which contains all the information relative to the scenario construction, *mp-4nodes-scenario.conf*. At the same time, this one points another three different files (all of them allocated in *src/scenario-creator/config/*): the first one presents the individual node information (*mp-4-nodes-scenario.conf*), the second one establishes the Frame Error Ratio (FER) of every link between the nodes (*mp-4-nodes-scenario-channel.conf*) and finally (and optionally), if we choose the static routing as the option, we have to manually attach the file which contains those routes (*mp-4-nodes-scenario-static-routing.conf*).

![alt text](http://imageshack.com/a/img706/4017/jene.png "Diamond topology")

  On the other hand, there are different examples (i.e. *mpTopology.cc*, *mpTopologyWifi.cc*) that assess the performance of the protocol without making use of the ConfigureScenario module. In fact, they are the examples used by the original authors in ns-3.6, adapted in this case to work in the new version.


## Performance ##

  Last, but not least, we find insightful illustrating how this MPTCP protocol is (or not) able to enhance the performance achieved by a typical TCP session. We take as example a simple diamond scenario (i.e. scratch/mp-4-nodes-scenario.conf), as detailed above. For this particular simulation, we will induce the first-hop links (i.e. S<sub>1</sub> - R<sub>1</sub> and S<sub>1</sub> - R<sub>2</sub>) to be error-prone. For the sake of simplicity and, despite we have two more realistic wireless channel models (i.e. HMP and BEAR), we will study the behavior of the MPTCP protocol over a simple memoryless channel and compare it to the one achieved by the standard single-flowed TCP. As we can appreciate in the attached figure, the throughput (at application level) is notably higher than the legacy TCP (almost 50%). As expected, when we configure the two MPTCP subconnections through the same channel, the overall performance shows a rather poor output, even lower than TCP.


![alt text](http://imageshack.com/a/img829/6946/mwoq.png "MPTCP vs TCP (Throughput comparison over the diamond topology")

## Dissemination ##

During the development of this work, we have produced some results in the form of a number of publications. At the moment of writing this file they have been already accepted and will be presented in their respective conferences, hence we have opted for sharing them in this document (although the last two ones are in Spanish):

1. *Multipath Algorithms and Strategies to Improve TCP Performance over Wireless Mesh Networks*. To be presented in MONAMI 2013 (Cork, Ireland) next September - [PDF file](https://www.dropbox.com/s/ksg2w2w1y86n4zd/Mutipath%20Algorithms%20and%20Strategies%20to%20Improve%20TCP%20Performance%20over%20Wireless%20Mesh%20Networks.pdf "MONAMI 2013")

2. Mejora del rendimiento de TCP en redes malladas inalámbricas con técnicas multi-camino: MPTCP. Spanish publication. To be presented in JITEL 2013 (Granada, Spain) next October - [PDF file](https://www.dropbox.com/s/if7473ykvp5vzkc/Mejora%20del%20rendimiento%20de%20TCP%20en%20redes%20malladas%20inal%C3%A1mbricas%20con%20t%C3%A9cnicas%20multi-camino%3A%20MPTCP.pdf "JITEL 2013 MPTCP Performance")

3. Algoritmos y técnicas multi-camino para la mejora del rendimiento de TCP sobre redes malladas inalámbricas. Spanish publication. To be presented in JITEL 2013 (Granada, Spain) next October - [PDF file](https://www.dropbox.com/s/wil3h8sfky7obzc/Algoritmos%20y%20t%C3%A9cnicas%20multi-camino%20para%20la%20mejora%20del%20rendimiento%20de%20TCP%20sobre%20redes%20malladas%20inal%C3%A1mbricas.pdf "JITEL 2013 Routing algorithms + MPTCP performance")

## Contact ##

For any question, criticism, doubt or curiosity, do not hesitate and contact us; we would be glad to answer ASAP.

* * *
Pablo Garrido Ortiz (<pablo.garrido@alumnos.unican.es>)  
David Gómez Fernández (<dgomez@tlmat.unican.es>)  
Ramón Agüero Calvo (<ramon@tlmat.unican.es>)   
**[Universidad de Cantabria](www.unican.es "Universidad de Cantabria")**   
2013
* * *
