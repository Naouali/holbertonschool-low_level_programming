#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, box;

	for (i = 0; i < (n / 2); i++)
{
	box = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = box;
}
}
