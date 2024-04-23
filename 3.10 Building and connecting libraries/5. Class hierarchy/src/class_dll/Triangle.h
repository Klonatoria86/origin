#pragma once
#include"Figure.h"
#ifdef dinamic_lib
#define in_LIB __declspec(dllexport)
#else
#define in_LIB __declspec(dllimport)
#endif 
class Triangle : public Figure {
protected:
	short a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;
public:
	in_LIB Triangle(short, short, short, short, short, short);
	in_LIB void Print();
};
