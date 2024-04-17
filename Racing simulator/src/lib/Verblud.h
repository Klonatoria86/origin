#pragma once
#include"Ground.h"
#ifdef CLASS_LIB
#define CLASS_API __declspec(dllimport)
#else
#define CLASS_API __declspec(dllexport)
#endif
class Verblud : public Ground {
public:
	CLASS_API Verblud();
	CLASS_API double get_rez(int);
		
};
