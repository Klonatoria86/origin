#pragma once
#include"Triangle.h"
#ifdef CLASS_DLL_EXPORTS
#define IN_API __declspec(dllexport)
#else
#define IN_API __declspec(dllimport)
#endif
class Isosceles_Triangle : public Triangle {
public:
	IN_API Isosceles_Triangle(short, short, short, short);
};
