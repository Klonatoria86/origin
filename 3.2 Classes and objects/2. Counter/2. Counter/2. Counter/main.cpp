#include<iostream>
#include<cstring>
#include<iomanip>
class Counter {
private:
	int meaning = 0;
public:
	void Increase1(){
		meaning++;
	}
	void Decrease1() {
		meaning--;
	}
	void Present_Value() {
		std::cout << meaning<<std::endl;
	}
	void initial_Value1() {
		meaning = 1;
	}
	void initialized_Value(int var) {
		meaning = var;
	}
};
int main() {

	setlocale(LC_ALL, "rus");
	std::string choice;
	std::string yes{ "yes" };
	std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
	std::cin >> choice;
	bool result = yes.compare(choice);
	Counter var_counter;
	if (!result) {
		int var;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> var;
		var_counter.initialized_Value(var);
	}
	else{
		var_counter.initial_Value1();
		std::cout << " Значение счётчика по умолчанию: ";
		var_counter.Present_Value();
		std::cout << std::endl;
	}
	char sign;
	std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
	std::cin >> sign;
	static_cast<int>(sign);
	while (static_cast<int>(sign) != 120) {
		switch (static_cast<int>(sign))
		{
		case 43:
			var_counter.Increase1();
			break;
		case 45:
			var_counter.Decrease1();
			break;
		case 61:
			var_counter.Present_Value();
			break;
		default:
			break;
		}
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> sign;
	}
	std::cout << "\tДо свидания!" << std::endl;
	return 0;
}