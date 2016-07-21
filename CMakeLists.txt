cmake_minimum_required(VERSION 3.5)
project(challengeProgramming)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(challengeProgramming ${SOURCE_FILES})

add_executable(TemplateFIle TemplateFile.cpp)