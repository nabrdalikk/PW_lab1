cmake_minimum_required (VERSION 2.6)
project (Lab1)
add_executable(Laborka main.cpp)
include_directories ("${PROJECT_SOURCE_DIR}/Trygonometria")
add_subdirectory (Trygonometria)
target_link_libraries (Laborka Trygonometria)