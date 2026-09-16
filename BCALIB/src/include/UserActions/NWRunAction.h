/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWRUNACTION_H
#define NWRUNACTION_H

#include "G4UserRunAction.hh"


class NWRunAction : public  G4UserRunAction{
public:
	/*Default constructor*/
	NWRunAction();

	/*Deconstrouctor*/
	~NWRunAction();

public:
	/*override*/
	virtual void BeginOfRunAction(const G4Run* aRun);
	virtual void EndOfRunAction(const G4Run* aRun);
};

#endif
