cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(BCAPKASpec)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CUDA_STANDARD 17)
set(CMAKE_CUDA_STANDARD_REQUIRED ON)

set(CMAKE_CUDA_ARCHITECTURES native)

find_package(CUDA REQUIRED)

#set(CMAKE_VERBOSE_MAKEFILE ON)

# For jetson
#SET(CMAKE_CXX_FLAGS "-O2 -Wall")
#set(CUDA_NVCC_FLAGS ${CUDA_NVCC_FLAGS};-gencode arch=compute_35,code=sm_35;-x=cu)
#set(GENCODE ${GENCODE} -gencode arch=compute_70,code=sm_70)
#set(GENCODE ${GENCODE} -gencode arch=compute_50,code=sm_50)
#set(GENCODE ${GENCODE} -gencode arch=compute_35,code=sm_35)
#set(GENCODE ${GENCODE} -gencode arch=compute_30,code=sm_30)
#set(GENCODE ${GENCODE} -gencode arch=compute_20,code=sm_20)

foreach(_conftype ${CMAKE_CONFIGURATION_TYPES})
	link_directories("${BASE_OUTPUT_DIRECTORY}/${_conftype}/${CMAKE_INSTALL_BINDIR}")
	link_directories("${BASE_OUTPUT_DIRECTORY}/${_conftype}/${CMAKE_INSTALL_LIBDIR}")
endforeach()

foreach(LIBNAME ${BCALIBS})
	include_directories(${PROJECT_SOURCE_DIR}/../src/include/${LIBNAME})
endforeach()

foreach(LIBNAME_GPU ${BCALIBS_GPU})
	include_directories(${PROJECT_SOURCE_DIR}/../src/include/${LIBNAME_GPU})
endforeach()

include_directories(${PROJECT_SOURCE_DIR}/../src/include/AnalysisLIB)

include_directories(${PROJECT_SOURCE_DIR}/../src/include/AnalysisLIBGPU)

foreach(ANALYSNAME ${ANALYSIS_GPU})
	cuda_add_executable(${ANALYSNAME} ${PROJECT_SOURCE_DIR}/../src/source/ANALYSIS_GPU/${ANALYSNAME}.cu)
	target_link_libraries(${ANALYSNAME} ${UTILLIBS} ${BCALIBS} ${BCALIBS_GPU} ${Geant4_LIBRARIES} AnalysisLIB ${CUDA_cudadevrt_LIBRARY})

	install(TARGETS ${ANALYSNAME} RUNTIME DESTINATION bin)
endforeach()
