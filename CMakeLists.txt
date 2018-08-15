cmake_minimum_required(VERSION 3.12)
project(DELDA)

set(CMAKE_CXX_STANDARD 17)

add_library(DELDA SHARED src/DELDA.cpp src/DELDA.h)

include_directories(src/lib)

add_subdirectory(tests)
add_subdirectory(src/lib/kernelDensityEstimator)