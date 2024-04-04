#include<iostream>
#include"Quadrangle.h"
#include"Exc.h"
Quadrangle::Quadrangle(short a, short b, short c, short d, short A, short B, short C, short D) : Figure(4) {
	if ((A + B + C + D) == 360) {
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
	else {
		throw My_Ex("Cумма углов не равна 360");
	}
}
void Quadrangle::Print() {
	std::cout << name << " (" << "Стороны: " << a << ", " << b << ", " << c << ", " << d << "; " << "Углы: " << A << ", " << B << ", " << C << ", " << D << ") создан" << std::endl << std::endl;
}
