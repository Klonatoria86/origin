#include<iostream>
#include"functions.h"
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b;
	int c;
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	do {
		std::cin >> c;
		switch (c)
		{
		case 1:
			std::cout << a << " Прибавить " << b << " = " << Addition(a, b) << std::endl;
			break;
		case 2:
			std::cout << a << " Отнять " << b << " = " << Subtraction(a, b) << std::endl;
			break;
		case 3:
			std::cout << a << " Умножить на " << b << " = " << Multiplication(a, b) << std::endl;
			break;
		case 4:
			std::cout << a << " Разделить на " << b << " = " << Separation(a, b) << std::endl;
			break;
		case 5:
			std::cout << a << " в степени " << b << " = " << Exponentiation(a, b) << std::endl;
			break;
		default:
			std::cout << "Введите число от 1 до 5:  ";
			break;
		}
	} while (c > 5);
	return 0;
}