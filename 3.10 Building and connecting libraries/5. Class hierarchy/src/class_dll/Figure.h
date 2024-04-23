#pragma once
#include<string>
#ifdef dinamic_lib
#define in_LIB __declspec(dllexport)
#else
#define in_LIB __declspec(dllimport)
#endif 
class Figure {
	short sides_count;
protected:
	Figure(short);
	std::string name;
	bool x;
public:
	in_LIB Figure() : Figure(0) {}
	in_LIB std::string get_name();
	in_LIB short get_sides_count();
	in_LIB void Print();
};
