#include<iostream>
#include<string>
#include"function.h"
int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "������� ��������� �����: ";
	std::cin >> forbidden_length;
	do {
		std::cout << "������� �����: ";
		std::cin >> str;
		try
		{
			if ((str.length()) == forbidden_length) {
				throw "�� ����� ����� ��������� �����! �� ��������";
			}
			std::cout << function(str, forbidden_length) << std::endl;
		}
		catch (const char* bad_length)
		{
			std::cout << bad_length;
		}
	} while ((str.length()) != forbidden_length);
	return 0;
}
