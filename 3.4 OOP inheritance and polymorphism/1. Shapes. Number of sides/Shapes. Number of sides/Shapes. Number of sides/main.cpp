#include<iostream>
#include<string>

class Figure {
	short sides_count;
protected:
	std::string name;
	Figure(short sides_count) {
		name = "Фигура: ";
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
		name = "Треугольник: ";
	}
};
class Quadrangle : public Figure {
public:
	Quadrangle() : Figure(4) {
		name = "Прямоугольник: ";
	}
};
int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Количество сторон:" << std::endl;
	Figure figure;
	figure.Print();
	Triangle triangle;
	triangle.Print();
	Quadrangle quadrangle;
	quadrangle.Print();
	return 0;
}