cmake_minimum_required(VERSION 3.8)
project(Multiple-Classes)

set(CMAKE_CXX_STANDARD 14)

add_executable(Multiple-Classes main.cpp Employee.cpp Employee.h Company.cpp Company.h)