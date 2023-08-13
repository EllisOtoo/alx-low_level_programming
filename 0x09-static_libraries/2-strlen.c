#include "main.h"

/*
 * return the length of a strin
 **/


int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}
