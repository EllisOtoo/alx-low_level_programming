#include "main.h"

/**
* shows 1 if the input is uppercase character.Another case shows 0
*/


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
