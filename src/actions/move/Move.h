/**
 * @file	Move.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 *
 * @brief	Move class makes possible the misplacement of a node.
 *
 * @details	It forces the node to assume the new coordinates.
 */


#ifndef MOVE_H
#define MOVE_H


#include "ActionBase.h"
#include "Coord.h"


class Move : public ActionBase {

	private:
		Coord targetPosition; 
		cModule* targetNode;
		
	public:
	
		/**
		 * @brief Constructor.
		 * 
		 * @param targetNode, it is the pointer to the target node, i.e. the node to move. It may contain the mobility sub-module.
		 * @param targetPosition, it is the new set of coordinates.
		 */
		Move(cModule* targetNode, Coord targetPosition);
		
		/**
		 * @brief Destructor.
		 */
		virtual ~Move();

		/**
		 * @brief Misplaces the node.
		 */
		void execute() const;
		
};

#endif
