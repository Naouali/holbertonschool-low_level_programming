#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min int.
 * @max: max int.
 * Return: pointer to newly created array or NULL.
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	p = malloc(sizeof(int) * j);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < j)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
