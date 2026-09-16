/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWSTEPPINGACTION_INLETTOLASTEST_H
#define NWSTEPPINGACTION_INLETTOLASTEST_H


#include "G4UserSteppingAction.hh"
#include <string>

using namespace std;

class NWSteppingAction_InletToLastEst : public G4UserSteppingAction {

public:
	/*Default constructor*/
	NWSteppingAction_InletToLastEst();


	/*Destructor*/
	~NWSteppingAction_InletToLastEst();

	/*Copy constructor*/
	NWSteppingAction_InletToLastEst(const NWSteppingAction_InletToLastEst& r);

	/*reload the operator =*/
	NWSteppingAction_InletToLastEst operator = (const NWSteppingAction_InletToLastEst &r);

public:
	/*override*/
	void UserSteppingAction(const G4Step*);

};




#endif