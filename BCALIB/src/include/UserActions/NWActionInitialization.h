/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWACTIONINITIALIZATION_H
#define NWACTIONINITIALIZATION_H


#include "G4VUserActionInitialization.hh"

class NWActionInitialization : public G4VUserActionInitialization{
public:
	/*Default constructor*/
	NWActionInitialization();

	/*Deconstructor*/
	~NWActionInitialization();


public:
	/*override*/
	virtual void Build() const;
};



#endif
