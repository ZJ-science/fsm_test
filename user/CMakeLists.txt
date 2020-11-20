cmake_minimum_required(VERSION 3.5)
include_directories(${CMAKE_BINARY_DIR})
include_directories(${PROJECT_SOURCE_DIR})
add_compile_options(-std=c++11)
#include_directories("user/"
file(GLOB sources "Fsm/*.cpp" "Fsm/*.h" "include/*.h" "src/*.cpp")#包含头文件

add_library(user SHARED ${sources})#生成库
target_link_libraries(user pthread)#为什么？
