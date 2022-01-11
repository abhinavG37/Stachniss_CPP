cmake_minimum_required(VERSION 3.16)
project(homework_7)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)

include_directories(include)
include_directories(tests)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
find_package(OpenCV 4 REQUIRED)

find_library( SERIALIZER SerializerLib ${CMAKE_CURRENT_SOURCE_DIR}/include/lib/)
find_library( SIFTLIB convert_dataset ${CMAKE_CURRENT_SOURCE_DIR}/include/lib/)

add_executable(main src/main.cpp include/homework_7_vanilla.cpp)
target_include_directories(main PUBLIC ./include)


target_link_libraries(main ${OpenCV_LIBS} ${SIFTLIB} ${SERIALIZER})

