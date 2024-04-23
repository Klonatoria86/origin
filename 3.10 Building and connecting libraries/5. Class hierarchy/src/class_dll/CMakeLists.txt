cmake_minimum_required(VERSION 3.16)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../../lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../bin)

project(Class_dll_v1)
set(SOURCE_DLL Equilateral_Triangle.cpp Equilateral_Triangle.h Exc.cpp Exc.h Figure.cpp Figure.h Isosceles_Triangle.cpp Isosceles_Triangle.h Parallelogram.cpp Parallelogram.h Quadrangle.cpp Quadrangle.h Rectangle.cpp Rectangle.h Rhombus.cpp Rhombus.h Right_Triangle.cpp Right_Triangle.h Square.cpp Square.h Triangle.cpp Triangle.h)
 
add_library (Class_dll SHARED ${SOURCE_DLL})
target_compile_definitions(Class_dll PRIVATE dinamic_lib)