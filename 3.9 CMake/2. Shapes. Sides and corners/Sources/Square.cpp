#include"Square.h"
#include"Exc.h"
Square::Square(short a) : Rhombus(a, 90, 90) {
	if (a == b && b == c && c == d && A == B && B == C && C == D) {
		name = "Квадрат: ";
	}
	else {
		throw My_Ex("Не все стороны равны и не все углы равны 90");
	}
}