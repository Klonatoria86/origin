#pragma once
#include"Triangle.h"
class Right_Triangle : public Triangle {
public:
	Right_Triangle(short a, short b, short c, short A, short B) : Triangle(a, b, c, A, B, 90) {
		name = "Прямоугольный треугольник: ";
	}
};
