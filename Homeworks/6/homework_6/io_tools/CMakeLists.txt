add_library(io_tools
        STATIC
        io_tools.cpp)

#target_link_libraries(io_tools ${OpenCV_LIBS})
target_include_directories(io_tools PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
