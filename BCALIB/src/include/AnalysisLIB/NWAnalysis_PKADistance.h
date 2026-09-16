/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

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