#include<string>
#include<iostream>
int function(std::string str, int forbidden_length) {
	if ((str.length()) == forbidden_length) {
		throw std::runtime_error("�� ����� ����� ��������� �����! �� ��������\n");
		std::cout << "����� ����� " << str << " ����� ";
	}
	else return str.length();
}