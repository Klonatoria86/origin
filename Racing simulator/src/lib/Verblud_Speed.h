#pragma once
#include"Ground.h"
#ifdef CLASS_LIB
#define CLASS_API __declspec(dllimport)
#else
#define CLASS_API __declspec(dllexport)
#endif
class Verblud_Speed : public Ground {
public:
	CLASS_API Verblud_Speed();
	CLASS_API double get_rez(int);
};
