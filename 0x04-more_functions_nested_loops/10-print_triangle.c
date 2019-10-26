#include "holberton.h"

/**
 * print_triangle - function to print triangle
 *@size: int size of the trianle
 *Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	_putchar('\n');

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
		if (j <= size - i)
			_putchar(' ');
		else
		{
			_putchar('#');

		}
		}
	}
	_putchar('\n');
}
