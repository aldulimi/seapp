/**
 * @file	Send.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 *
 * @brief	The Send class is used to send a packet to the next layer in the tx/rx flow.
 *
 * @detail	The Send class is used to:
 *			 - send (with a specified delay) a created or cloned packet to the next layer in the tx/rx flow;
 *			 - send (with a specified delay) an intercepted packet to the next layer in the tx/rx flow.
 *			The Send class does not send a packet but sets the parameter 'isToSend' of the packet.
 *			The LocalFilter module actually sends a created or intercepted packet only if its parameter 'isToSend' is setted.
 */


#ifndef SEND_H
#define SEND_H


#include "ActionBase.h"


class Send : public ActionBase {

	private:
		// send delay
		double delay;

	public:
		/**
		 * @brief Constructor.
		 */
		Send(const double delay);
		
		/**
		 * @brief Destructor.
		 */
		virtual ~Send();

		/**
		 * @brief Returns the delay.
		 */
		 double getSendDelay() const;
		
		/**
		 * @brief	Executes the send action.
		 *
		 * @param	packetToSend, it is the pointer of the (created or intercepted) packet to send to the next layer in the xt/rx flow.
		 *
		 * @detail 	The execute method sets the parameter 'isToSend'. All the created or intercepted packets have got the parameter 
		 *			'isToSend' (it is appended during the creation or the interception process).
		 */
		void execute(cMessage* packetToSend) const;
		
};

#endif
