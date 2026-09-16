/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWSTEPPINGACTION_MATRIXATOMS_H
#define NWSTEPPINGACTION_MATRIXATOMS_H

#include "G4UserSteppingAction.hh"
#include <string>

using namespace std;

class NWSteppingAction_MatrixAtoms : public G4UserSteppingAction {

public:
	/*Default constructor*/
	NWSteppingAction_MatrixAtoms();


	/*Destructor*/
	~NWSteppingAction_MatrixAtoms();

	/*Copy constructor*/
	NWSteppingAction_MatrixAtoms(const NWSteppingAction_MatrixAtoms& r);

	/*reload the operator =*/
	NWSteppingAction_MatrixAtoms operator = (const NWSteppingAction_MatrixAtoms &r);

public:
	/*override*/
	void UserSteppingAction(const G4Step*);
};




#endif