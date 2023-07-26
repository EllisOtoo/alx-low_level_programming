#include "main.h"

/**
*the function below swaps the values of two integers
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
