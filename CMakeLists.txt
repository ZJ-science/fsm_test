cmake_minimum_required(VERSION 2.6)
project(fsm_test)

add_executable(fsm_test main.cpp)

install(TARGETS fsm_test RUNTIME DESTINATION bin)
