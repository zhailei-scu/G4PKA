/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWSTACKINGACTION_H
#define NWSTACKINGACTION_H

#include "G4UserStackingAction.hh"

class NWStackingAction : public G4UserStackingAction {
public:
	/*Default constructor*/
	NWStackingAction();

	/*Destructor*/
	~NWStackingAction();

public:

	/*override*/
	virtual void PrepareNewEvent();


};





#endif