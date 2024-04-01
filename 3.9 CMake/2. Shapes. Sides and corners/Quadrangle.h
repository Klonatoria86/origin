#pragma once
#include"Figure.h"
class Quadrangle : public Figure {
protected:
	short a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
public:
	Quadrangle(short, short, short, short, short, short, short, short);
	void Print();
};
