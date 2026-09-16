/*********************************************************************************
 * Description:
 * Author : Lei Zhai,  Institute of Energy, Hefei Comprehensive National Science Center
 * Email : zhaileiytp@163.com; zhailei@ie.ah.cn
 * data: 2026-09-16
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#ifndef ANALYSIS_METHODFACTORY_H
#define ANALYSIS_METHODFACTORY_H

#include <map>
#include <string>
#include <functional>
#include "NWAnalysis.h"

using AnalysisMethodCreator = std::function<NWAnalysis*()>;  //c++ 11

class Analysis_MethodFactory{
    private:
        Analysis_MethodFactory();
        virtual ~Analysis_MethodFactory();
        Analysis_MethodFactory(const Analysis_MethodFactory &) = delete;
        const Analysis_MethodFactory & operator = (const Analysis_MethodFactory &) = delete;

    private:
        static Analysis_MethodFactory* _factory;

        std::map<std::string,AnalysisMethodCreator> methodCollection;

        NWAnalysis* generatedMethod = NULL;

    private:
        void methodRegister(const std::string & name,AnalysisMethodCreator MethodCreator);

    private:
        void ConstructCollections();

    public:
        static Analysis_MethodFactory* getInstance();

        NWAnalysis* GenerateMethod(const std::string & name);

    public:
        //Garbge clear
        class GbClear{
        public:
            GbClear();
            ~GbClear();
        };

    private:
        static GbClear m_GbClear;

};


#endif