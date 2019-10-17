#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer
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
