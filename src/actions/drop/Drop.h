/**
 * @file	Drop.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 *
 * @brief	The class Drop is used to drop packets.
 *
 * @details	The class Drop is used to drop packets. 
  *			In the conditional attacks the matching of the packet filter is a sufficient condition to drop a packet. 
 */


#ifndef DROP_H
#define DROP_H


#include "ActionBase.h"


class Drop : public ActionBase {

	public:
	
		/**
		 * @brief Constructor.
		 */
		Drop();
		
		/**
		 * @brief Destructor.
		 */
		virtual ~Drop();

		/**
		 * @brief Drops (i.e. deletes) the packet
		 */
		void execute(cMessage** packet) const;
};

#endif
