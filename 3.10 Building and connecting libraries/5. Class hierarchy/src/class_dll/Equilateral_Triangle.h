#pragma once
#ifdef dinamic_lib
#define in_LIB __declspec(dllexport)
#else
#define in_LIB __declspec(dllimport)
#endif 
#include"Isosceles_Triangle.h"
 class Equilateral_Triangle : public Isosceles_Triangle {
public:
	in_LIB Equilateral_Triangle(short);
};
