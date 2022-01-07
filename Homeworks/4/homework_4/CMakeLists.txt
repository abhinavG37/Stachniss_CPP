#======================================WHY I DO NOT USE HOMEWORK_4.cpp in CMakeLists
#//=============WHY A DIFFERENT CPP FILE CAUSE A LINKER ERROR=======================
#//============WHEN A TEMPLATE FUNCTION IMPLEMENTATION AND DECLARATION IS SPLIT======
#// https://stackoverflow.com/questions/3261093/function-template-in-a-namespace-in-a-separate-file-compiles-fine-but-the-linke


cmake_minimum_required(VERSION 3.16)
project(homework_4 VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)

find_package(OpenCV 4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS} ./include)

add_executable(main src/main.cpp)
target_include_directories(main PUBLIC ./include)
target_link_libraries(main ${OpenCV_LIBS})

add_executable(Test src/Tester.cpp )
target_include_directories(main PUBLIC ./include)
target_link_libraries(main ${OpenCV_LIBS})



#add_executable(test ./src/Tester.cpp ./include/image.cpp ./io_tools/io_tools.cpp)
#target_include_directories(test PUBLIC ./include)
#target_link_libraries(test io_tools ${OpenCV_LIBS})
#target_link_libraries(test ${OpenCV_LIBS})

#//===========================================================
#//====      Example of using .a library in cmake        =====
#//===========================================================
#Treat the .a file as the source code and include directories of header files at the very least.
#add_executable(linkerTest ./src/LinkerTest.cpp)
#find_library(LIBIOTOOLS io_tools build/lib/libio_tools.a)
#target_include_directories(linkerTest PUBLIC io_tools/)
#target_link_libraries(linkerTest LIBIOTOOLS ${OpenCV_LIBS})

