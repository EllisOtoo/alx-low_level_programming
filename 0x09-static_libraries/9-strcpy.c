#include "main.h"
#include <stdio.h>

/*
 * copies the string pointed to by src 
 * including the terminating  '\0', to the buffer pointed to by dest
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
