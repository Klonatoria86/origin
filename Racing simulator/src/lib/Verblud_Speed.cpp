#include"Ground.h"
#include"Verblud_Speed.h"

Verblud_Speed::Verblud_Speed() : Ground(40, "Верблюд-быстроход") {}
	double Verblud_Speed::get_rez(int dis) {
		double rez = 0;
		double x = dis / Speed;
		if (x <= 10)
			return dis / Speed;
		else if (x == 20)
			return (dis / Speed) + 5;
		else {
			double z = x / 10;
			int y = static_cast<int>(x) / 10;
			if (z == y) {
				for (int i = 0; i < (y - 1); i++)
				{
					if (i == 0)
						rez = rez + 5;
					else if (i == 1)
						rez = rez + 6.5;
					else if (i > 1)
						rez = rez + 8;
					else {}
				}
				return (static_cast<double>(dis) / static_cast<double>(Speed)) + rez;
			}
			else {
				for (int i = 0; i < y; i++)
				{
					if (i == 0)
						rez = rez + 5;
					else if (i == 1)
						rez = rez + 6.5;
					else if (i > 1)
						rez = rez + 8;
					else {}
				}
				return (static_cast<double>(dis) / static_cast<double>(Speed)) + rez;
			}
		}
	}
