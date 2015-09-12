/**
 * @file	Disable.cc
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 */


#include "Disable.h"
#include "LocalFilter.h"


Disable::Disable (cModule* targetNode) : ActionBase(action_t::DISABLE) {
	
	this->targetNode = targetNode;
	
}


Disable::~Disable () {

}


void Disable::execute () const {
    
    EV << "[Disable::execute()] invoked" << endl;
    targetNode->callFinish();
    targetNode->deleteModule();
    
}
