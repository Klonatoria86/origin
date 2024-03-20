
#include<iostream>
#include"Triangle.h"
Triangle::Triangle(short a, short b, short c, short A, short B, short C) : Figure(3) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	name = "Треугольник: ";
}
void Triangle::Print() {
	std::cout << name << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
}