#include "main.h"
#include <stdlib.h>

/*
 * allocates memory using malloc
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
