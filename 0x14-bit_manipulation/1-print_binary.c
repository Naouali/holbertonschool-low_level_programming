#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - function to print binary
 * @n: integer
 * return: binary
 */

void print_binary(unsigned long int n)
{

	if (n <= 1)
		_putchar(n + '0');
	else
	while (n)
	{
		_putchar((n & 1) + '0');
		n = n >> 1;
	}
}

