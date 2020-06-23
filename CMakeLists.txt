cmake_minimum_required(VERSION 3.16)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled main.cpp BasicMath.h TestBasicMath.h)

link_directories(
        /usr/lib
)

target_link_libraries(untitled cppunit ${CMAKE_DL_LIBS})
