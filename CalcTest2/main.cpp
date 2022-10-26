#include "declare.h"
#include <iostream>

int main()
{
	std::system("@echo off");
	std::system("title CalcTest2 v1.1");
	std::system("color 1f");
	std::system("cls");
	int f {1};
	userFirstOpen();
	userTextGen(f);
	userExitMsg();
	return 0;
}