# cmake_minimum_required(VERSION <specify CMake version here>)
project(TestC)

set(CMAKE_CXX_STANDARD 17)

add_executable(TestC second/main.cpp second/main1.cpp second/main1.h second/main2.cpp second/main2.h second/main3.cpp second/main3.h second/main4.cpp second/main4.h second/main5.cpp second/main5.h second/main6.cpp second/main6.h second/main7.cpp second/main7.h third/main.cpp third/main.h third/main2.cpp third/main2.h fourth/Clock.cpp fourth/Clock.h fourth/Circle.cpp fourth/Circle.h fourth/Point.cpp fourth/Point.h fourth/Line.cpp fourth/Line.h six/main.cpp six/main.h six/main2.cpp six/main2.h)
