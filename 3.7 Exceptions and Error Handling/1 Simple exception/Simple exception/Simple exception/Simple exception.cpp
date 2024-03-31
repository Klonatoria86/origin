#include<iostream>
#include<string>
#include <exception>
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
			std::cout << function(str, forbidden_length) << std::endl;
		}
		catch (const std::runtime_error& bad_length)
		{
			std::cout << bad_length.what();
		}
	} while ((str.length()) != forbidden_length);
	return 0;
}
