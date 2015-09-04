/**
 * @file	Change.cc
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 */


#include "Change.h"
#include "seapputils.h"
#include "omnetpp.h"


Change::Change(const string fieldName, const string value) : ActionBase(action_t::CHANGE) {

	vector<string> tokens;
	tokenize(tokens, fieldName, '.');

	if ((tokens[0] == "controlInfo") || (tokens[0]=="sending")) {
		this->targetObjectName.assign(tokens[0]);
		involvedLayer = NONE_LAYER;
	}
	else {
		this->targetObjectName.assign("none");
		involvedLayer = layertoi(tokens[0]);
	}

	this->fieldName.assign(tokens[1]);
	this->value.assign(value);	

}


Change::~Change() {
  
}


string Change::getFieldName() const {

	return fieldName;

}


string Change::getValue() const {

	return value;

}


void Change::execute(cMessage** packetToChange, string value) {

	// change the value of the packet's fields
	if (targetObjectName == "none") {
		executeOnPacket(packetToChange, value);
		return;
	}

	// change the value of the controlInfo's fields
	if (targetObjectName == "controlInfo") {
		executeOnControlInfo(packetToChange, value);
		return;
	} 

	// change the value of the sendingInfo's fields
	if (targetObjectName == "sending") {
		executeOnSendingInfo(packetToChange, value);
		return;
	} 
	
}
	
	
void Change::executeOnPacket (cMessage** packetToChange, string value) {

	cClassDescriptor* descriptor; 
	cMessage* substitutePacket = nullptr;
	cMessage* encapsulatedPacket = nullptr;
	int packetLayer = getPacketLayer((cPacket*)(*packetToChange));
	int fieldIndex;

	// work on the clone of the original packet
	substitutePacket = (cMessage*) hardCopy((cPacket*)(*packetToChange));
	encapsulatedPacket = substitutePacket;	
	while (packetLayer < involvedLayer) {
		encapsulatedPacket = ((cPacket*) encapsulatedPacket)->getEncapsulatedPacket();
		if (encapsulatedPacket == nullptr) {
			opp_error("Change::executeOnPacket() can't find the right encapsulated packet, check your packet filter");
		}
		packetLayer = getPacketLayer((cPacket*)encapsulatedPacket);
	}

	descriptor = cClassDescriptor::getDescriptorFor(encapsulatedPacket);
	fieldIndex = descriptor->findField(encapsulatedPacket, fieldName.c_str());
	
	// can't find the specified field
	if(fieldIndex == -1){
		opp_error(("Change::executeOnPacket() can't find the field " + fieldName).c_str());
	}

	// edit the value of the specified field
	descriptor->setFieldAsString(encapsulatedPacket, fieldIndex, 0, value.c_str());

	// replace the original packet with his modified clone	
	delete *packetToChange;
	*packetToChange = substitutePacket;
	
}


void Change::executeOnSendingInfo (cMessage** packetToChange, string value) {

	// add the param 'outputGate' and fill it
	if (fieldName=="outputGate") {
		bool hasParameter = (*packetToChange)->hasPar("outputGate");
		if (hasParameter == false) {
			(*packetToChange)->addPar("outputGate");
		}
		(*packetToChange)->par("outputGate").setStringValue(value.c_str());		
		return;
	}
	
	opp_error("Change::executeOnSendingInfo() can't find the specified field in the sending structure");

}


void Change::executeOnControlInfo (cMessage** packetToChange, string value) {

	cClassDescriptor* descriptor; 
	cObject* controlInfo;
	int fieldIndex;
	
	controlInfo = (*packetToChange)->getControlInfo();
	
	// can't find the specified field
	if (controlInfo == nullptr) {
		opp_error("Change::executeOnControlInfo() can't find the ControlInfo object");
	}
	
	descriptor = cClassDescriptor::getDescriptorFor(controlInfo);
	fieldIndex = descriptor->findField(controlInfo, fieldName.c_str());
	
	// can't find the specified field
	if (fieldIndex == -1) {
		opp_error(("Change::executeOnControlInfo() can't find the field " + fieldName).c_str());
	}

	// edit the value of the specified field
	descriptor->setFieldAsString(controlInfo, fieldIndex, 0, value.c_str());
	
}

