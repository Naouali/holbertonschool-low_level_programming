#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @i: integer
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	_putchar(i % 10 + '0');
	return (i % 10);
}
