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

	i = 0;
	while (size > 0 && i < size)
	{
	_putchar('#');
	i++;
	}
	_putchar('\n');
}

