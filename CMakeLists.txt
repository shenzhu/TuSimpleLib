cmake_minimum_required(VERSION 3.7)
project(TuSimpleLib)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c list.h list.c cast.h cast.c)
add_executable(TuSimpleLib ${SOURCE_FILES})