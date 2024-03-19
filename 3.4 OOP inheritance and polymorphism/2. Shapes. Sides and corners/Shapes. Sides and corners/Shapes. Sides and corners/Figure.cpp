
#include<iostream>
#include"Figure.h"
std::string Figure::get_name() {
	return name;
}
short Figure::get_sides_count() {
	return sides_count;
}
void Figure::Print() {
	std::cout << name << sides_count << std::endl;
}