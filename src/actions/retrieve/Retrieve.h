/**
 * @file	Retrieve.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 *
 * @brief	The Retrieve class is used to retrieve the content of a field of a target packet.
 *
 * @detail	The Retrieve class is used to retrieve the content of a field of a target packet and to store it into a Variable object.
 */


#ifndef RETRIEVE_H
#define RETRIEVE_H


#include "ActionBase.h"
#include "Variable.h"


class Retrieve : public ActionBase {

	private:
		// name of the target field
		string fieldName;
		// name of the variable used to store the content of the field 
		string variableName;
			
	public:
		/**
		 * @brief	Constructor.
		 *
		 * @param	layerAndField, it indicates the layer to which the field belongs and the name of the field to retrieve.
		 *			The pattern of layerAndField is 'layer.field'.
		 * @param	variableName, it is the name of the variable used to store the content of the field.
		 *
		 */
		Retrieve(const string layerAndField, const string variableName);
		
		/**
		 * @brief	Destructor.
		 */
		virtual ~Retrieve();
	
		/**
		 * @brief	Returns the fieldName.
		 */
		string getFieldName() const;
		
		/**
		 * @brief	Returns the variableName.
		 */
		string getVariableName() const;
		
		/**
		 * @brief	Executes the retrieve action and returns a pointer to the variable that stores the content of the field.
		 *
		 * @param	msg, it is the target message on which excecute the retrieve action.
		 */
		Variable* execute(cMessage* msg) const;
		
};

#endif
