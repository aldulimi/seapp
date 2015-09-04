/**
 * @file	Destroy.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 *
 * @brief	Destroy class extends ActionBase. Destroy class makes possible the destruction of a node.
 *
 * @details	The Destroy class does not actually destroy nodes and does not remove nodes from the simulation field. 
 *			It only simulates the effects of the destruction of a node on the network by dropping all the messages
 *			(and selfMessages) passing through the target node.
 *			A Destroy object is instantiated by the Parser object (that is instantiated, in turn, by the LocalFilter
 *			module) if the related action (i.e. the Destroy action) is found during the parsing of the ACF. 
 */


#ifndef DESTROY_H
#define DESTROY_H


#include "ActionBase.h"


class Destroy : public ActionBase {

	private:
		// pointer to the node to destroy (i.e. the target node)
		cModule* targetNode;

	public:
	
		/**
		 * @brief Constructor.
		 * @param [in]	targetNode, it is the pointer to the target node.
		 *
		 * @detail	The Constructor of the Destroy class is called by the Parser object 
		 *			(that is instantiated, in turn, by the LocalFilter module). The Parser object passes 
		 *			the pointer of the target node (i.e. a pointer to a cModule object) to the Destroy object.
		 *			In this way, the Destroy object can set the boolean attribute isDestroyed of the LocalFilter
		 *			module owned by the target node.
		 */
		Destroy(cModule* targetNode);
		
		/**
		 * @brief Destructor.
		 */
		virtual ~Destroy();

		/**
		 * @brief Destroys the node.
		 * 
		 * @detail Destroys the node by setting the bool variable pointed by isDestroyed.
		 */
		void execute() const;
};

#endif
