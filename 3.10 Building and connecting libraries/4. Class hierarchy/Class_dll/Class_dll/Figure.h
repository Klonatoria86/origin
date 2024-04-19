#pragma once
#include<string>
#ifdef CLASS_DLL_EXPORTS
#define IN_API __declspec(dllexport)
#else
#define IN_API __declspec(dllimport)
#endif
class Figure {
	short sides_count;
protected:
	Figure(short);
	std::string name;
	bool x;
public:
	IN_API Figure() : Figure(0) {}
	IN_API std::string get_name();
	IN_API short get_sides_count();
	IN_API void Print();
};
