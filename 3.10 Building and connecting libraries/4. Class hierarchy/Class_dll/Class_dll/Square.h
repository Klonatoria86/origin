#pragma once
#include"Rhombus.h"
#ifdef CLASS_DLL_EXPORTS
#define IN_API __declspec(dllexport)
#else
#define IN_API __declspec(dllimport)
#endif
class Square : public Rhombus {
public:
	IN_API Square(short);
};
