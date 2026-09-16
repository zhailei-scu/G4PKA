/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWRUNINFOSTORE_H
#define NWRUNINFOSTORE_H

#include <string>
#include <map>

class OneTrack {
public:
	/*Default constructor*/
	OneTrack();

	/*Destructor*/
	~OneTrack();

	/*Copy Constructor*/
	OneTrack(const OneTrack & r);

	/*reload operation =*/

	OneTrack& operator = (const OneTrack &r);

	void clean();

private:
	int ParentTrackID = -1;
	int CurrentTrackID = -1;

	std::string EndProcessName;
	std::string ParticleName;

public:
	inline void SetParentTrackID(int theParentTrackID) {
		this->ParentTrackID = theParentTrackID;
	}

	inline int GetParentTrackID() {
		return	this->ParentTrackID;
	}


	inline void SetCurrentTrackID(int theCurrentTrackID) {
		this->CurrentTrackID = theCurrentTrackID;
	}

	inline int GetCurrentTrackID() {
		return	this->CurrentTrackID;
	}


	inline void SetEndProcessName(std::string theEndProcessName) {
		this->EndProcessName = theEndProcessName;
	}

	inline std::string GetEndProcessName() {
		return	this->EndProcessName;
	}

	inline void SetParticleName(std::string theParticleName) {
		this->ParticleName = theParticleName;
	}

	inline std::string GetParticleName() {
		return	this->ParticleName;
	}

};


class OneEvent {
public:
	/*Default constructor*/
	OneEvent();

	/*Destructor*/
	~OneEvent();

	/*Copy Constructor*/
	OneEvent(const OneEvent & r);

	/*reload operation =*/

	OneEvent& operator = (const OneEvent &r);


	void clean();

public:

	int EventID;

	std::map<int, OneTrack> Tracks;
};

#endif