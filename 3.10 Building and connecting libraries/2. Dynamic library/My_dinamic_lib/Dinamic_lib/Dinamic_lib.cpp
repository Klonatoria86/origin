
#include<iostream>
#include<string>
#include"Leaver.h"
	int main()
	{
		setlocale(LC_ALL, "Russian");
		std::string name;
		std::cout << "Введите имя: ";
		std::cin >> name;
		Greeter f1;
		std::cout << "До свидания, " << f1.greet(name) << "!" << std::endl;
		return 0;
	}