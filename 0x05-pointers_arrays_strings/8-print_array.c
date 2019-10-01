#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)

{
	int i;

	i = 0;

	while (i < n)
{
	if (i + 1 != n)
	printf("%d, ", a[i++]);
	else
	printf("%d", a[i++]);
}
	_putchar('\n');
}
