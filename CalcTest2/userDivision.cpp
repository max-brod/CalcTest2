#include "declare.h"
#include <iostream>

void userDivision()
{
	std::system("cls");
	int dividend{};
	int divisor{};
	std::cout
		<< "Please enter your dividend."
		<< "\n"
		<< ">>  "
		;
	std::cin
		>> dividend
		;
	std::cout
		<< "\n"
		<< "Please enter your divisor."
		<< "\n"
		<< ">>  "
		;
	std::cin
		>> divisor
		;
	std::cout
		<< "\n"
		<< "The calculated quotient of these two integers is equal to "
		<< dividend / divisor
		<< "."
		<< "\n\n\n\n\n"
		<< "Press any button to return. Your results will not be saved."
		;
	std::system("pause >NUL")
		;
}