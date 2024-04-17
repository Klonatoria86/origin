#include"Ground.h"
#include"Verblud.h"

Verblud::Verblud() : Ground(10, "Верблюд"){}
	double Verblud::get_rez(int dis) {
		double rez = 0;
		double x = dis / Speed;
		if (x <= 30)
			return dis / Speed;
		else {
			double z = x / 30;
			int y = static_cast<int>(x) / 30;
			if (z == y) {
				for (int i = 0; i < (y - 1); i++)
				{
					if (i == 0)
						rez = rez + 5;
					else
						rez = rez + 8;
				}
				return (static_cast<double>(dis) / static_cast<double>(Speed)) + rez;
			}
			else {
				for (int i = 0; i < y; i++)
				{
					if (i == 0)
						rez = rez + 5;
					else
						rez = rez + 8;
				}
				return (static_cast<double>(dis) / static_cast<double>(Speed)) + rez;
			}
		}
	}
