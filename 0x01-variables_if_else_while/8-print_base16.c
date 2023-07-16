#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
    int start = 0;
    while (start < 16)
    {

        if (start >= 10)
        {
            putchar(start + 87);
            start++;
            continue;
        }
        putchar(start + 48);
        start++;
    }
    putchar('\n');
    return (0);
}
