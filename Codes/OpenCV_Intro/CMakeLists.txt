cmake_minimum_required(VERSION 3.16)

project (opencv_Setup)

#include OPEN CV
include_directories(${OpenCV_INCLUDE_DIRS})
find_package(OpenCV 4 REQUIRED)
add_executable(intro src/OfficialTut1.cpp)
target_link_libraries(intro ${OpenCV_LIBS})