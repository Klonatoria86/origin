#pragma once
#include"Figure.h"
#ifdef CLASS_DLL_EXPORTS
#define IN_API __declspec(dllexport)
#else
#define IN_API __declspec(dllimport)
#endif
class Triangle : public Figure {
protected:
	short a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;
public:
	IN_API Triangle(short, short, short, short, short, short);
	IN_API void Print();
};
