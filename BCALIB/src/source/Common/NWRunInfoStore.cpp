/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#include "NWRunInfoStore.h"

OneTrack::OneTrack() {
	clean();
}

OneTrack::~OneTrack() {
	clean();
}


void OneTrack::clean() {
	this->CurrentTrackID = -1;
	this->ParentTrackID = -1;

	this->EndProcessName.clear();
	std::string().swap(this->EndProcessName);

	this->ParticleName.clear();
	std::string().swap(this->ParticleName);
}


OneTrack::OneTrack(const OneTrack & r) {
	this->CurrentTrackID = r.CurrentTrackID;
	this->ParentTrackID = r.ParentTrackID;

	this->EndProcessName = r.EndProcessName;
	this->ParticleName = r.ParticleName;

}

/*reload operation =*/
OneTrack& OneTrack::operator = (const OneTrack &r) {
	this->CurrentTrackID = r.CurrentTrackID;
	this->ParentTrackID = r.ParentTrackID;

	this->EndProcessName = r.EndProcessName;
	this->ParticleName = r.ParticleName;

	return *this;
}


OneEvent::OneEvent() {
	clean();
}


OneEvent::~OneEvent() {
	clean();
}


OneEvent::OneEvent(const OneEvent & r) {
	this->EventID = r.EventID;

	std::map<int, OneTrack>().swap(this->Tracks);

	for (std::map<int, OneTrack>::iterator it = this->Tracks.begin(); it != this->Tracks.end(); it++) {

		this->Tracks.insert(std::map<int, OneTrack>::value_type(it->first, it->second));
	}
}


OneEvent& OneEvent::operator = (const OneEvent &r) {
	this->EventID = r.EventID;

	std::map<int, OneTrack>().swap(this->Tracks);

	for (std::map<int, OneTrack>::iterator it = this->Tracks.begin(); it != this->Tracks.end(); it++) {

		this->Tracks.insert(std::map<int, OneTrack>::value_type(it->first, it->second));
	}


	return *this;
}

void OneEvent::clean() {
	this->EventID = -1;

	std::map<int, OneTrack>().swap(this->Tracks);
}