#include<iostream>
#include"Functions.h"
#include"Error.h"
#include"Verblud.h"
#include"Verblud_Speed.h"
#include"Centavr.h"
#include"Bot_vezde_hod.h"
#include"Cover_sam_let.h"
#include"Orel.h"
#include"Metla.h"
#include"Ground.h"
#include"Air.h"

std::string foo_Race(int x) {
	if (x == 1) {
		return "Гонка для наземного транспорта. Расстояние: ";
	}
	else if (x == 2) {
		return "Гонка для воздушного транспорта. Расстояние: ";
	}
	else if (x == 3) {
		return "Гонка для наземного и воздушного транспорта. Расстояние: ";
	}
}
std::string foo_Fraza(int x, int race) {
	if (race == 1) {
		switch (x)
		{
		case 1:
			return "Ботинки-вездеходы успешно зарегестриррованы!\n";
			break;
		case 3:
			return "Верблюд успешно зарегестриррован!\n";
			break;
		case 4:
			return "Кентавр успешно зарегестриррован!\n";
			break;
		case 6:
			return "Верблюд-быстроход успешно зарегестриррован!\n";
			break;
		default:
			return "";
			break;
		}
	}
	else if (race == 2) {
		switch (x)
		{
		case 2:
			return "Метла успешно зарегестриррованa!\n";
			break;
		case 5:
			return "Орёл успешно зарегестриррован!\n";
			break;
		case 7:
			return "Ковёр-самолёт успешно зарегестриррован!\n";
			break;
		default:
			return "";
			break;
		}
	}
	else if (race == 3) {
		switch (x)
		{
		case 1:
			return "Ботинки-вездеходы успешно зарегестриррованы!\n";
			break;
		case 2:
			return "Метла успешно зарегестриррованa!\n";
			break;
		case 3:
			return "Верблюд успешно зарегестриррован!\n";
			break;
		case 4:
			return "Кентавр успешно зарегестриррован!\n";
			break;
		case 5:
			return "Орёл успешно зарегестриррован!\n";
			break;
		case 6:
			return "Верблюд-быстроход успешно зарегестриррован!\n";
			break;
		case 7:
			return "Ковёр-самолёт успешно зарегестриррован!\n";
			break;
		default:
			return "";
			break;
		}
	}
}
void foo_foo(int x, int race) {
	if (race == 1) {
		switch (x)
		{
		case 2:
			throw Error("Попытка зарегестрироват неправельный тип транспортного средства!");
			break;
		case 5:
			throw Error("Попытка зарегестрироват неправельный тип транспортного средства!");
			break;
		case 7:
			throw Error("Попытка зарегестрироват неправельный тип транспортного средства!");
			break;
		default:
			break;
		}
	}
	else if (race == 2) {
		switch (x)
		{
		case 1:
			throw Error("Попытка зарегестрироват неправельный тип транспортного средства!");
			break;
		case 3:
			throw Error("Попытка зарегестрироват неправельный тип транспортного средства!");
			break;
		case 4:
			throw Error("Попытка зарегестрироват неправельный тип транспортного средства!");
			break;
		case 6:
			throw Error("Попытка зарегестрироват неправельный тип транспортного средства!");
			break;
		default:
			break;
		}
	}
	else {

	}
}
std::string foo_Igroc(int x, int race) {
	if (race == 1) {
		switch (x)
		{
		case 1:
			return "Ботинки-вездеходы ";
			break;
		case 3:
			return "Верблюд ";
			break;
		case 4:
			return "Кентавр ";
			break;
		case 6:
			return "Верблюд-быстроход ";
			break;
		default:
			return "";
			break;
		}
	}
	else if (race == 2) {
		switch (x)
		{
		case 2:
			return "Метла ";
			break;
		case 5:
			return "Орёл ";
			break;
		case 7:
			return "Ковёр-самолёт ";
			break;
		default:
			return "";
			break;
		}
	}
	else if (race == 3) {
		switch (x)
		{
		case 1:
			return "Ботинки-вездеходы ";
			break;
		case 2:
			return "Метла ";
			break;
		case 3:
			return "Верблюд ";
			break;
		case 4:
			return "Кентавр ";
			break;
		case 5:
			return "Орёл ";
			break;
		case 6:
			return "Верблюд-быстроход ";
			break;
		case 7:
			return "Ковёр-самолёт ";
			break;
		default:
			return "";
			break;
		}
	}
	else {
		return "";
	}
}
std::string foo_Registr(int x) {
	if (x < 2) {
		return "Должно быть зарегестриррованно хотябы 2 транспортных средства: \n1. Зарегестрировать транспорт\nВыберите действие : ";
	}
	else {
		return "1. Зарегестрировать транспорт\n2. Начать гонку\nВыберите действие : ";
	}
}
std::string foo_Fraza_2(int Registr) {
	if (Registr > 0) {
		return  "Зарегестрированные транспортные средства : ";
	}
	else {
		return "";
	}
}
void go(int x, int dis) {
	if (x == 1) {
		Bot_vezde_hod var1;
		std::cout << var1.get_name() << ".   Время: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 2) {
		Metla var1;
		std::cout << var1.get_name() << ".               Время: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 3) {
		Verblud var1;
		std::cout << var1.get_name() << ".             Время: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 4) {
		Centavr var1;
		std::cout << var1.get_name() << ".             Время: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 5) {
		Orel var1;
		std::cout << var1.get_name() << ".                Время: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 6) {
		Verblud_Speed var1;
		std::cout << var1.get_name() << ".   Время: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 7) {
		Cover_sam_let var1;
		std::cout << var1.get_name() << ".       Время: " << var1.get_rez(dis) << std::endl;
	}
	else {

	}
}
double go1(int x, int dis) {
	if (x == 1) {
		Bot_vezde_hod var1;
		double a = var1.get_rez(dis);
		return a;
	}
	else if (x == 2) {
		Metla var1;
		double a = var1.get_rez(dis);
		return a;
	}
	else if (x == 3) {
		Verblud var1;
		double a = var1.get_rez(dis);
		return a;
	}
	else if (x == 4) {
		Centavr var1;
		double a = var1.get_rez(dis);
		return a;
	}
	else if (x == 5) {
		Orel var1;
		double a = var1.get_rez(dis);
		return a;
	}
	else if (x == 6) {
		Verblud_Speed var1;
		double a = var1.get_rez(dis);
		return a;
	}
	else if (x == 7) {
		Cover_sam_let var1;
		double a = var1.get_rez(dis);
		return a;
	}
	else {
		return 0;
	}
}