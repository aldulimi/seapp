/**
 * @file	Retrieve.cc
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 */


#include "Retrieve.h"
#include "seapputils.h"


Retrieve::Retrieve (const string layerAndField, const string variableName) : ActionBase(action_t::RETRIEVE) {

	// the pattern of fields is "layer.field"
	vector<string> tokens;
	tokenize(tokens, layerAndField, '.');
	involvedLayer = layertoi(tokens[0]);
	this->fieldName = tokens[1];
	this->variableName = variableName;
	
}


Retrieve::~Retrieve() {
  
}


string Retrieve::getFieldName () const {

	return fieldName;

}
		

string Retrieve::getVariableName () const {

	return variableName;

}


Variable* Retrieve::execute (cMessage* msg) const {

	// to retrieve the right field it is used the cClassDescriptor (see the OMNeT++ manual)  
	cClassDescriptor* descriptor; 
	int fieldIndex;
	string value;
	
	cMessage* substituteMsg = nullptr;
	cMessage* encapsulatedMsg = nullptr;

	// work on a clone of the original packet
	substituteMsg = (cMessage*) hardCopy((cPacket*)msg);
	encapsulatedMsg = substituteMsg;
	
	int packetLayer = getPacketLayer((cPacket*) encapsulatedMsg);

	// retrieve the encapsulated packet belonging to the right layer
	while (packetLayer < involvedLayer) {
	
		encapsulatedMsg = (cMessage*) ((cPacket*) encapsulatedMsg)->getEncapsulatedPacket();
		
		if(encapsulatedMsg == nullptr){
			opp_error("Retrieve::Execute() can't reach the right layer, check your packet filter");
		}
		
		packetLayer = getPacketLayer((cPacket*) encapsulatedMsg);
	}
	
	descriptor = cClassDescriptor::getDescriptorFor(encapsulatedMsg);
	fieldIndex = descriptor->findField(encapsulatedMsg, fieldName.c_str());
	
	// fieldName does not exist
	if (fieldIndex == -1) {
		opp_error(("Retrieve::Execute() can't find " + fieldName + ", the field doesn't exist").c_str());
	}
	
	// retrieve the value as a string
	value = descriptor->getFieldAsString(encapsulatedMsg, fieldIndex, 0);

	return new Variable(value, get_variable_format(value));

}
		



