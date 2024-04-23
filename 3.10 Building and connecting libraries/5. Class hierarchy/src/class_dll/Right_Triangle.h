#pragma once
#include"Triangle.h"
#ifdef dinamic_lib
#define in_LIB __declspec(dllexport)
#else
#define in_LIB __declspec(dllimport)
#endif 
class Right_Triangle : public Triangle {
public:
	in_LIB Right_Triangle(short, short, short, short, short);
};
