#include"Rectangle.h"
#include"Exc.h"
Rectangle::Rectangle(short a, short b) : Parallelogram(a, b, 90, 90) {
	if (A == 90 && B == 90 && C == 90 && D == 90 && a == c && b == d) {
		name = "�������������: ";
	}
	else {
		throw My_Ex("C������ a,c � b,d ������� �� ����� � ��� ���� �� ����� 90");
	}
}