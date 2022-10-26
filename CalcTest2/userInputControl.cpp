#include "declare.h"
#include <iostream>

// #define FEATURE_UNFINISHED

int userInputControl()
{
	std::cout
		<< "Please enter number [1,2,3,4] to perform a calculation."
		<< "\n"
		<< "Confirm using the ENTER key."
		<< "\n\n"
		<< "1: Addition"
		<< "\n"
		<< "2: Subtraction"
		<< "\n"
		<< "3: Multiplication"
		<< "\n"
		<< "4: Division"
		<< "\n"
		<< "5: Exit"
#ifdef FEATURE_UNFINISHED
		<< "\n\n"
		<< "R: Readme"
#endif FEATURE_UNFINISHED
		<< "\n\n"
		<< ">>  "
		;
	int input{ };
	std::cin
		>> input
		;
	userIf(input);
	return 0;
}

int userIf(int x)
{
	int loop {2};
	int exit {3};
	if (x == 1)
	{
		userAddition();
		userTextGen(loop);
	}
	else if (x == 2)
	{
		userSubtraction();
		userTextGen(loop);
	}
	else if (x == 3)
	{
		userMultiplication();
		userTextGen(loop);
	}
	else if (x == 4)
	{
		userDivision();
		userTextGen(loop);
	}
	else if (x == 5)
	{
		userTextGen(exit);
	}
#ifdef FEATURE_UNFINISHED
	else if (x == R)
	{
		userReadme();
		userTextGen(loop);
	}
#endif FEATURE_UNFINISHED
	return 0;
}