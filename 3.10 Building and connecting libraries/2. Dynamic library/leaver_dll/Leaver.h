#pragma once
#include<string>
#ifndef leaver_dll
	#define LEAVER_LIB declspec(dllexmport)
#else
	#define LEAVER_LIB declspec(dllimport)
#endif 

class Greeter
{
public:
	LEAVER_LIB; std::string greet(std::string);

private:
	std::string name;
};
