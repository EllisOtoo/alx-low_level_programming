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
        putchar(48 + start);
        start++;
    }
    putchar('\n');
    return (0);
}
