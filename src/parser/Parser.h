/**
 * @file	Parser.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 *
 * @brief	Parser class makes possible the parsing of the xml file that contains the attack description (aka .
 *
 * @details	Parser class relies on the xml++ library. It is used by LocalFilter modules and the GlobalFilter module, 
 *			to initialize the data structures that are used to perform physical, conditional and unconditional attacks.
 */


#ifndef PARSE_H
#define PARSE_H


#include <iostream>
#include <omnetpp.h>
#include <libxml++/libxml++.h>
#include <string>
#include <vector>

#include "INETDefs.h"

#include "seapputils.h"

#include "AttackBase.h"
#include "AttackEntry.h"

using namespace std;

// TODO remove this
// declare LocalFilter class to avoid cyclic dependency
// class LocalFilter;


/** 
 * @brief 	Tag types
 */ 
enum class tag_t {
	ACTION = 0,
	ATTACK,
	FILTER,
	FREQUENCY,
	ITEM,
	NAME,
	NODE,
	NONE,
	NUMBER,	
	PARAMETERS,
	START_TIME,
	STRING,
	TEXT,
	TYPE,
	VALUE,
	VAR
};

// binding between tag types and relative strings
/*
map<tag_t, string> seappTagMap = {
    {tag_t::ACTION, "action"},
    {tag_t::ATTACK,"Attack"},
    {tag_t::FILTER,"filter"},
    {tag_t::FREQUENCY,"frequency"},
    {tag_t::ITEM,"item"},
    {tag_t::NAME,"name"},
    {tag_t::NODE,"node"},
    {tag_t::NONE,"NONE"},
    {tag_t::NUMBER,"NUMBER"},
    {tag_t::PARAMETERS,"parameters"},
    {tag_t::START_TIME,"start_time"},
    {tag_t::STRING,"STRING"},
    {tag_t::TEXT,"text"},
    {tag_t::TYPE,"type"},
    {tag_t::VALUE,"value"},
    {tag_t::VAR,"var"}
};
*/

/**
 * @brief Convert a tag_t to the relative string.
 * @param tag The tag to convert.
 * @return The string that corresponds to the tag.
 */
/*
string to_string (const tag_t tag) {
    
    string convertedTag;
    
    try {
        convertedTag = seappTagMap.at(tag);
    }
    catch (out_of_range oor) {
        opp_error("[to_string(const tag_t)] out_or_range exception raised, key not found in map");
    }
    
    return convertedTag;
    
}*/



/**
 * @brief Convert a string to the relative tag_t, if possible.
 * @param tag The tag to convert.
 * @return The tag_t that corresponds to the string.
 */
/*
tag_t to_tag_t (const string tag) {
    
    try {
        // find key from value
        for (map<tag_t,string>::iterator iter = seappTagMap.begin(); iter != seappTagMap.end(); ++iter) {
            // value found, return key
            if (iter->second == tag) {
                return iter->first;
            }
        }
        // param not valid
        throw invalid_argument("");
    }
    catch (invalid_argument ia) {
        opp_error("[to_tag_t(const string)] invalid_argument exception raised, value not found in map");
    }
    
}
*/

class Parser{

	private:
		// pointer-to the node that has instantiated this object
		cModule* node;

	private:
	
        /**
         * @brief Get the value of a xmlpp node.
         * @param node, const pointer-to the xmlpp node 
         */
        //string getNodeValue(const xmlpp::Node* node) const;
    
		/**
		 * @brief	Initialize an Attack object
		 */
		bool initializeAttack(const xmlpp::Node* nodeLevel2, AttackBase* attack, SimTime& occurrenceTime);
		
	public:
	
		/**
		 * @brief	Constructor 
		 * @param	TODO
		 */
		Parser(cModule* node);
	
		/** @brief	Destructor */
		virtual ~Parser();
	
		/** 
		 * @brief 	Parse the xml configuration file to find tags corresponding to attackType parameter
		 * @param	attakType 
		 *
		 * @details	Convert the attakType parameter to string by using the seapputil function toString() and 
		 *			parses the xml configuration file to search the corresponding tag
		 */
		void parseConfigurationFile(const attack_t attackType, vector<AttackEntry*>& attackEntries);
        
        
};


string get_node_value(const xmlpp::Node* node);

/**
 * @brief
 */
 
string to_string(const tag_t type);
tag_t to_tag_t(const string type);

#endif
