#pragma once
#include<stdexcept>
#include<string>

#ifdef dinamic_lib
#define in_LIB __declspec(dllexport)
#else
#define in_LIB __declspec(dllimport)
#endif 
class My_Ex : public std::exception{
public:
	std::string error;
	in_LIB My_Ex (std::string);
	in_LIB const char* get_error();
	in_LIB virtual const char* what() const override;
};
