#include<iostream>
#include"functions.h"
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b;
	int c;
	std::cout << "������� ������ �����: ";
	std::cin >> a;
	std::cout << "������� ������ �����: ";
	std::cin >> b;
	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	do {
		std::cin >> c;
		switch (c)
		{
		case 1:
			std::cout << a << " ��������� " << b << " = " << Addition(a, b) << std::endl;
			break;
		case 2:
			std::cout << a << " ������ " << b << " = " << Subtraction(a, b) << std::endl;
			break;
		case 3:
			std::cout << a << " �������� �� " << b << " = " << Multiplication(a, b) << std::endl;
			break;
		case 4:
			std::cout << a << " ��������� �� " << b << " = " << Separation(a, b) << std::endl;
			break;
		case 5:
			std::cout << a << " � ������� " << b << " = " << Exponentiation(a, b) << std::endl;
			break;
		default:
			std::cout << "������� ����� �� 1 �� 5:  ";
			break;
		}
	} while (c > 5);
	return 0;
}