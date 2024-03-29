#pragma once
#include<stdexcept>
#include<string>
class My_Ex {
public:
	std::string error;
	My_Ex (std::string);
	const char* get_error();
};
