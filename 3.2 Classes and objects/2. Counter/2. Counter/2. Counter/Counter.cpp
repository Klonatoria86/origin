#pragma once
#include<iostream>
#include"Counter.h"
	void Counter::Increase1() {
		meaning++;
	}
	void Counter::Decrease1() {
		meaning--;
	}
	void Counter::Present_Value() {
		std::cout << meaning << std::endl;
	}
	void Counter::initial_Value1() {
		meaning = 1;
	}
	void Counter::initialized_Value(int var) {
		meaning = var;
	}
