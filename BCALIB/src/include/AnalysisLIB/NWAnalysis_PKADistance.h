#ifndef NWANALYSIS_PKADISTANCE_H
#define NWANALYSIS_PKADISTANCE_H

#define MAXCELLNUM_X 885
#define MAXCELLNUM_Y 885
#define MAXCELLNUM_Z 10
#define MAXCELLNUM MAXCELLNUM_X*MAXCELLNUM_Y*MAXCELLNUM_Z
#define MAXLENONELINE 1024

#include "NWAnalysis.h"


class NWAnalysis_PKADistance : public NWAnalysis{
public:
	NWAnalysis_PKADistance();
public:
	~NWAnalysis_PKADistance();

	void AnalysisResult(std::map<int, std::vector<TrackInfo>>* storedData);
};

#endif