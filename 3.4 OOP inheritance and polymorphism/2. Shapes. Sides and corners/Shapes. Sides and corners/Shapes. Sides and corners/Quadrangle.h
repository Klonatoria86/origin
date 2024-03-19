#pragma once
#include"Figure.h"
class Quadrangle : public Figure {
protected:
	short a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
public:
	Quadrangle(short a, short b, short c, short d, short A, short B, short C, short D) : Figure(4) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		name = "Четырёхугольник: ";
	}
	void Print();
};
