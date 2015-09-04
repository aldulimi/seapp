/**
 * @file	seapputils.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 *
 * @brief	This file provides utility functions used by SEA++ modules.
 */
 
#ifndef SEAPPUTILS_H
#define SEAPPUTILS_H


#include <iostream>
#include <vector>
#include <string>
#include <omnetpp.h>


using namespace std;

/**
 * @brief	Tokenizes a string
 */
void tokenize(vector<string>& tokens, const string str, const char delim);
vector<string> tokenize(const string stringToTokenize, const char delimiter);


/**
 * @brief 	Retrieves the deepest encapsulated packet
 */
cPacket* getDeepestEncapsulatedPacket(cPacket* packet);


/**
 * @brief	Returns the layer of a packet
 */ 
int getPacketLayer(cPacket* packet);


/**
 * @brief	Converts the name of the layer to int
 *
 * @detail	APP = 5
 *			TRA = 4
 *			NET = 3
 *			MAC = 2
 */
int layertoi(const string layer);


/**
 * @brief	Sets a parameter recursively in all the packets incapsulated into the outer one
 */
void setParameterRecursively (cMessage* msg, const string parameterName, const bool parameterValue);


/*
 * @brief	Makes an hard copy of the packet packetToCopy. 
 *
 * @detail	Makes an hard copy of the packetToCopy by creating a perfect copy of the (outer) packet and of all its encapsulated packets.
 *
 * @param 	packetToCopy it's the packet to be copied
 * @return	the pointer to the (new) copied packet, or nullptr if problems occur
 */
cPacket* hardCopy(cPacket* packetToCopy);


/**
 * @brief	Compares two elements by means of a specified operator.
 * 			The compared elements must support such operators.
 *
 *  @param	field1, it is the first parameter
 *  @param	field2, it is the second parameter
 *  @param 	oper, it is the comparison operator
 */
template<class T>
bool evaluate( T f1, T f2, const string comp_operator) {

	if (comp_operator.compare("==") && comp_operator.compare("!=") && comp_operator.compare(">=") && comp_operator.compare("<=") && comp_operator.compare(">") && comp_operator.compare("<")) {
		EV << "Operator not supported" <<endl;
		return false;
	}

	if (comp_operator == "==") {
		return (f1 == f2);
	}

	if (comp_operator == "!=") {
		return (f1 != f2);
	}

	if (comp_operator == ">") {
		return (f1 > f2);
	}
			
	if (comp_operator == "<") {
		return (f1 < f2);
	}
		
	if (comp_operator == ">=" || comp_operator == "=>") {
		return (f1 >= f2);
	}

	if (comp_operator == "<=" || comp_operator == "=<") {
		return (f1 <= f2);
	}

}

/**
 * @brief	Evaluate arithmetic expressions between two elements by means of a specified operator.
 * 			The compared elements must support such operators.
 *
 *  @param	field1, it is the first parameter
 *  @param	field2, it is the second parameter
 *  @param 	oper, it is the comparison operator
 */

template<class T>
float evaluateArithmetic(T f1, T f2, const string comp_operator) {

	if (comp_operator.compare("+") && comp_operator.compare("-") && comp_operator.compare("*") && comp_operator.compare("/") && comp_operator.compare("%")) {
		EV << "Operator not supported" <<endl;
		return false;
	}

	if (comp_operator == "+") {
		return (f1 + f2);
	}

	if (comp_operator == "-") {
		return (f1 - f2);
	}
			
	if (comp_operator == "*") {
		return (f1 * f2);
	}
    
    if (comp_operator == "%") {
		return ((int)f1 % (int)f2);
	}
    
}


#endif
