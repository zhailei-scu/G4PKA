/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWANALYSIS_H
#define NWANALYSIS_H

#include "NWReadInfoStore.h"


class NWAnalysis {
public:
	NWAnalysis();

	virtual ~NWAnalysis();

	virtual void AnalysisResult(std::map<int, std::vector<TrackInfo>>* storedData) = 0;

	NWAnalysis & operator = (const NWAnalysis &);

	NWAnalysis(const NWAnalysis &);
public:

	int BinNumberEachPower = 100;

	double minBin = 0.01;
	double maxBin = 200;

	double minPrecision = 1e-7;

public:
	void clear();

};

#endif