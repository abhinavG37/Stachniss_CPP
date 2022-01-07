cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(hello  VERSION 1.0)
# THIS
# add_executable(hello src/main.cpp src/blah.cpp )
# hello is the target executable we want to generate
#main.cpp and blah.cpp are the src files needed to compile. 
# OR
file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(hello main.cpp ${SRC_FILES})
# Use SRC_FILES VARIABLE as a placeholder for the src (.cpp) files which can or may not include main 


target_include_directories(hello PUBLIC $(CMAKE_CURRENT_SOURCE_DIR)/include)
#target has to include directories for header files in this statement 
# $(CMAKE_CURRENT_SOURCE_DIR) is a keyword acting as a variable for the current working directory of this CMakeLists.txt file
