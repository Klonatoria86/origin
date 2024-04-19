#include"Rectangle.h"
#include"Exc.h"
Rectangle::Rectangle(short a, short b) : Parallelogram(a, b, 90, 90) {
	if (A == 90 && B == 90 && C == 90 && D == 90 && a == c && b == d) {
		name = "Прямоугольник: ";
	}
	else {
		throw My_Ex("Cтороны a,c и b,d попарно не равны и все углы не равны 90");
	}
}