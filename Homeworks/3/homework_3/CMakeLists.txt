cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(html_writer_lib  VERSION 1.0)

# add_subdirectory(api/)
# include_directories(api/include) USE THIS OR LINE 14 IF TARGET DEFINED
add_executable(writer main.cpp)
target_include_directories(writer PUBLIC api/include) #OR include_directories(api/include) since one target only



add_library(html_writer STATIC api/html_writer.cpp) #create library with this command using html_writer.cpp
target_include_directories(html_writer PUBLIC api/include)
# adds directory to be built for target library named as html_writer
find_library(HTML_WRITERLIB
            NAMES html_writer
            PATHS ${CMAKE_CURRENT_SOURCE_DIR}/build)   
target_link_libraries(writer PUBLIC ${HTML_WRITERLIB})