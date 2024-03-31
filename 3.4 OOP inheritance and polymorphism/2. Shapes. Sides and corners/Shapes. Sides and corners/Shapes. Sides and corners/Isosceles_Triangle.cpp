#include"Isosceles_Triangle.h"
#include"Exc.h"
Isosceles_Triangle::Isosceles_Triangle(short a, short b, short A, short B)  : Triangle(a, b, c = a, A, B, C = A) {
	if (a == c && A == C) {
		name = "Равнобедренный треугольник: ";
	}
	else {
		throw My_Ex("Стороны a и c не равны, углы A и C не равны");
	}
}