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
	addresses first{ "Москва","Ленина",45,124,758297 };
	addresses second{ "Уфа","Демьяна-Бедного",54,87,294740};
	addresses third{ "Курган" ,"Прутикова" ,33,33,640023};
	Print(first);
	std::cout << std::endl;
	Print(second);
	std::cout << std::endl;
	Print(third);
	std::cout << std::endl;
	return 0;
}