#include "declare.h"
#include <iostream>

int main()
{
	userFirstOpen();

	int input{ userGetInput() };

	userIf(input);

	userExitMsg();

	return 0;
}