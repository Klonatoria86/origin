#include<iostream>
#include"Right_Triangle.h"
#include"Exc.h"
Right_Triangle::Right_Triangle(short a, short b, short c, short A, short B) : Triangle(a, b, c, A, B, 90) {
	if (C == 90 || A == 90 || B == 90) {
		name = "������������� �����������: ";
	}
	else
	{
		throw My_Ex("��� ���� 90 ��������");
	}
}