#include"Ground.h"
#include"Centavr.h"

Centavr::Centavr() : Ground(15, "Кентавр") {}
	double Centavr::get_rez(int dis) {
		double rez = 0;
		double x = dis / Speed;
		if (x <= 8)
			return dis / Speed;
		else {
			double z = x / 8;
			int y = static_cast<int>(x) / 8;
			if (z == y) {
				for (int i = 0; i < (y - 1); i++)
				{
					rez = rez + 2;
				}
				return (static_cast<double>(dis) / static_cast<double>(Speed)) + rez;
			}
			else {
				for (int i = 0; i < y; i++)
				{
					rez = rez + 2;
				}
				return (static_cast<double>(dis) / static_cast<double>(Speed)) + rez;
			}
		}
	}
