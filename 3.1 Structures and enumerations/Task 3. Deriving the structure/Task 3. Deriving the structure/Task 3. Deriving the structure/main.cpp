#include<iostream>
#include<string>
struct addresses
{
	std::string city;
	std::string street;
	short house;
	short apartment;
	int zip_code;
};
void Print(addresses& addresses) {
	std::cout << "�����: " << addresses.city << std::endl;
	std::cout << "�����: " << addresses.street << std::endl;
	std::cout << "����� ����: " << addresses.house << std::endl;
	std::cout << "����� ��������: " << addresses.apartment << std::endl;
	std::cout << "������: " << addresses.zip_code << std::endl;
};
int main() {
	setlocale(LC_ALL, "rus");
	addresses first{ "������","������",45,124,758297 };
	addresses second{ "���","�������-�������",54,87,294740};
	addresses third{ "������" ,"���������" ,33,33,640023};
	Print(first);
	std::cout << std::endl;
	Print(second);
	std::cout << std::endl;
	Print(third);
	std::cout << std::endl;
	return 0;
}