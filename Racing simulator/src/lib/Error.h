#pragma once
#include<string>
#ifdef CLASS_LIB
#define CLASS_API __declspec(dllimport)
#else
#define CLASS_API __declspec(dllexport)
#endif
class Error {
private:
	std::string err;
public:
	CLASS_API Error(std::string);
	CLASS_API const char* get_error();
};