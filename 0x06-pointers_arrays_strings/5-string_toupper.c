#include "main.h"

/**
 *A fucntion that changes lower case letters to uppper case
 */

char *string_toupper(char *str)
{
	char *pointr = str;
	while (*pointr != '\0')
	{
		if (*pointr >= 'a' && *pointr <= 'z')
		{
			*pointr = *pointr - 'a' + 'A';
		}
		pointr++;
	}
	return (str);
}
