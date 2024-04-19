#include<iostream>
#include<string>
#include<stdexcept>
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
#include"Exc.h"

int main() {
	setlocale(LC_ALL, "Russian");
	try
	{
		Triangle triangle(10, 20, 30, 50, 60, 70);
		triangle.Print();
	}
	catch (const std::exception& ex)
	{
		std::cout << "������ �������� ������.�������: " << ex.what() << std::endl << std::endl;
	}
	try
	{
		Right_Triangle right_triangle(10, 20, 30, 50, 40);
		right_triangle.Print();
	}
	catch (const std::exception& ex)
	{
		std::cout << "������ �������� ������.�������: " << ex.what() << std::endl << std::endl;
	}
	try
	{
		Isosceles_Triangle isosceles_triangle(10, 20, 50, 80);
		isosceles_triangle.Print();
	}
	catch (const std::exception& ex)
	{
		std::cout << "������ �������� ������.�������: " << ex.what() << std::endl << std::endl;
	}
	try
	{
		Equilateral_Triangle equilateral_triangle(30);
		equilateral_triangle.Print();
	}
	catch (const std::exception& ex)
	{
		std::cout << "������ �������� ������.�������: " << ex.what() << std::endl << std::endl;
	}
	try
	{
		Quadrangle quadrangle(10, 20, 30, 40, 90, 90, 90, 90);
		quadrangle.Print();
	}
	catch (const std::exception& ex)
	{
		std::cout << "������ �������� ������.�������: " << ex.what() << std::endl << std::endl;
	}
	try
	{
		Rectangle rectangle(10, 20);
		rectangle.Print();
	}
	catch (const std::exception& ex)
	{
		std::cout << "������ �������� ������.�������: " << ex.what() << std::endl << std::endl;
	}
	try
	{
		Square square(20);
		square.Print();
	}
	catch (const std::exception& ex)
	{
		std::cout << "������ �������� ������.�������: " << ex.what() << std::endl << std::endl;
	}
	try
	{
		Parallelogram parallelogram(20, 30, 90, 90);
		parallelogram.Print();
	}
	catch (const std::exception& ex)
	{
		std::cout << "������ �������� ������.�������: " << ex.what() << std::endl << std::endl;
	}
	try
	{
		Rhombus rhombus(30, 45, 135);
		rhombus.Print();
	}
	catch (const std::exception& ex)
	{
		std::cout << "������ �������� ������.�������: " << ex.what() << std::endl << std::endl;
	}	
system("pause");
	return 0;
}