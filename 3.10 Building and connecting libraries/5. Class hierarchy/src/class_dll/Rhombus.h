#pragma once
#include"Parallelogram.h"
#ifdef dinamic_lib
#define in_LIB __declspec(dllexport)
#else
#define in_LIB __declspec(dllimport)
#endif 
class Rhombus : public Parallelogram {
public:
	in_LIB Rhombus(short, short, short);
};
