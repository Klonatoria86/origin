#pragma once
#include"Quadrangle.h"
#ifdef CLASS_DLL_EXPORTS
#define IN_API __declspec(dllexport)
#else
#define IN_API __declspec(dllimport)
#endif
class Parallelogram : public Quadrangle {
public:
	IN_API Parallelogram(short, short, short, short);
};
