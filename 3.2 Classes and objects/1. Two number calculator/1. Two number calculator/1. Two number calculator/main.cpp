#include<iostream>
class Calculator {
	double num1;
	double num2;
public:
	bool set_num1(double num1) {
		if (num1 != 0) {
			this->num1 = num1;
			return true;
		}
		else {
			return false;
		}
	}
	bool set_num2(double num2) {
		if (num2 != 0) {
			this->num2 = num2;
			return true;
		}
		else {
			return false;
		}
	}
	double add() {
		return num1 + num2;
	}
	double multiply() {
		return num1 * num2;
	};
	double subtract_1_2() {
		return num2 - num1;
	};
	double subtract_2_1() {
		return num1 - num2;
	};
	double divide_1_2() {
		return num1 / num2;
	};
	double divide_2_1() {
		return num2 / num1;
	};
};
int main() {
	setlocale(LC_ALL, "Russian");
	Calculator first;
	while (true)
	{
		double num1, num2;
		std::cout << "Введите num1: ";
		std::cin >> num1;
		if (!first.set_num1(num1)) {
			std::cout << "Неверный ввод!\n" << "Введите num1: ";
			std::cin >> num1;
		}
		std::cout << "Введите num2: ";
		std::cin >> num2;
		if (!first.set_num2(num2)) {
			std::cout << "Неверный ввод!\n" << "Введите num2: ";
			std::cin >> num2;
		}
		std::cout << "num1 + num2 = " << first.add() << std::endl;
		std::cout << "num1 * num2 = " << first.multiply() << std::endl;
		std::cout << "num2 - num1 = " << first.subtract_1_2() << std::endl;
		std::cout << "num1 - num2 = " << first.subtract_2_1() << std::endl;
		std::cout << "num1 / num2 = " << first.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << first.divide_2_1() << std::endl;
	}
	
	return 0;
}