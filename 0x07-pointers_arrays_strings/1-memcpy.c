#include "main.h"

/*
 *This function locates a character in a string 
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		*(dest + i) =  *(src + i);
	}
	return (dest);
}
