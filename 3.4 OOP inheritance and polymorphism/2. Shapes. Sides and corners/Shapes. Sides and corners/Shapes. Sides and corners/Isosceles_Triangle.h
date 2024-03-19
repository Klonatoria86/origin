#pragma once
#include"Triangle.h"
class Isosceles_Triangle : public Triangle {
public:
	Isosceles_Triangle(short a, short b, short A, short B) : Triangle(a, b, c = a, A, B, C = A) {
		name = "Равнобедренный треугольник: ";
	}
};
