#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 *@a: int
 *@n: int
 * Return: Always 0.
 */

void print_array(int *a, int n)

{
	int i;

	i = 0;

	for (i = 0; i < n; i++)
{
	if (i + 1 != n)
	printf("%d ,",a[i]);
	else
	printf("%d", a[i]);
}
	printf("\n");
}
