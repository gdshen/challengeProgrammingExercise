cmake_minimum_required(VERSION 3.5)
project(challengeProgramming)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(challengeProgramming ${SOURCE_FILES})

add_executable(TemplateFIle TemplateFile.cpp)
add_executable(chapt2_1_1_recursive chapt2/violentSearch/recursive.cpp)
add_executable(chapt2_1_2_usingStack chapt2/violentSearch/usingStack.cpp)
add_executable(chapt2_1_3_usingQueue chapt2/violentSearch/usingQueue.cpp)
add_executable(chapt2_1_4_dfs chapt2/violentSearch/dfs.cpp)
add_executable(chapt2_1_4_dfsLakeCounting chapt2/violentSearch/dfsLakeCounting.cpp)
add_executable(chapt2_1_5_bfs chapt2/violentSearch/bfs.cpp)
