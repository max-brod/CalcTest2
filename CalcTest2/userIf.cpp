#include "declare.h"
#include <iostream>

int userIf(int x)
{
	if (x == 1)
	{
		userAddition();
		return 0;
	}
	else if (x == 2)
	{
		userSubtraction();
		return 0;
	}
	else if (x == 3)
	{
		userMultiplication();
		return 0;
	}
	else if (x == 4)
	{
		userDivision();
		return 0;
	}
	else if (x == 5)
	{
		return 0;
	}
	return 0;
}