/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWSTEPPINGACTION_INLETESTANDINESTTILLEND_H
#define NWSTEPPINGACTION_INLETESTANDINESTTILLEND_H

#include "G4UserSteppingAction.hh"
#include "NWRunInfoStore.h"

using namespace std;


class NWSteppingAction_InletEstAndInEstTillEnd : public G4UserSteppingAction {

public:
	/*Default constructor*/
	NWSteppingAction_InletEstAndInEstTillEnd();


	/*Destructor*/
	~NWSteppingAction_InletEstAndInEstTillEnd();

	/*Copy constructor*/
	NWSteppingAction_InletEstAndInEstTillEnd(const NWSteppingAction_InletEstAndInEstTillEnd& r);

	/*reload the operator =*/
	NWSteppingAction_InletEstAndInEstTillEnd operator = (const NWSteppingAction_InletEstAndInEstTillEnd &r);

public:
	/*override*/
	void UserSteppingAction(const G4Step*);

private:

	OneEvent theOneEvent;
};




#endif