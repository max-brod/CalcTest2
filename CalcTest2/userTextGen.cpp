#include "declare.h"
#include <iostream>

void userFirstOpen()
{
	std::cout
		<< "Hello and welcome to the second iteration of my CalcTest program."
		<< "\n"
		<< "You are currently running version 1.1 of CalcTest2."
		<< "\n"
		<< "The README will be included within this program with a later release."
		<< "\n"
		<< "For now, please see GitHub for the changelog."
		<< "\n\n"
		<< "This program has a very simple primary function: to let users utilize basic arithmetic functions."
		<< "\n"
		<< "It's designed to only work with integers right now and functions as a test of my understanding of functions and headers."
		<< "\n\n"
		;
}

void userExitMsg()
{
	std::system("cls")
		;
	std::cout
		<< "Thank you for trying out CalcTest2."
		<< "\n"
		<< "Please stay tuned for the next release to experience feature flights, fixes and more."
		<< "\n\n"
		<< "CalcTest2 is primarily intended for coding experiments and learning and should not be considered production-ready."
		<< "\n"
		<< "Thank you for understanding."
		<< "\n\n"
		<< "Press any button to terminate this application."
		<< "\n"
		;
	std::system("pause >NUL")
		;
}

int userTextGen(int x)
{
	if (x == 1)
	{
		userFirstOpen();
		userInputControl();
		return 0;
	}
	else if (x == 2)
	{
		std::system("cls");
		userInputControl();
		return 0;
	}
	else if (x == 3)
	{
		userExitMsg();
		return 0;
	}
	return 0;
}