#include "declare.h"
#include <iostream>

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