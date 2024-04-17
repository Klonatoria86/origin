#pragma once
#include"Ground.h"
#ifdef CLASS_LIB
#define CLASS_API __declspec(dllimport)
#else
#define CLASS_API __declspec(dllexport)
#endif
class Bot_vezde_hod : public Ground {
public:
	CLASS_API Bot_vezde_hod();
	CLASS_API double get_rez(int dis);
};
