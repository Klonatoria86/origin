#include"Isosceles_Triangle.h"
#include"Exc.h"
Isosceles_Triangle::Isosceles_Triangle(short a, short b, short A, short B)  : Triangle(a, b, c = a, A, B, C = A) {
	if (a == c && A == C) {
		name = "�������������� �����������: ";
	}
	else {
		throw My_Ex("������� a � c �� �����, ���� A � C �� �����");
	}
}