#include "main.h"


/*
 * strncpy - copy source string to destination string
 */


char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	/*Copy at most n characters from source to destination*/
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	/* Fill the remaining space in destination with null bytes*/
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
	return (dest);
}
