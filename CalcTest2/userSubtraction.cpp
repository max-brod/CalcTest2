#include "declare.h"
#include <iostream>

void userSubtraction()
{
	std::system("cls");
	int minuend{};
	int subtrahend{};
	std::cout
		<< "Please enter your minuend."
		<< "\n"
		<< ">>  "
		;
	std::cin
		>> minuend
		;
	std::cout
		<< "\n"
		<< "Please enter your subtrahend."
		<< "\n"
		<< ">>  "
		;
	std::cin
		>> subtrahend
		;
	std::cout
		<< "\n"
		<< "The calculated difference between these two integers is equal to "
		<< minuend - subtrahend
		<< "."
		<< "\n\n\n\n\n"
		<< "Press any button to return. Your results will not be saved."
		;
	std::system("pause >NUL")
		;
}