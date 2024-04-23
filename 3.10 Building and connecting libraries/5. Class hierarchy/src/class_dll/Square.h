#pragma once
#include"Rhombus.h"
#ifdef dinamic_lib
#define in_LIB __declspec(dllexport)
#else
#define in_LIB __declspec(dllimport)
#endif 
class Square : public Rhombus {
public:
	in_LIB Square(short);
};
