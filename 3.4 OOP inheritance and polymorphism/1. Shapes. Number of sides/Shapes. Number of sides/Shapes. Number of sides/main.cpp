#include<iostream>
#include<string>

class Figure {
	short sides_count;
protected:
	std::string name;
	Figure(short sides_count) {
		name = "������: ";
		this->sides_count = sides_count;
	}
public:
	Figure() : Figure(0){}
	short get_sides_count() {
		return sides_count;
	}
	std::string get_name() {
		return name;
	}
	void Print() {
		std::cout << name << sides_count << std::endl;
	}
};
class Triangle : public Figure{
public:
	Triangle () : Figure (3) {
		name = "�����������: ";
	}
};
class Quadrangle : public Figure {
public:
	Quadrangle() : Figure(4) {
		name = "�������������: ";
	}
};
int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "���������� ������:" << std::endl;
	Figure figure;
	figure.Print();
	Triangle triangle;
	triangle.Print();
	Quadrangle quadrangle;
	quadrangle.Print();
	return 0;
}