#pragma once
#include<string>
#ifdef leaver_dll
	#define LEAVER_LIB __declspec(dllexport)
#else
	#define LEAVER_LIB __declspec(dlliport)
#endif 

class Greeter
{
public:
	LEAVER_LIB std::string greet(std::string);

private:
	std::string name;
};
