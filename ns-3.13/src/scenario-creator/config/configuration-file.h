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
 * Author:   Ramón Agüero Calvo <ramon@tlmat.unican.es>
 */

#ifndef CONFIGURATION_FILE_H_
#define CONFIGURATION_FILE_H_

#include "ns3/simulator.h"
#include "ns3/core-module.h"
#include "ns3/object.h"
#include "ns3/object-factory.h"
#include "ns3/type-id.h"

#include <string>
#include <map>
#include <vector>
using namespace std;

#define MAXLINE 200

#define CONF_COMMENT '#'
#define CONF_SECTION_BEGIN '['
#define CONF_SECTION_END ']'
#define CONF_KEY_ASSIGN '='

enum {
    SECTION,
    KEY,
    LIST,
};

typedef vector<string> ListEntry_t;
typedef map<string,ListEntry_t> ListEntries_t;
typedef map<string,string> KeyEntries_t;
typedef struct {
    KeyEntries_t keyEntry;
    ListEntries_t listEntry;
} Entries_t;
typedef map<string,Entries_t *> Section_t;

namespace ns3 {

/**
 * Class used to read and handle the configuration file that outlines the main characteristics of the deployed scenario (i.e. topology, links, applications...)
 */
class ConfigurationFile: public Object
{
public:
	/**
	 * Attribute handler
	 */
	static TypeId GetTypeId (void);
	/**
	 * Default constructor
	 */
	ConfigurationFile ();
	/**
	 * Default destructor
	 */
	~ConfigurationFile ();

    int LoadConfig(string fileName);
    int GetListValues(const char *Section_t, const char *key, vector<string> &value);
    int GetKeyValue(const char *Section_t, const char *key, string &value);
    std::string SetConfigFileName (std::string path, std::string fileName);

    void FlushConfig(void);

private:
    int SuppressSpaces(char *line);
    int ReadLine(const char *line, string &Section_t, string &key, vector<string> &values);
    Section_t m_sectionEntries;

};

}   //End ns3 namespace
#endif /* CONFIGURATION_FILE_H_ */
