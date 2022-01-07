cmake_minimum_required(VERSION 3.16)
project(LIB_BUILDER)
set(CMAKE_CXX_STANDARD 17) #-std=c++17
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) #IMPORTANT
set(CMAKE_CXX_FLAGS "-Wall")
add_library(tools tools.cpp)
add_executable(main main.cpp)
target_link_libraries(main tools)