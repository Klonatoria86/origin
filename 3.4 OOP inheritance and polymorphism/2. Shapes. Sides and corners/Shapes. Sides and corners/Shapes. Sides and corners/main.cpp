#include<iostream>
#include<string>
#include"Figure.h"
#include"Triangle.h"
#include"Quadrangle.h"
#include"Parallelogram.h"
#include"Rectangle.h"
#include"Rhombus.h"
#include"Square.h"
#include"Right_Triangle.h"
#include"Isosceles_Triangle.h"
#include"Equilateral_Triangle.h"
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