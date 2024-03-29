#include<iostream>
#include"Right_Triangle.h"
#include"Exc.h"
Right_Triangle::Right_Triangle(short a, short b, short c, short A, short B) : Triangle(a, b, c, A, B, 90) {
	name = "Прямоугольный треугольник: ";
	if (C != 90)
			throw My_Ex("Угол С не равен 90");
}