#include"Parallelogram.h"
#include"Exc.h"
Parallelogram::Parallelogram(short a, short b, short A, short B) : Quadrangle(a, b, c = a, d = b, A, B, C = A, D = B) {
	if (a == c && b == d && A == C && B == D) {
		name = "Параллелограмм: ";
	}
	else {
		throw My_Ex("Стороны a,c и b,d попарно не равны и углы A,C и B,D попарно не равны");
	}
}