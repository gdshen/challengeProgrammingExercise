cmake_minimum_required(VERSION 3.5)
project(challengeProgramming)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(challengeProgramming ${SOURCE_FILES})

add_executable(TemplateFIle TemplateFile.cpp)
add_executable(chapt2_1_recursive chapt2/violent_search/recursive.cpp)