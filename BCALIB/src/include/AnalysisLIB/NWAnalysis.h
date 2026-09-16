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