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

#define fa "1. �������-���������\n2. �����\n3. �������\n4. �������\n5. ���\n6. �������-���������\n7. ����-������\n0. ��������� �����������\n�������� ��������� ��� 0 ��� ��������� �������� �����������: "

int main() {

	setlocale(LC_ALL, "Russian");

	int race, end = 1, start = 1;
	bool a;
	std::cout << "����� ���������� � �������� ���������!" << std::endl;
	int x = 0;
	while (x != 2)
	{
		do
		{
			std::cout << "1." << " ����� ��� ��������� ����������. " << std::endl;
			std::cout << "2." << " ����� ��� ���������� ����������. " << std::endl;
			std::cout << "3." << " ����� ��� ��������� � ���������� ����������. " << std::endl;
			std::cout << "   �������� ��� �����: ";
			std::cin >> race;//��� ����� (��������, ���������, �������-���������)
			if (race == 1)
				a = 1;
			else if (race == 2)
				a = 1;
			else if (race == 3)
				a = 1;
			else {
				std::cout << "������� 1, 2 ��� 3 " << std::endl;
				a = 0;
			}
		} while (!a);

		int Distans;
		std::cout << "\n������� ������ ��������� (������ ���� ������������): ";
		std::cin >> Distans;// ���������

		int Registr = 0; // ���-�� ������������������ �������

		x = 0;//����� �� ����������� ��� �����
		while (x != 1)
		{
			try
			{
				std::cout <<"\n" << foo_Registr(Registr);// ��������� � ������ �� ����������� ��� �����
				std::cin >> x;
				if (x != 1) {
					throw Error("������� 1: ");
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
		std::cout << fa;//��������� � ������ ������

		int mass[7] = { 0,0,0,0,0,0,0 };
		int z = 0;
		do
		{
			std::cin >> x;//����� ������
			std::cout << std::endl;
			int i = x;
			while (i == 0)
			{
				try
				{
					std::cout << foo_Registr(Registr);// ��������� � ������ �� ����������� ��� �����
					std::cin >> x;//����� ������
					if (Registr < 2) {
						if (x == 1) {
							std::cout << fa;
							std::cin >> x;//����� ������
							i = x;
						}
						else {
							throw Error("������� 1: ");
						}
					}
					else {
						if (x == 1) {
							std::cout << fa;
							std::cin >> x;//����� ������
							i = x;
						}
						else if (x == 2)
						{
							i = x;
							x = 0;
						}
						else {
							throw  Error("������� 1 ��� 2: ");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
						std::cout << "������������ ���-�� �������� ���������� ����� 4.\n\t�����!!!" << std::endl;
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
						std::cout << "������������ ���-�� ��������� ���������� ����� 3.\n\t�����!!!" << std::endl;
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
									throw Error(" ��� ���������������!");
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
						std::cout << "������������ ���-�� �������-��������� ���������� ����� 7.\n\t�����!!!" << std::endl;
						x = 0;
						break;
					}
				}
			}
			else {

			}

		} while (x != 0);
		std::cout << "���������� �����: " << std::endl;

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

		std::cout << "\n1: �������� ��� ���� �����\n2: �����\n�������� ��������: ";
		std::cin >> x;
	}

	return 0;
}