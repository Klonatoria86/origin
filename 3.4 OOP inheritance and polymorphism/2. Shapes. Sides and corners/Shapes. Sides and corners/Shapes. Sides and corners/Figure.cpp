
#include<iostream>
#include"Figure.h"
Figure::Figure(short sides_count) {
	this->sides_count = sides_count;
}
std::string Figure::get_name() {
	return name;
}
short Figure::get_sides_count() {
	return sides_count;
}
void Figure::Print() {
	std::cout << name << sides_count << std::endl;
}