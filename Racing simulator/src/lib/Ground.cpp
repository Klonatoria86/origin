#include"Ground.h"
std::string Ground::get_name() {
		return name;
	}
Ground::Ground(int Speed, std::string name) {
		this->Speed = Speed;
		this->name = name;
	}