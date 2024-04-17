#pragma once
#include<string>
#ifdef CLASS_LIB
#define CLASS_API __declspec(dllimport)
#else
#define CLASS_API __declspec(dllexport)
#endif
class Ground
{
public:	
	CLASS_API std::string get_name();
protected:
	CLASS_API Ground(int, std::string);
	std::string name;
	int Speed = 0;
};
