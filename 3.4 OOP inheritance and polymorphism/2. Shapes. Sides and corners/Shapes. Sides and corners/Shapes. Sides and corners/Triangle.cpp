
#include<iostream>
#include"Triangle.h"
void Triangle::Print() {
	std::cout << name << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
}