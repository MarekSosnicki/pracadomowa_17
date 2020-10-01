cmake_minimum_required(VERSION 3.10.0)
project(PracaDomowa)

add_library(libka lib.cpp)

add_executable(zadanie main.cpp)

target_link_libraries(zadanie libka)