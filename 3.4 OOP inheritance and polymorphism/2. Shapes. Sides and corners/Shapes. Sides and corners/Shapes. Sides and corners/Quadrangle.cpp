#include<iostream>
#include"Quadrangle.h"
Quadrangle::Quadrangle(short a, short b, short c, short d, short A, short B, short C, short D) : Figure(4) {
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
void Quadrangle::Print() {
	std::cout << name << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;
}
