#include "declare.h"
#include <iostream>

void userMultiplication()
{
	std::system("cls");
	int firstFactor{};
	int secondFactor{};
	std::cout
		<< "Please enter your first factor."
		<< "\n"
		<< ">>  "
		;
	std::cin
		>> firstFactor
		;
	std::cout
		<< "\n"
		<< "Please enter your second factor."
		<< "\n"
		<< ">>  "
		;
	std::cin
		>> secondFactor
		;
	std::cout
		<< "\n"
		<< "The calculated product of these two integers is equal to "
		<< firstFactor * secondFactor
		<< "."
		<< "\n\n\n\n\n"
		<< "Press any button to return. Your results will not be saved."
		;
	std::system("pause >NUL")
		;
}