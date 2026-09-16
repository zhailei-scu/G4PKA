cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(BCAPKASpec)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CUDA_STANDARD 17)
set(CMAKE_CUDA_STANDARD_REQUIRED ON)

set(CMAKE_CUDA_ARCHITECTURES native)

set(LIBNAME AnalysisLIBGPU)

find_package(CUDA REQUIRED)

#set(CMAKE_VERBOSE_MAKEFILE ON)

# For jetson
#SET(CMAKE_CXX_FLAGS "-O2 -Wall")
#set(CUDA_NVCC_FLAGS ${CUDA_NVCC_FLAGS};-gencode arch=compute_75,code=sm_75;-x=cu)
#set(CUDA_64_BIT_DEVICE_CODE ON)

#set(GENCODE ${GENCODE} -gencode arch=compute_70,code=sm_70)
#set(GENCODE ${GENCODE} -gencode arch=compute_50,code=sm_50)
#set(GENCODE ${GENCODE} -gencode arch=compute_35,code=sm_35)
#set(GENCODE ${GENCODE} -gencode arch=compute_30,code=sm_30)
#set(GENCODE ${GENCODE} -gencode arch=compute_20,code=sm_20)

include_directories(${PROJECT_SOURCE_DIR}/../src/include/Common)
include_directories(${PROJECT_SOURCE_DIR}/../src/include/AnalysisLIB)
include_directories(${PROJECT_SOURCE_DIR}/../src/include/${LIBNAME})


file(GLOB sources_AnalysisLIBGPU ${PROJECT_SOURCE_DIR}/../src/source/${LIBNAME}/*.cu)
file(GLOB headers_AnalysisLIBGPU ${PROJECT_SOURCE_DIR}/../src/include/${LIBNAME}/*.cuh)

cuda_add_library(${LIBNAME} STATIC ${sources_AnalysisLIBGPU} ${headers_AnalysisLIBGPU})
target_link_libraries(${LIBNAME} ${UTILLIBS} ${Geant4_LIBRARIES} Common AnalysisLIB ${CUDA_cudadevrt_LIBRARY})

install(TARGETS ${LIBNAME} DESTINATION lib)
