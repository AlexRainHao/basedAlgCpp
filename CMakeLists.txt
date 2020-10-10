cmake_minimum_required(VERSION 3.11)
project(theAlg)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(sorting)
add_subdirectory(singlyLinkedList)
add_executable(theAlg main.cpp)

target_link_libraries(theAlg sorting linkList)