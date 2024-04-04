
#include<iostream>
#include"Triangle.h"
#include"Exc.h"
Triangle::Triangle(short a, short b, short c, short A, short B, short C)  : Figure(3) {
	if ((A + B + C) != 180) {
		throw My_Ex("C���� ����� �� ����� 180");
	}
	name = "�����������: ";
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
}
void Triangle::Print() {	
	std::cout << get_name() << " (" << "�������: " << a << ", " << b << ", " << c << "; " << "����: " << A << ", " << B << ", " << C << ") ������" << std::endl << std::endl;
}