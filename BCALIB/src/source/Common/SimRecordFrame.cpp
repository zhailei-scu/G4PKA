/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#include "SimRecordFrame.h"
#include "stdlib.h"

//The singleton
SimRecordFrame* SimRecordFrame::simRecordFrameInstance = new SimRecordFrame();


SimRecordFrame::SimRecordFrame() {
	this->simRecordFrameInstance = NULL;

	/*
	this->mutex = CreateMutex(NULL, FALSE, NULL);

	ReleaseMutex(this->mutex);

	*/
}


SimRecordFrame::~SimRecordFrame() {

	/*
	WaitForSingleObject(SimRecordFrame::simRecordFrameInstance->mutex,INFINITE);


	ReleaseMutex(this->mutex);
	CloseHandle(this->mutex);
	this->mutex = NULL;

	*/
}


void SimRecordFrame::releaseInstance() {
	if (NULL != simRecordFrameInstance) {
		delete simRecordFrameInstance;
		simRecordFrameInstance = NULL;
	}

}


void SimRecordFrame::writeOneRecord(const char*) {
}


SimRecordFrame::SimRecordFrameGarbo::SimRecordFrameGarbo() {

}

SimRecordFrame::SimRecordFrameGarbo::~SimRecordFrameGarbo() {
	releaseInstance();
}