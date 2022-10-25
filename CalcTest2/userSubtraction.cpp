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
		<< "\n\n"
		<< "The calculated difference between these two integers is equal to "
		<< minuend - subtrahend
		<< "."
		<< "\n"
		<< "Press any button to continue."
		;
	std::system("pause >NUL")
		;
}