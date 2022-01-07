add_library(SerializerLib
        STATIC
        ./serialize.cpp ./deserialize.cpp ./convert_dataset.cpp)

target_link_libraries(SerializerLib ${OpenCV_LIBS})
target_include_directories(SerializerLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_library(convert_dataset  STATIC
        ./convert_dataset.cpp)
target_link_libraries(convert_dataset ${OpenCV_LIBS})
target_include_directories(convert_dataset PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
