cmake_minimum_required(VERSION 3.12)
project(DELDA)

set(CMAKE_CXX_STANDARD 17)

add_library(DELDA SHARED library.cpp library.h)