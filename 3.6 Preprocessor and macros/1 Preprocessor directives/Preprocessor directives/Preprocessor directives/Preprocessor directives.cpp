#include<iostream>
#include"Function.h"
#define MODE 1
int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
#ifndef MODE
#error "MODE is not defined"
#else
#if  MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif  MODE == 1
	std::cout << "Работаю в боевом режиме\nВведите число 1: ";
	std::cin >> x;
	std::cout << "Введите число 2: ";
	std::cin >> y;
	std::cout << "Результат сложения: " << add(x, y) << std::endl;
#else
	std::cout << "Неизвестный режим. Завершение работы";
#endif
#endif
	return 0;
}