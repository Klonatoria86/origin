#include"Rhombus.h"
#include"Exc.h"
Rhombus::Rhombus(short a, short A, short B) : Parallelogram(a, b = a, A, B) {
	if (a == b && b == c && c == d && A == C && B == D) {
		name = "Ромб: ";
	}
	else {
		throw My_Ex("Не все стороны равны и углы A,C и B,D попарно не равны");
	}
}