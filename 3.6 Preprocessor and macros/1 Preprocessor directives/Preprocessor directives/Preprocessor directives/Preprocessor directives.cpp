#include<iostream>
#define MODE 1
int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
#ifndef MODE
#error "MODE is not defined"
#else
#if  MODE == 0
	std::cout << "������� � ������ ����������" << std::endl;
#elif  MODE == 1
#include"Function.h"
	std::cout << "������� � ������ ������\n������� ����� 1: ";
	std::cin >> x;
	std::cout << "������� ����� 2: ";
	std::cin >> y;
	std::cout << "��������� ��������: " << add(x, y) << std::endl;
#else
	std::cout << "����������� �����. \n���������� ������";
#endif
#endif
	return 0;
}