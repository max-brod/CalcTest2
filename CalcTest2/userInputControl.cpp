#include "declare.h"
#include <iostream>

// #define FEATURE_UNFINISHED

void userInputOverview()
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
}

int userInput()
{
	int input{ };
	std::cin
		>> input
		;
	return input;
}

int userIf(int x)
{
	int loop {2};
	int exit {3};
	if (x == 1)
	{
		userAddition();
		userTextGen(loop);
		return 0;
	}
	else if (x == 2)
	{
		userSubtraction();
		userTextGen(loop);
		return 0;
	}
	else if (x == 3)
	{
		userMultiplication();
		userTextGen(loop);
		return 0;
	}
	else if (x == 4)
	{
		userDivision();
		userTextGen(loop);
		return 0;
	}
	else if (x == 5)
	{
		userTextGen(exit);
		return 0;
	}
#ifdef FEATURE_UNFINISHED
	else if (x == R)
	{
		userReadme();
		userTextGen(loop);
		return 0;
	}
#endif FEATURE_UNFINISHED
	else
	{
		std::system("cls");
			std::cout
			<< "This is not an allowed value. Please enter an allowed integer value."
			<< "\n\n"
			;
		userInputOverview();
		userInput();
		return 0;
	}
	return 0;
}