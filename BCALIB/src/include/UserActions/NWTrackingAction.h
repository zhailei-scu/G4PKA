/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWTRACKINGACTION_H
#define NWTRACKINGACTION_H

#include "G4Track.hh"
#include "G4UserTrackingAction.hh"


class NWTrackingAction : public G4UserTrackingAction {
public:
	/*Default constructor*/
	NWTrackingAction();

	/*Destructor*/
	~NWTrackingAction();

public:
	/*override*/

	virtual void PreUserTrackingAction(const G4Track*);
	virtual void PostUserTrackingAction(const G4Track*);
};


#endif