#pragma once
#include"Parallelogram.h"
class Rhombus : public Parallelogram {
public:
	Rhombus(short a, short A, short B) : Parallelogram(a, b = a, A, B) {
		name = "Ромб: ";
	}
};
