/**
 * @file	Change.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 *
 * @brief	The Change class is used to modify:
 * 			- the value contained in a specified field of a packet;
 *			- the value contained in the controlInfo object associated with a packet;
 *	 		- the sending informations appended to a packet.
 *
 * @detail	The Change class is used to modify:
 * 			- the value contained in a specified field of a packet (the pattern is 'layer.field');
 *			- the value contained in the controlInfo object associated with a packet (the pattern is 'controlInfo.field');
 *	 		- the sending informations appended to a packet (the pattern is 'sending.outputGate').
 */


#ifndef CHANGE_H
#define CHANGE_H


#include "ActionBase.h"


class Change : public ActionBase {

	private:
		string targetObjectName;
		string fieldName;
		string value;

	private:
		/**
		 * @brief	Changes the content of a field of a packet.
		 */
		void executeOnPacket(cMessage** packetToChange, string value);
		
		/**
		 * @brief	Changes the content of a field of the controlInfo object that is associated to the packet.
		 */
		void executeOnControlInfo(cMessage** packetToChange, string value);
		
		/**
		 * @brief	Changes the content of the field contained in the sending structure that is associated to the packet.
		 *
		 * @detail	It actually does not change the content of the fields of the sending structure that is associated to the packet.
		 *			It adds the param 'outputGate' to the packet. The LocalFilter module will use this param to perform the changes.
		 */
		void executeOnSendingInfo(cMessage** packetToChange, string value);

	public:
		/**
		 * @brief Constructor
		 */
		Change(const string fieldName, const string value);
		
		/**
		 * @brief Destructor
		 */
		virtual ~Change();

		/**
		 * @brief returns the name of the field
		 */
		 string getFieldName() const;
		
		/**
		 * @brief returns the new value of the field
		 */
		 string getValue() const;

		/**
		 * @brief execute the change action
		 */
		void execute(cMessage** packetToChange, string value);
				
};

#endif
