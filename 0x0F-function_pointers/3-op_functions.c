#include "3-calc.h"


/*
 * adds two numbers.
 */


int op_add(int a, int b)
{
	return (a + b);
}

/*
 * op_sub - subctracts two numbers.
 */


int op_sub(int a, int b)
{
	return (a - b);
}

/*
 * multiplies two numbers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/*
 * divides two numbers.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/*
 *  calculates the modulo of two numbers.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
