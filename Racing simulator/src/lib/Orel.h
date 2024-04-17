#pragma once
#include"Air.h"
#ifdef CLASS_LIB
#define CLASS_API __declspec(dllimport)
#else
#define CLASS_API __declspec(dllexport)
#endif

class Orel : public Air {
public:
	CLASS_API Orel();
	CLASS_API double get_rez(int);
};