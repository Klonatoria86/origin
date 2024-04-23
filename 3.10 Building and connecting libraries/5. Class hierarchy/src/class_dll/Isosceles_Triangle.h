#pragma once
#ifdef dinamic_lib
#define in_LIB __declspec(dllexport)
#else
#define in_LIB __declspec(dllimport)
#endif 
class Isosceles_Triangle : public Triangle {
public:
	in_LIB Isosceles_Triangle(short, short, short, short);
};
