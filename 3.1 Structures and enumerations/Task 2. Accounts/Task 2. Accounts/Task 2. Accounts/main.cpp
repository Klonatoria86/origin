#include<iostream>
#include<string>
struct Bank_account
{
	int number = 0;
	std::string owner;
	double money = 0;
};
void structure_Initialization(Bank_account& account) {
	std::cout << "������� ����� �����: ";
	std::cin >> account.number;
	std::cout << "������� ��� ���������: ";
	std::cin >> account.owner;
	std::cout << "������� ������: ";
	std::cin >> account.money;
};
void balance_�hange(Bank_account & account,double balance) {
	account.money = balance;
};
int main() {
	setlocale(LC_ALL, "rus");
	Bank_account first_owner;
	structure_Initialization(first_owner);
	double balance;
	std::cout << "������� ����� ������: " << std::endl;
	std::cin >> balance;
	balance_�hange(first_owner, balance);
	std::cout << "��� ����: " << first_owner.owner << ", " << first_owner.number << ", " << first_owner.money << std::endl;
	return 0;
}