#include "date.h"
#include <iostream>

Date::Date(std::string date) {

	this->date = date;

}

Date::~Date(){}

void Date::pullApartDate() {

	std::string word;

	int i = 0;
	
	for ( auto x : this->date ) {
		if (x == '/') {
			this->vector[i] = word.c_str();
			std::cout << this->vector[i] << std::endl;
			i++;
			word = "";
		}
		else {
			word = word + x;
		}
	}
	this->vector[i] = word.c_str();
	std::cout << this->vector[i] << std::endl;
}

void Date::castAndVerifyInteger() {

	for (int i = 0; i < 2; i++) {

		if(vector[i])

	}

}
