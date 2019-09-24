#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @i: integer
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	i %= 10;
	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
