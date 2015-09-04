/**
 * @file	SEAPPExpression.h
 * @author	Francesco Racciatti <racciatti.francesco@gmail.com>
 * @version	1.0
 * @date	2015 jun 22
 *
 * @brief	The class SEAPPExpression it is used to solve (SEA++) expression.
 *
 * @detail	The class SEAPPExpression it is used to solve (SEA++) expression. A SEA++ expression is formed by a set of item.
 *			The solving engine uses the RPN.
 * 
 */


#ifndef SEAPPEXPRESSION_H
#define SEAPPEXPRESSION_H


#include "ActionBase.h"
#include "Variable.h"

#include <vector>
#include <stack>
#include <map>


class SEAPPExpression : public ActionBase {

	private:
		vector<string> expressionItems;
		
	private:
		// recognize if an item is an assignment operator
		bool isAssignmentOperator(const string op);

	public:
		/**
		 * @brief	Constructor.
		 */
		SEAPPExpression(const vector<string> expressionItems);
	
		/**
		 * @brief	Destructor.
		 */
		virtual ~SEAPPExpression();
	
		/**
		 * @brief	Execute expression action.
		 *
		 * @param	variableTable, it is a pointer to the variable table which contains the variables.
		 *			variableTable is a map. The first element is the name of the variable, the second element is the pointer to the variable (i.e a Variable object).
		 * @poram	variableStack, it is a pointer to a stack<Variable> that is used to solve the expressions.
		 *
		 * @detail	The execution of an expression relies on the variable table and variable stack, provided by the calling object.
		 *  		The former contains variables considered by the expression, while the latter is used to actually execute the expression.
   		 *			When the expression is solved, the variable stored in the variable table is updated with the result of the expression.
   		 */
		 void execute(map<string, Variable*> *variableTable, stack<Variable> *variableStack);

};

#endif
