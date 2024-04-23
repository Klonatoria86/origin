#pragma once
#include"Figure.h"

#ifdef dinamic_lib
#define in_LIB __declspec(dllexport)
#else
#define in_LIB __declspec(dllimport)
#endif 
class Quadrangle : public Figure {
protected:
	short a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
public:
	in_LIB Quadrangle(short, short, short, short, short, short, short, short);
	in_LIB void Print();
};
