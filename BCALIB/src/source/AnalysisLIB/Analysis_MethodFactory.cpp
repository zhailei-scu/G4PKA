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
#include <algorithm>

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

    this->methodRegister(string("PKADISTANCE"),CLASSCREATOR(NWAnalysis_PKADistance));

    // this->methodRegister(string("DPA"),CLASSCREATOR(NWAnalysis_DPA));
}

Analysis_MethodFactory* Analysis_MethodFactory::getInstance(){
    if(!_factory) _factory = new Analysis_MethodFactory();

    return _factory;
}

NWAnalysis* Analysis_MethodFactory::GenerateMethod(const string & name){

    std::string str(name);

    std::transform(str.begin(),str.end(),str.begin(),::toupper);

    if(this->generatedMethod){
        delete this->generatedMethod;
        this->generatedMethod = NULL;
    }

    if(this->methodCollection.find(str) == this->methodCollection.end()){
        std::cout<<"unsupport method Name: "<<name<<std::endl;
        exit(-1);
    }

    return (this->generatedMethod = this->methodCollection.find(str)->second());
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