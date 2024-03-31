#include"Equilateral_Triangle.h"
#include"Exc.h"
Equilateral_Triangle::Equilateral_Triangle(short a) : Isosceles_Triangle(a, b = a, 60, 60) {

	if (a == b && b == c && c == a && A == B && B == C && C == A)
	{
		name = "Равносторонний треугольник: ";
	}
	else {
		throw My_Ex(" Не все стороны равны и не все углы равны 60");
	}
}