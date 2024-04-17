#include<string>
#include"Air.h"


Air::Air(int Speed, std::string name) {
		this->Speed = Speed;
		this->name = name;
	}
	std::string Air::get_name() {
		return name;
	}