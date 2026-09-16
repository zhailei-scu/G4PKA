/*********************************************************************************
 * Description:
 * Author : Lei Zhai,  Institute of Energy, Hefei Comprehensive National Science Center
 * Email : zhaileiytp@163.com; zhailei@ie.ah.cn
 * data: 2026-09-16
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef NWANALYSIS_DPA_H
#define NWANALYSIS_DPA_H

#define MAXCELLNUM_X 885
#define MAXCELLNUM_Y 885
#define MAXCELLNUM_Z 10
#define MAXCELLNUM MAXCELLNUM_X*MAXCELLNUM_Y*MAXCELLNUM_Z
#define MAXLENONELINE 1024

#include "NWAnalysis.h"
#include <fstream>

class NWAnalysis_DPA : public NWAnalysis{
public:
	NWAnalysis_DPA();
public:
	~NWAnalysis_DPA();

	void AnalysisResult(const int &, const char** &);

	void AnalysisResult(std::map<int, std::vector<TrackInfo>>* storedData);
	
	void New_Cal_MinDist_LinkedCell(std::map<int, std::vector<TrackInfo>>* storedData, double boundary[][2],
									std::fstream* ofsAnalysisPath_DistanceXYZ,std::fstream* ofsAnalysisPath_ZoneCount,std::fstream* ofsAnalysisPath_CeilCount);
};

#endif