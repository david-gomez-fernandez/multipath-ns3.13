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
 * Author:    Ramón Agüero Calvo <ramon@tlmat.unican.es>
 */

#include "configuration-file.h"
#include <vector>
#include <string>
#include <string.h>
#include <fstream>
#include <ns3/node.h>
#include <ns3/node-list.h>
#include "ns3/simulator.h"

using namespace std;
using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("ConfigurationFile");
NS_OBJECT_ENSURE_REGISTERED (ConfigurationFile);

ConfigurationFile::ConfigurationFile()
{
	NS_LOG_FUNCTION_NOARGS();
}

ConfigurationFile::~ConfigurationFile()
{
	NS_LOG_FUNCTION_NOARGS();
}

TypeId ConfigurationFile::GetTypeId(void) {
	static TypeId tid = TypeId ("ns3::ConfigurationFile")
		.SetParent<Object> ()
		.AddConstructor<ConfigurationFile> ()
		       ;
  return tid;
}


int ConfigurationFile::SuppressSpaces(char *line)
{
	NS_LOG_FUNCTION_NOARGS();
	int len;
	int i,j;

	i=0;
	j=0;

	len = strlen(line);
	if(len > 0) {
		while(isspace(line[i]) || line[i] == '\t') {
			i++;
		}
		while(i <= len) {
			line[j++] = line[i++];
		}

		i = strlen(line)-1;
		while(i>0  && (isspace(line[i]) || line[i] == '\t')) {
			line[i--] = '\0';
		}
		len = strlen (line);
	}

	return len;
}

int ConfigurationFile::ReadLine(const char *line, string &Section_t, string &key, vector<string> &values)
{
	NS_LOG_FUNCTION_NOARGS();
	int len;
	int i = 0, j = 0;
	string value;
	string key_;
	int separator;
	int ret;


	Section_t = key = "";
	len = strlen(line);

	if(line[0] == CONF_SECTION_BEGIN && line[len-1] == CONF_SECTION_END) {
		Section_t = line+1;
		Section_t.erase(Section_t.size()-1,1);
		ret = SECTION;
	} else {
		key_ = line;
		separator = key_.find(CONF_KEY_ASSIGN,0);
		//	DBG_INFO("Line (%s), Separator = %d", line, separator);
		if(separator != -1) {       // Pair key_value
			key = key_.substr(0,separator);
			value = key_.substr(separator+1,key_.size()-separator);
			values.push_back(value);
			ret = KEY;
		} else {                // List
			while(i < len) {
				while(!isspace(line[i]) && line[i] != '\t' && i<len) {
					i++;
				}
				value = (line + j);
				if(i < len) {
					value.erase(i-j,value.size()-(i-j));
				}
				if(j == 0) {
					key = value;
				} else {
					values.push_back(value);
				}
				value.clear();
				j=++i;
			}
			//key = values[0];
			//values[0].clear();
			//values.erase(values.begin(), values.begin() + 1);
			ret = LIST;
		}
	}

	return ret;
}

int ConfigurationFile::GetListValues(const char *section, const char *key, vector<string> &value)
{
	NS_LOG_FUNCTION_NOARGS();
	string section_char = section;
	string key_ = key;
	Entries_t *entry;

	if(m_sectionEntries.count(section_char)) {
		entry = m_sectionEntries[section_char];
		if(entry->listEntry.count(key_)) {
			value = entry->listEntry[key_];
		}
		else {
			NS_LOG_ERROR ("Unknown key " << key);
			return -1;
		}
	} else {
		NS_LOG_ERROR ("Unkown Section " << section);
		return -1;
	}

	return 0;
}

int ConfigurationFile::GetKeyValue(const char *section, const char *key, string &value)
{
	NS_LOG_FUNCTION(section << key);
	string section_char = section;
	string key_ = key;
	Entries_t *entry;

	if(m_sectionEntries.count(section_char)) {
		entry = m_sectionEntries[section_char];
		if(entry->keyEntry.count(key_)) {
			value = entry->keyEntry[key_];
		}
		else {
			NS_LOG_ERROR ("Unknown key " << key);
			return -1;
		}
	}
	else {
		NS_LOG_ERROR ("Unkown Section " << section);
		return -1;
	}
	return 0;
}

int ConfigurationFile::LoadConfig(string fileName)
{
	NS_LOG_FUNCTION_NOARGS();
	fstream confFile;
	vector<string> lines;
	vector<string> values;
	char line[MAXLINE];
	unsigned int i,j;
	string sectionName, key;
	Entries_t *sectionEntry = NULL;
	Section_t::iterator iter1;
	KeyEntries_t::iterator iter2;
	ListEntries_t::iterator iter3;

	confFile.open(fileName.c_str(), ios::in);

	if(!confFile) {
		NS_LOG_ERROR ("ConfigurationFile::LoadConfig --> An error happened openning the configuration file");
		return(-1);
	}

	while(confFile.getline(line, MAXLINE)) {
		if(SuppressSpaces(line) > 0 && line[0] != CONF_COMMENT) {
			lines.push_back(line);
		}
	}
	for(i=0;i<lines.size();i++) {
		switch(ReadLine((char *)lines[i].c_str(),sectionName, key, values)) {
		case SECTION:
			sectionEntry = new Entries_t;
			m_sectionEntries[sectionName] = sectionEntry;
			values.clear();
			break;
		case KEY:
			sectionEntry->keyEntry[key] = values[0];
			values.clear();
			break;
		case LIST:
			sectionEntry->listEntry[key] = values;
			values.clear();
			break;
		}
	}

	for(iter1 = m_sectionEntries.begin() ; iter1 != m_sectionEntries.end() ; ++iter1) {
		NS_LOG_DEBUG ("Section " << iter1->first);
		for(iter2 = iter1->second->keyEntry.begin() ; iter2 != iter1->second->keyEntry.end(); ++iter2) {
			NS_LOG_DEBUG ("Key " << iter2->first << " Value " << iter2->second );
		}
		for(iter3 = iter1->second->listEntry.begin() ; iter3 != iter1->second->listEntry.end() ; ++iter3) {
			NS_LOG_DEBUG ("List entry - key = " << iter3->first);
			for(j=0;j<(iter3->second).size() ; j++) {
				NS_LOG_DEBUG ("Element (" << j << ") = " << (iter3->second)[j]);
			}
		}

	}
	lines.clear();
	confFile.clear();
	return 0;
}


void ConfigurationFile::FlushConfig(void)
{
	NS_LOG_FUNCTION_NOARGS();
	Section_t::iterator iter1;
	ListEntries_t::iterator iter3;
	int i;

	for(iter1 = m_sectionEntries.begin() ; iter1 != m_sectionEntries.end() ; ++iter1) {
		NS_LOG_DEBUG ("Section " << iter1->first);
		//((iter1->second)->keyEntry)->first.clear();
		//((iter1->second)->keyEntry)->second.clear();
		(iter1->second)->keyEntry.clear();
		for(iter3 = iter1->second->listEntry.begin() ; iter3 != iter1->second->listEntry.end() ; ++iter3) {
			for(i = 0 ; i < (signed) (iter3->second).size() ; i++) {
				(iter3->second)[i].clear();
			}
			(iter3->second).clear();
		}

		(iter1->second)->listEntry.clear();
		delete(iter1->second);
		//(iter1->first).clear();
	}
	m_sectionEntries.clear();
}

std::string ConfigurationFile::SetConfigFileName (std::string path, std::string fileName)
{
	NS_LOG_FUNCTION_NOARGS();
	//File handle variables
	char cwdBuf [FILENAME_MAX];
	return std::string (getcwd (cwdBuf, FILENAME_MAX)) + path + fileName + ".conf";

}


