cmake_minimum_required(VERSION 2.6)
include_directories(${CMAKE_BINARY_DIR})
include_directories(${PROJECT_SOURCE_DIR})
file(GLOB sources "Fsm/*.cpp" "Fsm/*.h" "include/*.h" "src/*.cpp")#包含头文件
add_library(user SHARED ${sources})#生成库

