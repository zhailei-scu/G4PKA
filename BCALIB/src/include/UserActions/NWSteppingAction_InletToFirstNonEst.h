/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWSTEPPINGACTION_INLETTOFIRSTNONEST_H
#define NWSTEPPINGACTION_INLETTOFIRSTNONEST_H

#include "G4UserSteppingAction.hh"
#include "NWRunInfoStore.h"

using namespace std;

class NWSteppingAction_InletToFirstNonEst : public G4UserSteppingAction {

public:
	/*Default constructor*/
	NWSteppingAction_InletToFirstNonEst();


	/*Destructor*/
	~NWSteppingAction_InletToFirstNonEst();

	/*Copy constructor*/
	NWSteppingAction_InletToFirstNonEst(const NWSteppingAction_InletToFirstNonEst& r);

	/*reload the operator =*/
	NWSteppingAction_InletToFirstNonEst operator = (const NWSteppingAction_InletToFirstNonEst &r);

public:
	/*override*/
	void UserSteppingAction(const G4Step*);

private:

	OneEvent theOneEvent;

};




#endif