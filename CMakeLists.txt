cmake_minimum_required(VERSION 3.16)
project(theAlg)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(sorting)
#aux_source_directory(. DIR_SRCS)
#add_executable(theAlg ${DIR_SRCS})
add_executable(theAlg main.cpp)

target_link_libraries(theAlg sorting)