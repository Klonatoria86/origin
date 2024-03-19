#pragma once
#include"Figure.h"
class Triangle : public Figure {
protected:
	short a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;

public:
	Triangle(short a, short b, short c, short A, short B, short C) : Figure(3) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		name = "Треугольник: ";
	}
	void Print();
};
