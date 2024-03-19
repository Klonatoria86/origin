#pragma once
#include<iostream>
class Figure {
	short sides_count;
protected:
	Figure(short sides_count) {
		this->sides_count = sides_count;
	}
	std::string name;
public:
	Figure() : Figure(0) {}
	std::string get_name();
	short get_sides_count();
	void Print();
};
