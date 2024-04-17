#include"Ground.h"
#include"Bot_vezde_hod.h"

	Bot_vezde_hod::Bot_vezde_hod() : Ground(6, "Ботинки-вездеходы") {}
	double Bot_vezde_hod::get_rez(int dis) {
		double rez = 0;
		double x = dis / Speed;
		if (x <= 60)
			return dis / Speed;
		else {
			double z = x / 60;
			int y = static_cast<int>(x) / 60;
			if (z == y) {
				for (int i = 0; i < (y - 1); i++)
				{
					if (i == 0)
						rez = rez + 10;
					else
						rez = rez + 5;
				}
				return (static_cast<double>(dis) / static_cast<double>(Speed)) + rez;
			}
			else {
				for (int i = 0; i < y; i++)
				{
					if (i == 0)
						rez = rez + 10;
					else
						rez = rez + 5;
				}
				return (static_cast<double>(dis) / static_cast<double>(Speed)) + rez;
			}
		}
	}

