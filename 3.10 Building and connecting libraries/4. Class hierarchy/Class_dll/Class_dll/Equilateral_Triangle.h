#pragma once
#ifdef CLASS_DLL_EXPORTS
#define IN_API __declspec(dllexport)
#else
#define IN_API __declspec(dllimport)
#endif
#include"Isosceles_Triangle.h"
 class Equilateral_Triangle : public Isosceles_Triangle {
public:
	IN_API Equilateral_Triangle(short);
};
