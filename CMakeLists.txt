cmake_minimum_required(VERSION 3.29)
project(kNN)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(libs/matplotplusplus)

add_executable(kNN main.cpp
        src/Dataset.h
        src/Dataset.cpp)

target_link_libraries(kNN PUBLIC matplot)