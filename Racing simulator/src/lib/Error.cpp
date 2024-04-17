#include"Error.h"


Error::Error(std::string _err) : err(_err) {}
	const char* Error::get_error() {
		return err.c_str();
	}
	