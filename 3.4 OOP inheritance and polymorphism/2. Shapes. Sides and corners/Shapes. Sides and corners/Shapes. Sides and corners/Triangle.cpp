
#include<iostream>
#include"Triangle.h"
#include"Exc.h"
Triangle::Triangle(short a, short b, short c, short A, short B, short C) : Figure(3) {
	this->name = "�����������: ";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		if ((A + B + C) != 180) {
			throw My_Ex("����� ����� �� ����� 180");
		}
}
void Triangle::Print() {	
	std::cout << get_name() << " (" << "�������: " << a << ", " << b << ", " << c << "; " << "����: " << A << ", " << B << ", " << C << ")" << std::endl << std::endl;
}