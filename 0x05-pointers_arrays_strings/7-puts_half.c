#include "holberton.h"

/**
 *puts_half - check the code
 *@str: string
 *Return: Always 0.
 */

void puts_half(char *str)
{
	int j, i, n;


	i = 0;


	while (str[i] != '\0')
{
	i++;
}


	if (i % 2 == 0)
{
	for (j = i / 2; j < i + 1; j++)
	_putchar(str[j]);
}
	else
{
	for (n = (i - 1) / 2; n < i + 1; n++)
		_putchar(str[n]);
}

	_putchar('\n');
}
