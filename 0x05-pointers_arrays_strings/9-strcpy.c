#include "main.h"
#include <stdio.h>

/**
*A function that copies the string pointed to by src
*/
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
