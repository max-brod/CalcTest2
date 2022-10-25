#include "declare.h"
#include <iostream>

int userGetInput()
{
	std::cout
		<< "Please enter number [1,2,3,4,5], corresponding to the type of calculation you wish to perform."
		<< "\n"
		<< "Confirm using the ENTER key."
		<< "\n\n"
		<< "1. Addition"
		<< "\n"
		<< "2. Subtraction"
		<< "\n"
		<< "3. Multiplication"
		<< "\n"
		<< "4. Division"
		<< "\n"
		<< "5. Exit"
		<< "\n"
		<< ">>  "
		;
	int input{ };
	std::cin
		>> input
		;
	return input;
}