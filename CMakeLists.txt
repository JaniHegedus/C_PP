cmake_minimum_required(VERSION 3.22)
project(C_PP)

set(CMAKE_CXX_STANDARD 23)

add_executable(C_PP main.cpp
        Source/date.h
        Source/ember.h
        Source/functionheader.h
        Source/point.h
        Source/rec.h
        )
