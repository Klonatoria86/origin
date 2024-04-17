#include"Air.h"
#include"Metla.h"


Metla::Metla() : Air(20, "Метла") {}
	double Metla::get_rez(int dis) {
		int z = dis / 1000;
		double c = 1;
		for (int i = 0; i < z; i++)
		{
			c = c - 0.01;
		}
		double x = dis * c;
		return x / Speed;
	}
