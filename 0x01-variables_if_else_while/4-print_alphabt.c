#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
    char start = 'a';
    char end = 'z';
    while (start <= end)
    {
        if (start == 'q' || start == 'e')
        {
            start++;
            continue;
        }
        putchar(start);
        start++;
    }
    printf("\n");
    return (0);
}
