#pragma once
#include<iostream>
class Figure {
	short sides_count;
protected:
	Figure(short);
	std::string name;
public:
	Figure() : Figure(0) {}
	std::string get_name();
	short get_sides_count();
	void Print();
};
