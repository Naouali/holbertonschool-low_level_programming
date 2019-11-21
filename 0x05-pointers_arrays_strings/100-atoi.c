#include "holberton.h"
#include <stdio.h>

/**
 *_atoi - function to convert a string to an integer
 *@s: string
 * Return: converted int
 */

int _atoi(char *s)

{
    int res = 0;
    int i = 0;
    int sign = 1;
    int j ;

    while ((*(s + i) <'0' || *(s + i) < '9') && (*(s + i) != '\0'))
    {
        if (*(s + i) == '-')
        {
            sign = sign * -1;
            i++;
        }
    }
    j = 0;
    while (*(s + j) >= '0' && *(s + j) <= '9')
    {
        res = sign * res * 10 + s[j] - '0';
        j++;
    }
    return (res);
}
