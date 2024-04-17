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
		return "����� ��� ��������� ����������. ����������: ";
	}
	else if (x == 2) {
		return "����� ��� ���������� ����������. ����������: ";
	}
	else if (x == 3) {
		return "����� ��� ��������� � ���������� ����������. ����������: ";
	}
}
std::string foo_Fraza(int x, int race) {
	if (race == 1) {
		switch (x)
		{
		case 1:
			return "�������-��������� ������� �����������������!\n";
			break;
		case 3:
			return "������� ������� ����������������!\n";
			break;
		case 4:
			return "������� ������� ����������������!\n";
			break;
		case 6:
			return "�������-��������� ������� ����������������!\n";
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
			return "����� ������� ����������������a!\n";
			break;
		case 5:
			return "��� ������� ����������������!\n";
			break;
		case 7:
			return "����-������ ������� ����������������!\n";
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
			return "�������-��������� ������� �����������������!\n";
			break;
		case 2:
			return "����� ������� ����������������a!\n";
			break;
		case 3:
			return "������� ������� ����������������!\n";
			break;
		case 4:
			return "������� ������� ����������������!\n";
			break;
		case 5:
			return "��� ������� ����������������!\n";
			break;
		case 6:
			return "�������-��������� ������� ����������������!\n";
			break;
		case 7:
			return "����-������ ������� ����������������!\n";
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
			throw Error("������� ��������������� ������������ ��� ������������� ��������!");
			break;
		case 5:
			throw Error("������� ��������������� ������������ ��� ������������� ��������!");
			break;
		case 7:
			throw Error("������� ��������������� ������������ ��� ������������� ��������!");
			break;
		default:
			break;
		}
	}
	else if (race == 2) {
		switch (x)
		{
		case 1:
			throw Error("������� ��������������� ������������ ��� ������������� ��������!");
			break;
		case 3:
			throw Error("������� ��������������� ������������ ��� ������������� ��������!");
			break;
		case 4:
			throw Error("������� ��������������� ������������ ��� ������������� ��������!");
			break;
		case 6:
			throw Error("������� ��������������� ������������ ��� ������������� ��������!");
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
			return "�������-��������� ";
			break;
		case 3:
			return "������� ";
			break;
		case 4:
			return "������� ";
			break;
		case 6:
			return "�������-��������� ";
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
			return "����� ";
			break;
		case 5:
			return "��� ";
			break;
		case 7:
			return "����-������ ";
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
			return "�������-��������� ";
			break;
		case 2:
			return "����� ";
			break;
		case 3:
			return "������� ";
			break;
		case 4:
			return "������� ";
			break;
		case 5:
			return "��� ";
			break;
		case 6:
			return "�������-��������� ";
			break;
		case 7:
			return "����-������ ";
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
		return "������ ���� ������������������ ������ 2 ������������ ��������: \n1. ���������������� ���������\n�������� �������� : ";
	}
	else {
		return "1. ���������������� ���������\n2. ������ �����\n�������� �������� : ";
	}
}
std::string foo_Fraza_2(int Registr) {
	if (Registr > 0) {
		return  "������������������ ������������ �������� : ";
	}
	else {
		return "";
	}
}
void go(int x, int dis) {
	if (x == 1) {
		Bot_vezde_hod var1;
		std::cout << var1.get_name() << ".   �����: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 2) {
		Metla var1;
		std::cout << var1.get_name() << ".               �����: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 3) {
		Verblud var1;
		std::cout << var1.get_name() << ".             �����: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 4) {
		Centavr var1;
		std::cout << var1.get_name() << ".             �����: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 5) {
		Orel var1;
		std::cout << var1.get_name() << ".                �����: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 6) {
		Verblud_Speed var1;
		std::cout << var1.get_name() << ".   �����: " << var1.get_rez(dis) << std::endl;
	}
	else if (x == 7) {
		Cover_sam_let var1;
		std::cout << var1.get_name() << ".       �����: " << var1.get_rez(dis) << std::endl;
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