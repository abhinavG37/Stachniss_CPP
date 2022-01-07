cmake_minimum_required(VERSION 3.19)
project(homework_6 VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)
find_package(OpenCV 4 REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS} ./tests)
add_subdirectory(./io_tools)

add_executable(main ./src/main.cpp ./include/image.cpp ./io_tools/io_tools.cpp)
target_include_directories(main PUBLIC ./include)
target_link_libraries(main io_tools ${OpenCV_LIBS})


add_executable(test ./src/Tester.cpp ./include/image.cpp ./io_tools/io_tools.cpp)
target_include_directories(test PUBLIC ./include)
target_link_libraries(test io_tools ${OpenCV_LIBS})
target_link_libraries(test ${OpenCV_LIBS})

#//===========================================================
#//====      Example of using .a library in cmake        =====
#//===========================================================
#Treat the .a file as the source code and include directories of header files at the very least.
add_executable(linkerTest ./src/LinkerTest.cpp)
find_library(LIBIOTOOLS io_tools build/lib/libio_tools.a)
target_include_directories(linkerTest PUBLIC io_tools/)
target_link_libraries(linkerTest LIBIOTOOLS ${OpenCV_LIBS})


