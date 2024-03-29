
#include<iostream>
#include"Triangle.h"
#include"Exc.h"
Triangle::Triangle(short a, short b, short c, short A, short B, short C) : Figure(3) {
	this->name = "Треугольник: ";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		if ((A + B + C) != 180) {
			throw My_Ex("сумма углов не равна 180");
		}
}
void Triangle::Print() {	
	std::cout << get_name() << " (" << "Стороны: " << a << ", " << b << ", " << c << "; " << "Углы: " << A << ", " << B << ", " << C << ")" << std::endl << std::endl;
}