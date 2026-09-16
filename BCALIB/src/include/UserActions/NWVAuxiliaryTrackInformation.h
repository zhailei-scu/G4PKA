/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWVAUXILIARYTRACKINFORMATION_H
#define NWVAUXILIARYTRACKINFORMATION_H

#include "G4VAuxiliaryTrackInformation.hh"


class NWVAuxiliaryTrackInformation :public G4VAuxiliaryTrackInformation {
public:
	NWVAuxiliaryTrackInformation();

	~NWVAuxiliaryTrackInformation();

	void CleanUp();

	void Print() const;

private:
	int CreatorTrackID;
	int CreatorStepID;

public:
	inline void SetCreatorTrackID(int theCreatorTrackID) {
		this->CreatorTrackID = theCreatorTrackID;
	}

	inline int GetCreatorTrackID() const{
		return this->CreatorTrackID;
	}


	inline void SetCreatorStepID(int theCreatorStepID) {
		this->CreatorStepID = theCreatorStepID;
	}

	inline int GetCreatorStepID() const {
		return this->CreatorStepID;
	}
};


#endif
