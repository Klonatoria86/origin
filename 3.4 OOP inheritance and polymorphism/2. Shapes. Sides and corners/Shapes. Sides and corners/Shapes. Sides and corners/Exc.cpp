#include<stdexcept>
#include"Exc.h"
My_Ex::My_Ex(std::string err) : error(err){}
const char* My_Ex::get_error() {
	return error.c_str();
}