/**
 * @file	Destroy.cc
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 */


#include "Destroy.h"
#include "LocalFilter.h"


Destroy::Destroy (cModule* targetNode) : ActionBase(action_t::DESTROY) {
	
	this->targetNode = targetNode;
	
}


Destroy::~Destroy () {

}


void Destroy::execute () const {

	int nodeID = targetNode->getId();
	LocalFilter* localFilter = check_and_cast<LocalFilter*> (targetNode->getSubmodule("localFilter"));
	localFilter->isDestroyed = true;
	EV << ("Destroy::execute() has destroyed the node " + to_string(nodeID)).c_str() << endl;
	
}
