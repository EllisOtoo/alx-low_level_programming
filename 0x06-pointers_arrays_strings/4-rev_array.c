#include "main.h"

/*
 * A fucntion that reverses the content of a array
 */


void reverse_array(int *a, int n)
{
	int lf = 0;
	int rt = n - 1;

	while (lf < rt)
	{
		int temp = a[lf];

		a[lf] = a[rt];
		a[rt] = temp;

		lf++;
		rt--;
	}
}
