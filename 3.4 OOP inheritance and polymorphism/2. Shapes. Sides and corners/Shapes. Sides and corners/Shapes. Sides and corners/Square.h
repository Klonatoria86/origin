#pragma once
#include"Rhombus.h"
class Square : public Rhombus {
public:
	Square(short a) : Rhombus(a, 90, 90) {
		name = " вадрат: ";
	}
};
