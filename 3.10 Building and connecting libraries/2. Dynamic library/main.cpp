#include<iostream>
#include<string>
#include"Leaver.h"
int main() {
	setlocale(LC_ALL, "Russian");
	std::string name;
	std::cout << "������� ���: ";
	std::cin >> name;
	Greeter f1;
	std::cout << "�� ��������, " <<f1.greet(name) << "!" << std::endl;
	system("Pause");
	return 0;
}