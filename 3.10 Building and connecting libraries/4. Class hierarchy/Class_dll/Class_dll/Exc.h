#pragma once
#include<stdexcept>
#include<string>
#ifdef CLASS_DLL_EXPORTS
#define IN_API __declspec(dllexport)
#else
#define IN_API __declspec(dllimport)
#endif
class My_Ex : public std::exception{
public:
	std::string error;
	IN_API My_Ex (std::string);
	IN_API const char* get_error();
	IN_API virtual const char* what() const override;
};
