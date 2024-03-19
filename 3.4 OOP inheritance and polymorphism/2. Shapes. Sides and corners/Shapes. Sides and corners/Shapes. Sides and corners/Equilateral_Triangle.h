#pragma once
#include"Isosceles_Triangle.h"
class Equilateral_Triangle : public Isosceles_Triangle {
public:
	Equilateral_Triangle(short a) : Isosceles_Triangle(a, b = a, 60, 60) {
		name = "Равносторонний треугольник: ";
	}
};
