#include "main.h"

/**
*a function that prints a string, followed by a new line  to standard output
*/
void _puts(char *str)
{
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(str[length]);
		length++;
	}
}
