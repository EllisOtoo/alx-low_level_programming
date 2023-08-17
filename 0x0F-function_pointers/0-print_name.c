#include "function_pointers.h"

/*
 * prints a name
 */


void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
