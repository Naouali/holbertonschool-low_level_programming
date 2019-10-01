#include "holberton.h"

/**
 *puts_half - check the code
 *@str: string
 *Return: Always 0.
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;

	n = (i -1) / 2;
	while (str[i] != '\0')
{
	i++;
}
	if (i % 2 == 0)
{
	str[0] = str[i / 2];
	i++;
	_putchar(str[i / 2]);
}
	else
	str[0] = str[n];
	i++;
	_putchar(str[n]);
}

