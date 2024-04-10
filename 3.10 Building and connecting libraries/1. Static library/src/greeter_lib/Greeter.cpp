#include"Greeter.h"
std::string Greeter::greet(std::string name) {
	this->name = name;
	return name;
}
