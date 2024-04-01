
cmake_minimum_required(VERSION 3.16)
project(The_simplest_project)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

add_executable(The_simplest_project main.cpp Exc.cpp Equilateral_Triangle.cpp Figure.cpp Isosceles_Triangle.cpp Parallelogram.cpp Quadrangle.cpp Rectangle.cpp Rhombus.cpp Right_Triangle.cpp Square.cpp Triangle.cpp)