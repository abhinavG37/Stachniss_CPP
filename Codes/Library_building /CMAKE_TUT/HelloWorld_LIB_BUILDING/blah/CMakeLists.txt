add_library(blah_lib STATIC blah.cpp)
target_include_directories(blah_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
# adds directory to be built for target library named as blah_lib
