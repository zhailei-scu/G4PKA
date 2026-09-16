/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#include "NWAnalysis.h"

NWAnalysis::NWAnalysis(){
    this->clear();
}

NWAnalysis::~NWAnalysis(){
    this->clear();
}

NWAnalysis & NWAnalysis::operator = (const NWAnalysis & r){
    this->BinNumberEachPower = r.BinNumberEachPower;

    this->maxBin = r.maxBin;

    this->minBin = r.minBin;

    this->minPrecision = r.minPrecision; 

    return *this;
}

NWAnalysis::NWAnalysis(const NWAnalysis & r){
    *this = r;
}

void NWAnalysis::clear(){
    this->BinNumberEachPower = 100;

	this->minBin = 0.01;
	this->maxBin = 200;

	this->minPrecision = 1e-7;
}