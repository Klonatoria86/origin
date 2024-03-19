#pragma once
#include"Quadrangle.h"
class Parallelogram : public Quadrangle {
public:
	Parallelogram(short a, short b, short A, short B) : Quadrangle(a, b, c = a, d = b, A, B, C = A, D = B) {
		name = "ֿאנאככוכמדנאלל: ";
	}
};
