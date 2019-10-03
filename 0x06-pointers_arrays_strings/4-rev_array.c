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
	int i, box, j, len;

	i = 0;
	while (a[i] != '\0')
{
	i++;
}
	len = i / 2;
	for (j = len ; j < n ; j++)
{
	box = a[j];
	a[j] = a[j];
	a[j] = box;
	j++;
	j--;
}

}
