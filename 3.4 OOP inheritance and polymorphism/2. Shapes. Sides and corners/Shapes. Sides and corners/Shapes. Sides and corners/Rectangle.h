#pragma once
#include"Parallelogram.h"
class Rectangle : public Parallelogram {
public:
	Rectangle(short a, short b) : Parallelogram(a, b, 90, 90) {
		name = "Прямоугольник: ";
	}
};
