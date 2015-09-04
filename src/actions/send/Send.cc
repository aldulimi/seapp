/**
 * @file	Send.cc
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 */


#include "Send.h"
#include "seapputils.h"


Send::Send (const double delay) : ActionBase (action_t::SEND) {

	this->delay = delay;
	involvedLayer = NONE_LAYER;
	
}


Send::~Send() {

}


double Send::getSendDelay() const {

	return delay;

}


void Send::execute (cMessage* packetToSend) const {

	packetToSend->par("isToSend").setBoolValue(true);

}
