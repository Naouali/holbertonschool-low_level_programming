#include "holberton.h"
/**
 * print_square - prints a line n'_' long
 *
 *@size: number of squares
 *
 * Return: always void
 */
void print_square(int size)
{
	int i;


	while (size > 0 && i < size)
	{
	_putchar('#');
	i++;

	_putchar('\n');
}
	if (size <= 0)
	_putchar('\n');
}

