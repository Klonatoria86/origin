#include"Parallelogram.h"
#include"Exc.h"
Parallelogram::Parallelogram(short a, short b, short A, short B) : Quadrangle(a, b, c = a, d = b, A, B, C = A, D = B) {
	if (a == c && b == d && A == C && B == D) {
		name = "��������������: ";
	}
	else {
		throw My_Ex("������� a,c � b,d ������� �� ����� � ���� A,C � B,D ������� �� �����");
	}
}