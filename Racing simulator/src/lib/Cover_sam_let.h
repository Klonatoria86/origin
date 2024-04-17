#pragma once
#include"Air.h"
#ifdef CLASS_LIB
#define CLASS_API __declspec(dllimport)
#else
#define CLASS_API __declspec(dllexport)
#endif
class Cover_sam_let : public Air {
public:
	CLASS_API Cover_sam_let();
	CLASS_API double get_rez(int);
};