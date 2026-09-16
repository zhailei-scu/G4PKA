/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWPrimaryGeneratorAction_H
#define NWPrimaryGeneratorAction_H

#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"

class NWPrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction {
public:
	/*Default constructor*/
	NWPrimaryGeneratorAction();

	/*Destructor*/
	~NWPrimaryGeneratorAction();


	/*Copy constructor*/
	NWPrimaryGeneratorAction(const NWPrimaryGeneratorAction &r);

	/*reload the operation = */
	NWPrimaryGeneratorAction operator = (const NWPrimaryGeneratorAction &r);
public:
	/*override*/
	virtual void GeneratePrimaries(G4Event* anEvent);

private:
	G4ParticleGun* particleGun;

	G4ParticleDefinition *particleDef;
};


#endif