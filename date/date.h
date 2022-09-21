#pragma once
#include <iostream>
#include <vector> 

class Date
{

	private:

		std::string date;

		std::string vector[2];

		int array[2];

	public:

		Date(std::string);

		~Date();

		void pullApartDate();

		void castAndVerifyInteger();

		void verifyValidDate();

		void verifyLeapYear();





};

