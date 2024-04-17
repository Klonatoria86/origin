#include<iostream>
#include"Ground.h"
#include"Verblud.h"
#include"Verblud_Speed.h"
#include"Centavr.h"
#include"Bot_vezde_hod.h"
#include"Air.h"
#include"Cover_sam_let.h"
#include"Orel.h"
#include"Metla.h"
#include"Error.h"
#include"Functions.h"

#define fa "1. Ботинки-вездеходы\n2. Метла\n3. Верблюд\n4. Кентавр\n5. Орёл\n6. Верблюд-быстроход\n7. Ковёр-самолёт\n0. Закончить регистрацию\nВыберите транспорт или 0 для окончания процесса регистрации: "

int main() {

	setlocale(LC_ALL, "Russian");

	int race, end = 1, start = 1;
	bool a;
	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl;
	int x = 0;
	while (x != 2)
	{
		do
		{
			std::cout << "1." << " Гонка для наземного транспорта. " << std::endl;
			std::cout << "2." << " Гонка для воздушного транспорта. " << std::endl;
			std::cout << "3." << " Гонка для наземного и воздушного транспорта. " << std::endl;
			std::cout << "   Выберите тип гонки: ";
			std::cin >> race;//Тип гонок (Наземная, воздушная, наземно-воздушная)
			if (race == 1)
				a = 1;
			else if (race == 2)
				a = 1;
			else if (race == 3)
				a = 1;
			else {
				std::cout << "Введите 1, 2 или 3 " << std::endl;
				a = 0;
			}
		} while (!a);

		int Distans;
		std::cout << "\nУкажите длинну дистанции (должна быть положительна): ";
		std::cin >> Distans;// Растояние

		int Registr = 0; // Кол-во зарегестрированных игроков

		x = 0;//Выбор на регистрацию или гонку
		while (x != 1)
		{
			try
			{
				std::cout <<"\n" << foo_Registr(Registr);// Сообщение о выборе на регистрацию или гонку
				std::cin >> x;
				if (x != 1) {
					throw Error("Введите 1: ");
				}
				else {

				}
			}
			catch (Error& ex)
			{
				std::cout << ex.get_error() << std::endl;
			}

		}

		std::cout <<"\n" << foo_Fraza(0, race) << foo_Race(race) << Distans << std::endl;
		std::cout << fa;//Сообщение о выборе игрока

		int mass[7] = { 0,0,0,0,0,0,0 };
		int z = 0;
		do
		{
			std::cin >> x;//Выбор игрока
			std::cout << std::endl;
			int i = x;
			while (i == 0)
			{
				try
				{
					std::cout << foo_Registr(Registr);// Сообщение о выборе на регистрацию или гонку
					std::cin >> x;//Выбор игрока
					if (Registr < 2) {
						if (x == 1) {
							std::cout << fa;
							std::cin >> x;//Выбор игрока
							i = x;
						}
						else {
							throw Error("Введите 1: ");
						}
					}
					else {
						if (x == 1) {
							std::cout << fa;
							std::cin >> x;//Выбор игрока
							i = x;
						}
						else if (x == 2)
						{
							i = x;
							x = 0;
						}
						else {
							throw  Error("Введите 1 или 2: ");
						}
					}

				}
				catch (Error& ex)
				{
					std::cout << ex.get_error() << std::endl;
					i = x;
				}
			}
			if (x != 0) {
				++Registr;
				if (race == 1) {
					switch (z)
					{
					case 0:
						try
						{
							foo_foo(x, race);
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(x, race) << std::endl;
							std::cout << fa;
							mass[z] = x;
							++z;
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(x, race) << std::endl;
							std::cout << fa;
						}
						break;
					case 1:
						try
						{
							if (mass[0] == x) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else {
								foo_foo(x, race);
								std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
								std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(x, race) << std::endl;
								std::cout << fa;
								mass[z] = x;
								++z;
							}
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(x, race) << std::endl;
							std::cout << fa;
						}
						
						break;
					case 2:
						try
						{
							if (x == mass[0]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[1]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else {
								foo_foo(x, race);
								std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
								std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(x, race) << std::endl;
								std::cout << fa;
								mass[z] = x;
								++z;
							}
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(x, race) << std::endl;
							std::cout << fa;
						}						
						break;
					case 3:
						try
						{
							if (x == mass[0]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[1]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[2]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else {
								foo_foo(x, race);
								std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
								std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(x, race) << std::endl;
								std::cout << fa;
								mass[z] = x;
								++z;
							}
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(x, race) << std::endl;
							std::cout << fa;
						}
						break;
					default:
						std::cout << "Максимальное кол-во наземных участников гонки 4.\n\tГонка!!!" << std::endl;
						x = 0;
						break;
					}
				}
				else if (race == 2) {
					switch (z)
					{
					case 0:
						try
						{
							foo_foo(x, race);
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(x, race) << std::endl;
							std::cout << fa;
							mass[z] = x;
							++z;
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(x, race) << std::endl;
							std::cout << fa;
						}
						break;
					case 1:
						try
						{
							if (mass[0] == x) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else {
								foo_foo(x, race);
								std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
								std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(x, race) << std::endl;
								std::cout << fa;
								mass[z] = x;
								++z;
							}
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << std::endl;
							std::cout << fa;
						}						
						break;
					case 2:
						try
						{
							if (mass[0] == x) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (mass[1] == x) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else {
								foo_foo(x, race);
								std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
								std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(x, race) << std::endl;
								std::cout << fa;
								mass[z] = x;
								++z;
							}
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << std::endl;
							std::cout << fa;
						}						
						break;
					default:
						std::cout << "Максимальное кол-во воздушных участников гонки 3.\n\tГонка!!!" << std::endl;
						x = 0;
						break;
					}
				}
				else {
					switch (z)
					{
					case 0:						
						foo_foo(x, race);
						std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
						std::cout << foo_Fraza_2(Registr) << foo_Igroc(x, race) << std::endl;
						std::cout << fa;
						mass[z] = x;
						++z;											
						break;
					case 1:
						try
						{
							if (x == mass[0]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else {

								foo_foo(x, race);
								std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
								std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(x, race) << std::endl;
								std::cout << fa;
								mass[z] = x;
								++z;
							}
						}
						catch (Error& ex)
						{
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << std::endl;
							std::cout << fa;
						}
						break;
					case 2:
						try
						{
							if (mass[0] == x) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (mass[1] == x) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else {
								foo_foo(x, race);
								std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
								std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(x, race) << std::endl;
								std::cout << fa;
								mass[z] = x;
								++z;
							}
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << std::endl;
							std::cout << fa;
						}						
						break;
					case 3:
						try
						{
							if (x == mass[0]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[1]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[2]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
									std::cout << fa;
								}
							}
							else {
								foo_foo(x, race);
								std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
								std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(x, race) << std::endl;
								std::cout << fa;
								mass[z] = x;
								++z;
							}
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << std::endl;
							std::cout << fa;
						}						
						break;
					case 4:
						try
						{
							if (x == mass[0]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[1]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[2]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[3]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << std::endl;
									std::cout << fa;
								}
							}
							else {
								foo_foo(x, race);
								std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
								std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(x, race) << std::endl;
								std::cout << fa;
								mass[z] = x;
								++z;
							}
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << std::endl;
							std::cout << fa;
						}						
						break;
					case 5:
						try
						{
							if (x == mass[0]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[1]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[2]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[3]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[4]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << std::endl;
									std::cout << fa;
								}
							}
							else {
								foo_foo(x, race);
								std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
								std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << foo_Igroc(x, race) << std::endl;
								std::cout << fa;
								mass[z] = x;
								++z;
							}
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << std::endl;
							std::cout << fa;
						}						
						break;
					case 6:
						try
						{
							if (x == mass[0]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << foo_Igroc(mass[5], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[1]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << foo_Igroc(mass[5], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[2]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << foo_Igroc(mass[5], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[3]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << foo_Igroc(mass[5], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[4]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << foo_Igroc(mass[5], race) << std::endl;
									std::cout << fa;
								}
							}
							else if (x == mass[5]) {
								try
								{
									throw Error(" уже зарегестрирован!");
								}
								catch (Error& ex)
								{
									std::cout << foo_Igroc(x, race) << ex.get_error() << std::endl;
									std::cout << foo_Race(race) << Distans << std::endl;
									std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << foo_Igroc(mass[5], race) << std::endl;
									std::cout << fa;
								}
							}
							else {
								foo_foo(x, race);
								std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
								std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << foo_Igroc(mass[5], race) << foo_Igroc(x, race) << std::endl;
								std::cout << fa;
								mass[z] = x;
								++z;
							}
						}
						catch (Error& ex)
						{
							std::cout << ex.get_error() << std::endl;
							std::cout << foo_Fraza(x, race) << foo_Race(race) << Distans << std::endl;
							std::cout << foo_Fraza_2(Registr) << foo_Igroc(mass[0], race) << foo_Igroc(mass[1], race) << foo_Igroc(mass[2], race) << foo_Igroc(mass[3], race) << foo_Igroc(mass[4], race) << foo_Igroc(mass[5], race) << std::endl;
							std::cout << fa;
						}						
						break;
					default:
						std::cout << "Максимальное кол-во наземно-воздушных участников гонки 7.\n\tГонка!!!" << std::endl;
						x = 0;
						break;
					}
				}
			}
			else {

			}

		} while (x != 0);
		std::cout << "Результаты гонки: " << std::endl;

		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				double a, b;
				a = go1(mass[j], Distans);
				b = go1(mass[j + 1], Distans);
				if (a > b) {
					std::swap(mass[j], mass[j + 1]);
				}
			}
		}

		go(mass[0], Distans);
		go(mass[1], Distans);
		go(mass[2], Distans);
		go(mass[3], Distans);
		go(mass[4], Distans);
		go(mass[5], Distans);
		go(mass[6], Distans);

		std::cout << "\n1: Провести ещё одну гонку\n2: Выйти\nВыберите действие: ";
		std::cin >> x;
	}

	return 0;
}