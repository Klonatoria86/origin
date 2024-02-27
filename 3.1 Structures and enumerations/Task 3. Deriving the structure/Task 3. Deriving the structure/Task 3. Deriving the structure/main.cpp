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
	std::cout << "Город: " << addresses.city << std::endl;
	std::cout << "Улица: " << addresses.street << std::endl;
	std::cout << "Номер дома: " << addresses.house << std::endl;
	std::cout << "Номер квартиры: " << addresses.apartment << std::endl;
	std::cout << "Индекс: " << addresses.zip_code << std::endl;
};
int main() {
	setlocale(LC_ALL, "rus");
	addresses first;
	addresses second;
	addresses third;
	first.city = "Москва";
	second.city = "Уфа";
	third.city = "Курган";
	first.street = "Ленина";
	second.street = "Демьяна-Бедного";
	third.street = "Прутикова";
	first.house = 45;
	second.house = 54;
	third.house = 33;
	first.apartment = 124;
	second.apartment = 87;
	third.apartment = 33;
	first.zip_code = 758297;
	second.zip_code = 294740;
	third.zip_code = 640023;
	Print(first);
	std::cout << std::endl;
	Print(second);
	std::cout << std::endl;
	Print(third);
	std::cout << std::endl;
	return 0;
}