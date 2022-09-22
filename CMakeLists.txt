cmake_minimum_required (VERSION 3.8)

project(Task_1)

add_library (BoxLibrary STATIC Box.cpp)

add_executable(Task_1 Task_1.cpp)

target_link_libraries(Task_1 BoxLibrary)