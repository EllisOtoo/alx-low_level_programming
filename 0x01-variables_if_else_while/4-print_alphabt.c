#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
    char start = 'a';
    char end = 'z';
    for (char c = start; c <= end; c++)
    {
        if (c == 'q' || c == 'e')
        {
            continue;
        }
        putchar(c);
    }
    printf("\n");
    return (0);
}
