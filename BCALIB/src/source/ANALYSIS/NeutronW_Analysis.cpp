/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#include <iostream>
#include "NWGlobal.h"
#include "Analysis_MethodFactory.h"
#include "NWSimParameters.h"
#include <sstream>


int main(int argc, char* argv[]) {

	if(argc < 2){
		std::cerr<<"Error, you must special the method"<<std::endl;
		exit(-1);
	}

	std::string methodName = argv[1];

	NWAnalysis* method = Analysis_MethodFactory::getInstance()->GenerateMethod(methodName);

	method->AnalysisResult(argc,(const char** &)argv);
	return 0;
}