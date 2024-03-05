#include<iostream>
#include<string>
#include<fstream>
class Adres {
	std::string city;
	std::string street;
	short house = 0;
	short apartment = 0;
public:
	std::string get_city() {
		return city;
	}
	std::string get_street() {
		return street;
	}
	short get_house() {
		return house;
	}
	short get_apartment() {
		return apartment;
	}
	void set_initialize_Structure(std::string city, std::string street, short house, short apartment) {
		this->city = city;
		this->street = street;
		this->house = house;
		this->apartment = apartment;
	}
	
};
void sort(Adres* mas, int number)
{
	for (int i = 0; i < number - 1; i++)
		for (int j = i + 1; j < number; j++)
			if ((mas[i].get_city().compare(mas[j].get_city())) < 0)
			{
				Adres t = mas[i];
				mas[i] = mas[j];
				mas[j] = t;
			}
}
int main() {
	std::fstream My_file("in.txt");
	bool success = My_file.is_open();
	if (!success) {
		std::cout << "The file did not open";
	}
	short c, d, e;
	std::string a, b;
	My_file >> e;
	Adres* Var = new Adres[e];
	for (int i = 0; i < e; i++) {
		My_file >> a >> b >> c >> d;
		Var[i].set_initialize_Structure(a, b, c, d);
	}
	sort(Var, e);
	My_file.close();
	std::ofstream My_file_2("out.txt");
	bool success_2 = My_file_2.is_open();
	if (!success) {
		std::cout << "The file did not open";
	}
	My_file_2 << e << std::endl;
	for (int i = e - 1; i >= 0; i--) {
		My_file_2 << Var[i].get_city() << ", " << Var[i].get_street() << ", " << Var[i].get_house() << ", " << Var[i].get_apartment() << std::endl;
	}
	My_file_2.close();
	delete[] Var;
	return 0;
}