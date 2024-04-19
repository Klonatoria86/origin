
#include<iostream>
#include"Triangle.h"
#include"Exc.h"
Triangle::Triangle(short a, short b, short c, short A, short B, short C)  : Figure(3) {
	if ((A + B + C) != 180) {
		throw My_Ex("Cумма углов не равна 180");
	}
	name = "Треугольник: ";
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
}
void Triangle::Print() {	
	std::cout << get_name() << " (" << "Стороны: " << a << ", " << b << ", " << c << "; " << "Углы: " << A << ", " << B << ", " << C << ") создан" << std::endl << std::endl;
}