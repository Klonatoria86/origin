#pragma once
#include"Figure.h"
class Triangle : public Figure {
protected:
	short a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;

public:
	Triangle(short, short, short, short, short, short);
	void Print();
};
