/**
 * @file	AttackEntry.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 *
 * @brief	AttackEntry class represents an attack entry object. 
 *          It contains the actual attack object and its occurrence time.
 */


#ifndef ATTACKENTRY_H
#define ATTACKENTRY_H

#include <iostream>
#include <omnetpp.h>

#include "AttackBase.h"


using namespace std;


class AttackEntry{

    private:
        // (first) occurrence time of the (phisical, conditional or unconditional) attack
        SimTime occurrenceTime;
        // pointer-to attack
        AttackBase* attack;

    public:
    
        /**
         *  @brief  Constructor
         *  @param  attack is the pointer-to the attack object (physical, conditional or unconditional)
         *  @param  occurrenceTime is the start time of the attack
         * */
        AttackEntry(AttackBase* attack, SimTime occurrenceTime);
		
        virtual ~AttackEntry();

        /**
         * @brief   Get the occurrence time of the attack
         */
        SimTime getOccurrenceTime() const;
        
        /** 
         * @brief   Get the pointer-to the attack
         */
        AttackBase* getAttack() const;

};

#endif
