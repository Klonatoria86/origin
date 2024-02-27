#include<iostream>
#include<string>
struct Bank_account
{
	int number = 0;
	std::string owner;
	double money = 0;
};
void structure_Initialization(Bank_account& account) {
	std::cout << "Введите номер счёта: ";
	std::cin >> account.number;
	std::cout << "Введите имя владельца: ";
	std::cin >> account.owner;
	std::cout << "Введите баланс: ";
	std::cin >> account.money;
};
void balance_Сhange(Bank_account & account,double balance) {
	account.money = balance;
};
int main() {
	setlocale(LC_ALL, "rus");
	Bank_account first_owner;
	structure_Initialization(first_owner);
	double balance;
	std::cout << "Введите новый баланс: " << std::endl;
	std::cin >> balance;
	balance_Сhange(first_owner, balance);
	std::cout << "Ваш счёт: " << first_owner.owner << ", " << first_owner.number << ", " << first_owner.money << std::endl;
	return 0;
}