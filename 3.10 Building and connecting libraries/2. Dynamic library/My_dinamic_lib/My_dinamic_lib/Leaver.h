
#pragma once
#include<string>
#ifdef MY_DINAMIC_LIB_EXPORTS
#define LEAVER_LIB __declspec(dllexport)
#else
#define LEAVER_LIB __declspec(dllimport)
#endif 

class Greeter
{
public:
	LEAVER_LIB std::string greet(std::string);

private:
	std::string name;
};
