cmake_minimum_required(VERSION 3.16)
project(TESTER VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)

include_directories(./include ${OpenCV_INCLUDE_DIRS})
find_package(OpenCV 4 REQUIRED)

add_subdirectory(./include)
add_executable(serializer ./src/main.cpp)
target_link_libraries(serializer ${OpenCV_LIBS} convert_dataset)

add_executable(Test_extern src/TESTERCODE_extern.cpp)
target_link_libraries(Test_extern ${OpenCV_LIBS} convert_dataset)

add_executable(Test src/TESTERCODE.cpp)
target_link_libraries(Test ${OpenCV_LIBS} SerializerLib convert_dataset)

add_executable(main src/main.cpp )
target_link_libraries(main ${OpenCV_LIBS} SerializerLib convert_dataset)
