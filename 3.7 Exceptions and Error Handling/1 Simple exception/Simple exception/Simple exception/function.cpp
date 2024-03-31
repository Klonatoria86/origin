#include<string>
#include<iostream>
int function(std::string str, int forbidden_length) {
	if ((str.length()) == forbidden_length) {
		throw std::runtime_error("Вы ввели слово запретной длины! До свидания\n");
		std::cout << "Длина слова " << str << " равна ";
	}
	else return str.length();
}