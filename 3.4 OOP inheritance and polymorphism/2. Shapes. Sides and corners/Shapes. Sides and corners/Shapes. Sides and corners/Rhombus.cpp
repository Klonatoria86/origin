#include"Rhombus.h"
#include"Exc.h"
Rhombus::Rhombus(short a, short A, short B) : Parallelogram(a, b = a, A, B) {
	if (a == b && b == c && c == d && A == C && B == D) {
		name = "����: ";
	}
	else {
		throw My_Ex("�� ��� ������� ����� � ���� A,C � B,D ������� �� �����");
	}
}