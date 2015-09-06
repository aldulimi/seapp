/**
 * @file	ConditionalAttack.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 *
 * @brief	Conditional class represents a conditional attack, which is carried out by LocalFilter sub-modules.
 */
 

#ifndef CONDITIONALATTACK_H
#define CONDITIONALATTACK_H


#include "AttackBase.h"
#include "PacketFilter.h"


using namespace std;


class ConditionalAttack : public AttackBase {

	private:
        PacketFilter* packetFilter;
		
        // minimumInvolvedLayer is the minimum ISO/OSI layer involved in the conditional attack 
		int minimumInvolvedLayer;
		
	public:
		ConditionalAttack();
		virtual ~ConditionalAttack();
		
		/** 
		 * @brief 	Add an action to the conditional attack.
		 */
		virtual void addAction(ActionBase* action);

		/** 
		 * @brief 	Set the packetFilter attribute.
		 * @param	monolithicPacketFilter, is the monolithic packet filter string provided by the parser.
		 */
		void setPacketFilter(string monolithicPacketFilter);

		/**	
		 * @brief	Check if the current packet matches the packet filter. 
		 * @param	packet, is the current packet to compare with the packetFilter.
		 */
		bool isMatchingPacketFilter(cPacket* packet) const;

		/**
		 * @brief	Execute the conditional attack.
		 */
		void execute(cMessage** packet, vector<cMessage*> &generatedPackets, vector<double> &delays, double &delay);
	
};

#endif
