cmake_minimum_required(VERSION 3.31)
project(zad1)

file(GLOB_RECURSE SRC src/*cpp)
set(SOURCES ${SRC})
add_executable(zad1 ${SOURCES})
