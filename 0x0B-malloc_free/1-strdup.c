#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
 * function that returns a pointer to duplicate string of str
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
