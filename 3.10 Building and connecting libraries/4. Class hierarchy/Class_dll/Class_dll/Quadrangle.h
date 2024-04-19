#pragma once
#include"Figure.h"

#ifdef CLASS_DLL_EXPORTS
#define IN_API __declspec(dllexport)
#else
#define IN_API __declspec(dllimport)
#endif
class Quadrangle : public Figure {
protected:
	short a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
public:
	IN_API Quadrangle(short, short, short, short, short, short, short, short);
	IN_API void Print();
};
