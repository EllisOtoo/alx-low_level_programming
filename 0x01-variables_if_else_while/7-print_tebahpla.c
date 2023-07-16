#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
    char start = 'z';
    char end = 'a';
    while (start >= end)
    {
        putchar(start);
        start--;
    }
    printf("\n");
    return (0);
}
