#include "main.h"

/**
* a function that returns the length of a string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}
