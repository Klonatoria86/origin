#pragma once
#include"Parallelogram.h"
#ifdef CLASS_DLL_EXPORTS
#define IN_API __declspec(dllexport)
#else
#define IN_API __declspec(dllimport)
#endif
class Rhombus : public Parallelogram {
public:
	IN_API Rhombus(short, short, short);
};
