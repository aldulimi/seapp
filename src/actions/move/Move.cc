/**
 * @file	Move.cc
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 */


#include "Move.h"
#include "MobilityBase.h"


Move::Move (cModule* targetNode, Coord targetPosition) : ActionBase (action_t::MOVE) {

	this -> targetPosition = targetPosition;
	this -> targetNode = targetNode;
		
}


Move::~Move() {

}


void Move::execute() const {
	
	int nodeID = targetNode->getId();
	cModule* mobilityGenericSubmodule = targetNode->getSubmodule("mobility");

	// the node hasn't the mobility submodule
	if (mobilityGenericSubmodule == nullptr) {
		
		EV << ("Move::execute() can't find the mobility submodule of the node " + to_string(nodeID)).c_str() << endl;
		
		if(ev.isGUI()) {
			targetNode->getDisplayString().setTagArg("p", 0, (long)targetPosition.x);
			targetNode->getDisplayString().setTagArg("p", 1, (long)targetPosition.y);
			EV << ("Move::execute() has updated only the visual representation of node " + to_string(nodeID)).c_str() << endl;
		}
		else {
			// no active gui
		}
		
	}
	else {	
	
		MobilityBase* mobilitySubmodule = check_and_cast<MobilityBase*> (mobilityGenericSubmodule);
		// move the node to target position, traslate its constraint area and update the visual representation
		mobilitySubmodule->transferToTargetPosition(targetPosition);
		EV << ("Move::execute() has moved the node " + to_string(nodeID)).c_str() << endl;
		
	}
	
}



