#include<iostream>
#include<string>

class Figure {
	short sides_count = 0;
protected:
	Figure(short sides_count) {
		this->sides_count = sides_count;
		name = "Фигура";
	}
	std::string name;
public:
	Figure() : Figure(0) {}
	std::string get_name(std::string name) {
		return name;
	}
	short get_sides_count() {
		return sides_count;
	}
	virtual bool Chek() {
		if (sides_count == 0) {
			return true;
		}
		else
			return false;
	}
	virtual void Print() {
		std::cout << name << std::endl;
		if (Chek()) 
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Количество сторон: " << sides_count << std::endl<<std::endl;
	}
};
class Triangle : public Figure {
protected:
	short a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;

public:
	Triangle(short a, short b, short c, short A, short B, short C) : Figure(3) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		name = get_name("Треугольник: ");
	}
	 bool Chek() override {
		short X = A + B + C;
		if (X == 180 && get_sides_count() == 3)
			return true;
		else
			return false;
	}
	virtual void Print() override {
		std::cout << name << std::endl;
		if (Chek())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
	}
};
class Quadrangle : public Figure {
protected:
	short a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
public:
	Quadrangle(short a, short b, short c, short d, short A, short B, short C, short D) : Figure(4) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		name = name = get_name("Четырёхугольник: ");
	}
	bool Chek() override {
		short X = A + B + C + D;
		if (X == 360 && get_sides_count() == 4)
			return true;
		else
			return false;
	}
	void Print() override{
		std::cout << name << std::endl;
		if (Chek())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		std::cout << "Количество сторон: " << get_sides_count() << std::endl;
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;
	}
};
class Parallelogram : public Quadrangle {
public:
	Parallelogram(short a, short b, short A, short B) : Quadrangle(a, b, c = a, d = b, A, B, C = A, D = B) {
		name = get_name("Параллелограмм: ");
	}
	bool Chek() override {
		if (a == c && b == d && A == C && B == D && get_sides_count() == 4)
			return true;
		else
			return false;
	}
};
class Rectangle : public Parallelogram {
public:
	Rectangle(short a, short b) : Parallelogram(a, b, 90, 90) {
		name = get_name("Прямоугольник: ");
	}
	bool Chek() override {
		if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90 && get_sides_count() == 4)
			return true;
		else
			return false;
	}
};
class Rhombus : public Parallelogram {
public:
	Rhombus(short a, short A, short B) : Parallelogram(a, b = a, A, B) {
		name = get_name("Ромб: ");
	}
	bool Chek() override {
		if (a == c && a == b && a == d  && A == C && B == D && get_sides_count() == 4)
			return true;
		else
			return false;
	}
};
class Square : public Rhombus {
public:
	Square(short a) : Rhombus(a, 90, 90) {
		name = get_name("Квадрат: ");
	}
	bool Chek() override {
		if (a == c && a == b && a == d && A == 90 && B == 90 && C == 90 && D == 90 && get_sides_count() == 4)
			return true;
		else
			return false;
	}
};
class Right_Triangle : public Triangle {
public:
	Right_Triangle(short a, short b, short c, short A, short B) : Triangle(a, b, c, A, B, 90) {
		name = get_name("Прямоугольный треугольник: ");
	}
	bool Chek() override {
		if (C == 90 && get_sides_count() == 3)
			return true;
		else
			return false;
	}
};
class Isosceles_Triangle : public Triangle {
public:
	Isosceles_Triangle(short a, short b, short A, short B) : Triangle(a, b, c = a, A, B, C = A) {
		name = get_name("Равнобедренный треугольник: ");
	}
	bool Chek() override {
		if (a == c && A == C && get_sides_count() == 3)
			return true;
		else
			return false;
	}
};
class Equilateral_Triangle : public Isosceles_Triangle {
public:
	Equilateral_Triangle(short a) : Isosceles_Triangle(a, b = a, 60, 60) {
		name = get_name("Равносторонний треугольник: ");
	}
	bool Chek() override {
		if (a == c && a == b && A == 60 && B == 60 && C == 60 && get_sides_count() == 3)
			return true;
		else
			return false;
	}
};
int main() {
	setlocale(LC_ALL, "Russian");
	Figure 	figure;
	Triangle triangle(10, 20, 30, 50, 60, 70);
	Right_Triangle right_triangle(10, 20, 30, 50, 60);
	Isosceles_Triangle isosceles_triangle(10, 20, 50, 60);
	Equilateral_Triangle equilateral_triangle(30);
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Quadrangle quadrangle_3(10, 20, 30, 40, 90, 90, 90, 90);
	Rectangle rectangle(10, 20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhombus rhombus(30, 30, 40);

	figure.Print();
	Figure* triangle_2 = &triangle;
	triangle_2->Print();
	Figure* right_triangle_2 = &right_triangle;
	right_triangle_2->Print();
	Figure* isosceles_triangle_2 = &isosceles_triangle;
	isosceles_triangle_2->Print();
	Figure* equilateral_triangle_2 = &equilateral_triangle;
	equilateral_triangle_2->Print();
	Figure* quadrangle_2 = &quadrangle;
	quadrangle_2->Print();
	Figure* rectangle_2 = &rectangle;
	rectangle_2->Print();
	Figure* square_2 = &square;
	square_2->Print();
	Figure* parallelogram_2 = &parallelogram;
	parallelogram_2->Print();
	Figure* rhombus_2 = &rhombus;
	rhombus_2->Print();
	Figure* quadrangle_4 = &quadrangle_3;
	quadrangle_4->Print();
	return 0;
}