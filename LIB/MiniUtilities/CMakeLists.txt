cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(BCAPKASpec)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LIBNAME MiniUtilities)

include_directories(${PROJECT_SOURCE_DIR}/../src/include/${LIBNAME})

file(GLOB sources_MiniUtilities ${PROJECT_SOURCE_DIR}/../src/source/${LIBNAME}/*.cpp)
file(GLOB headers_MiniUtilities ${PROJECT_SOURCE_DIR}/../src/include/${LIBNAME}/*.h)

add_library(${LIBNAME} STATIC ${sources_MiniUtilities} ${headers_MiniUtilities})

install(TARGETS ${LIBNAME} DESTINATION lib)