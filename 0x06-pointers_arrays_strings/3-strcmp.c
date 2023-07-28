#include "main.h"

/**
 *A function that compares two strings
 */

int _strcmp(char *s1, char *s2)
{
    int i = 0, cop = 0;

    while (cop == 0)
    {
        if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
            break;
        cop = *(s1 + i) - *(s2 + i);
        i++;
    }
    return (cop);
}
