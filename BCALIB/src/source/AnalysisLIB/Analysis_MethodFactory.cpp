/*********************************************************************************
 * Description:
 * Author : Lei Zhai,  Institute of Energy, Hefei Comprehensive National Science Center
 * Email : zhaileiytp@163.com; zhailei@ie.ah.cn
 * data: 2026-09-16
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#include "Analysis_MethodFactory.h"
#include "NWAnalysis_PKADistance.h"
#include "NWAnalysis_DPA.h"
#include "NWGlobal.h"
#include <map>

using namespace std;

Analysis_MethodFactory* Analysis_MethodFactory::_factory = NULL;

Analysis_MethodFactory::GbClear Analysis_MethodFactory::m_GbClear;

Analysis_MethodFactory::Analysis_MethodFactory(){
    ConstructCollections();
}

Analysis_MethodFactory::~Analysis_MethodFactory(){
    std::map<string,AnalysisMethodCreator>().swap(methodCollection);
    methodCollection.clear();

    if(this->generatedMethod){
        delete this->generatedMethod;
        this->generatedMethod = NULL;
    }
}

void Analysis_MethodFactory::methodRegister(const string & name,AnalysisMethodCreator MethodCreator){
    if(this->methodCollection.find(name) == this->methodCollection.end()){
        this->methodCollection.insert(pair<string,AnalysisMethodCreator>(name,MethodCreator));
    }
}


void Analysis_MethodFactory::ConstructCollections(){
    std::map<string,AnalysisMethodCreator>().swap(methodCollection);
    methodCollection.clear();

    this->methodRegister(string("PKADistance"),CLASSCREATOR(NWAnalysis_PKADistance));

    this->methodRegister(string("DPA"),CLASSCREATOR(NWAnalysis_DPA));
}

Analysis_MethodFactory* Analysis_MethodFactory::getInstance(){
    if(!_factory) _factory = new Analysis_MethodFactory();

    return _factory;
}

NWAnalysis* Analysis_MethodFactory::GenerateMethod(const string & name){
    if(this->generatedMethod){
        delete this->generatedMethod;
        this->generatedMethod = NULL;
    }

    return (this->generatedMethod = this->methodCollection.find(name)->second());
}

//garbge clear
Analysis_MethodFactory::GbClear::GbClear(){

}

Analysis_MethodFactory::GbClear::~GbClear(){
    if(Analysis_MethodFactory::_factory){
        delete Analysis_MethodFactory::_factory;
        Analysis_MethodFactory::_factory = NULL;
    }
}