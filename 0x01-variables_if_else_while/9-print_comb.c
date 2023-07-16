#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
    int start = 0;
    while (start < 10)
    {
        putchar(start + 48);
        if (start == 9)
        {
            start++;
        }
        else
        {

            putchar(',');
	    putchar(' ');
    	}
        start++;
    }
    return (0);
}
