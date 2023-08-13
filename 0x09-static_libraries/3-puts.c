#include "main.h"

/*
 * puts - prints a string, followed by a new line.
 */



void _puts(char *str)
{
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[length]);
		length++;
	}
}
