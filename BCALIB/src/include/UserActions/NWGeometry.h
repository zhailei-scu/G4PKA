/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWGEOMETRY_H
#define NWGEOMETRY_H

#include "G4VUserDetectorConstruction.hh"

class NWGeometry : public G4VUserDetectorConstruction {
public:
	/*default constructor*/
	NWGeometry();

	/*Destroctor*/
	~NWGeometry();

	/*overload the pure virtual function in parent class*/
	G4VPhysicalVolume* Construct();


};

#endif
