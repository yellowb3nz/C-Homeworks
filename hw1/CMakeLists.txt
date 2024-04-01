cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME example)
project("Homework_12")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_executable("Homework_12" main.cpp func.hpp func.cpp)