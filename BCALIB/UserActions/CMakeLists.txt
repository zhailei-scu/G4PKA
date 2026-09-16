cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(BCAPKASpec)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LIBNAME UserActions)

include_directories(${PROJECT_SOURCE_DIR}/../src/include/Common)
include_directories(${PROJECT_SOURCE_DIR}/../src/include/${LIBNAME})

file(GLOB sources_UserActions ${PROJECT_SOURCE_DIR}/../src/source/${LIBNAME}/*.cpp)
file(GLOB headers_UserActions ${PROJECT_SOURCE_DIR}/../src/include/${LIBNAME}/*.h)

add_library(${LIBNAME} STATIC ${sources_UserActions} ${headers_UserActions})
target_link_libraries(${LIBNAME} ${UTILLIBS} ${Geant4_LIBRARIES} Common)

install(TARGETS ${LIBNAME} DESTINATION lib)