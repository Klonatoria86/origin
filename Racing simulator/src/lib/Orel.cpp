#include"Air.h"
#include"Orel.h"


Orel::Orel() : Air(8, "���") {}
	double Orel::get_rez(int dis) {
		double x = dis * 0.94;
		return x / Speed;
	}
