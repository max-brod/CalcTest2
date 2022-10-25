#include "declare.h"
#include <iostream>

void userAddition()
{
	std::system("cls");
	int firstSummand{};
	int secondSummand{};
	std::cout
		<< "Please enter your first summand."
		<< "\n"
		<< ">>  "
		;
	std::cin
		>> firstSummand
		;
	std::cout
		<< "\n"
		<< "Please enter your second summand."
		<< "\n"
		<< ">>  "
		;
	std::cin
		>> secondSummand
		;
	std::cout
		<< "\n\n"
		<< "The calculated combined sum between these two integers is equal to "
		<< firstSummand + secondSummand
		<< "."
		<< "\n"
		<< "Press any button to continue."
		;
	std::system("pause >NUL")
		;
}