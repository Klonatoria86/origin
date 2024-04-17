#include"Air.h"
#include"Cover_sam_let.h"


Cover_sam_let::Cover_sam_let() : Air(10, "Ковёр-самолёт") {}
	double Cover_sam_let::get_rez(int dis) {
		double x;
		if (dis < 1000) {
			x = dis;
		}
		else if (dis < 5000 || dis >= 1000) {
			x = dis * 0.97;
		}
		else if (dis < 10000 || dis >= 5000) {
			x = dis * 0.9;
		}
		else {
			x = dis * 0.95;
		}
		return x / Speed;
	}
