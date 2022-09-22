#include "date.h"
#include <iostream>
#include <algorithm>

Date::Date(std::string date) {

	this->date = date;

}

Date::~Date(){}

void Date::pullApartDate() {

	std::string word;

	try {

		for (auto x : this->date) {
			if (x == '/') {
				dateVector.push_back(word);
				word = "";
			}
			else {
				word = word + x;
			}
		}
		dateVector.push_back(word);
		for (int i = 0; i < dateVector.size(); i++) {

			std::cout << dateVector.at(i) << ' ';

		}

	}
	catch (const std::string error) {

		std::cout << "Error: " << error << std::endl;

	}
	
	
}

void Date::castAndVerifyInteger() {
	
	try {

		for (int i = 0; i < dateVector.size(); i++) {

			int num = atoi(dateVector.at(i).c_str());
			dateInt.push_back(num);

			/*FALTA VERIFICAR SI ES UN ENTERO*/

		}

	}
	catch(const std::string error) {

		std::cout << "Error: " << error << std::endl;

	}

}



void Date::verifyValidDate() {

	if (dateInt[1] > 32 || dateInt[2] > 12) {

		std::cout << "Fecha invalida\n Ingresa dias o meses dentro de lo establecido" << std::endl;

	}
	else {
		std::cout << "Fecha Valida";
	}

}

void Date::verifyLeapYear() {

	if (dateInt[1] == 29 && dateInt[2] == 02 || dateInt[2] == 2) {

	}

}