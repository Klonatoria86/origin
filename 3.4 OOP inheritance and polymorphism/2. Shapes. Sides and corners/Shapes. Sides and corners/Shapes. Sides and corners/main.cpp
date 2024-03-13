#include<iostream>
#include<string>

class Figure {
	short sides_count;
protected:
	Figure(short sides_count) {
		this->sides_count = sides_count;
	}
	std::string name;
public:
	Figure() : Figure(0) {}
	std::string get_name() {
		return name;
	}
	short get_sides_count() {
		return sides_count;
	}
	void Print() {
		std::cout << name << sides_count << std::endl;
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
		name = "Треугольник: ";
	}
	void Print() {
		std::cout << name << std::endl;
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl<< std::endl;
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
		name = "Четырёхугольник: ";
	}
	void Print() {
		std::cout << name << std::endl;
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;
	}
};
class Parallelogram : public Quadrangle {
public:
	Parallelogram(short a, short b,  short A,short B) : Quadrangle(a, b, c=a,d=b, A, B, C=A, D=B) {
		name = "Параллелограмм: ";
	}
};
class Rectangle : public Parallelogram {
public:
	Rectangle(short a, short b) : Parallelogram(a, b, 90, 90) {
		name = "Прямоугольник: ";
	}
};
class Rhombus : public Parallelogram {
public:
	Rhombus(short a, short A, short B) : Parallelogram(a, b=a, A, B) {
		name = "Ромб: ";
	}
};
class Square : public Rhombus {
public:
	Square(short a) : Rhombus(a, 90, 90) {
		name = "Квадрат: ";
	}
};
class Right_Triangle : public Triangle {
public:
	Right_Triangle(short a, short b, short c, short A, short B) : Triangle(a, b, c, A, B, 90) {
		name = "Прямоугольный треугольник: ";
	}
};
class Isosceles_Triangle : public Triangle {
public:
	Isosceles_Triangle(short a, short b, short A, short B) : Triangle(a, b, c = a, A, B, C = A) {
		name = "Равнобедренный треугольник: ";
	}
};
class Equilateral_Triangle : public Isosceles_Triangle {
public:
	Equilateral_Triangle(short a) : Isosceles_Triangle(a,b=a,60,60){
		name = "Равносторонний треугольник: ";
	}
};
int main() {
	setlocale(LC_ALL, "Russian");
	Triangle triangle(10,20,30,50,60,70);
	triangle.Print();
	Right_Triangle right_triangle(10,20,30,50,60);
	right_triangle.Print();
	Isosceles_Triangle isosceles_triangle(10, 20, 50, 60);
	isosceles_triangle.Print();
	Equilateral_Triangle equilateral_triangle(30);
	equilateral_triangle.Print();
	Quadrangle quadrangle(10, 20, 30, 40, 50, 60,70,80);
	quadrangle.Print();
	Rectangle rectangle(10, 20);
	rectangle.Print();
	Square square(20);
	square.Print();
	Parallelogram parallelogram(20, 30, 30, 40);
	parallelogram.Print();
	Rhombus rhombus(30, 30, 40);
	rhombus.Print();
	
	return 0;
}