/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWSTEPPINGACTION_ISO_H
#define NWSTEPPINGACTION_ISO_H

#include "G4UserSteppingAction.hh"
#include <string>

using namespace std;

class NWSteppingAction_Iso : public G4UserSteppingAction {

public:
	/*Default constructor*/
	NWSteppingAction_Iso();


	/*Destructor*/
	~NWSteppingAction_Iso();

	/*Copy constructor*/
	NWSteppingAction_Iso(const NWSteppingAction_Iso& r);

	/*reload the operator =*/
	NWSteppingAction_Iso operator = (const NWSteppingAction_Iso &r);

public:
	/*override*/
	void UserSteppingAction(const G4Step*);
};




#endif