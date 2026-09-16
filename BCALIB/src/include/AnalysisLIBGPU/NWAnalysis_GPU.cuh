/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWANALYSIS_GPU_H
#define NWANALYSIS_GPU_H

#define BLOCKSIZE 512
#define GRIDDIMX 64;

#include "NWAnalysis.h"

struct ThreeVector
{
	double x;
	double y;
	double z;
};


class NWAnalysis_GPU : public NWAnalysis {
public:
	NWAnalysis_GPU();
public:
	~NWAnalysis_GPU();

	void AnalysisResult(const int &, const char** &);

	void AnalysisResult(std::map<int, std::vector<TrackInfo>>* storedData);
};



#endif
