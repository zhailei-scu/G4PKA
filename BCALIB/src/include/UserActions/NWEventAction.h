/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWEVENTACTION_H
#define NWEVENTACTION_H

#include "G4UserEventAction.hh"


class NWEventAction : public G4UserEventAction {
public:
	/*Default constructor*/
	NWEventAction();

	/*Destructor*/
	~NWEventAction();

public:
	/*override*/
	virtual void BeginOfEventAction(const G4Event* anEvent);
	virtual void EndOfEventAction(const G4Event* anEvent);
};


#endif