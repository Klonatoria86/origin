#pragma once
#include"Quadrangle.h"
#ifdef dinamic_lib
#define in_LIB __declspec(dllexport)
#else
#define in_LIB __declspec(dllimport)
#endif 
class Parallelogram : public Quadrangle {
public:
	in_LIB Parallelogram(short, short, short, short);
};
