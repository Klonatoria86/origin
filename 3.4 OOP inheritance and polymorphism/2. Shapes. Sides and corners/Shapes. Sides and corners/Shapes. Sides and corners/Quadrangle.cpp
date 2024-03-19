#include<iostream>
#include"Quadrangle.h"
void Quadrangle::Print() {
	std::cout << name << std::endl;
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;
}
