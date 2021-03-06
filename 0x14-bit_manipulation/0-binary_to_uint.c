#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * binary_to_uint - function tp print int from binary
 * @b: binary number
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int x = 0;

	j = 0;
	while (*(b + j))
	{
		j++;
	}
	for (i = 0; i < j ; i++)
	{
	if ((*(b + i) != '0' && *(b + i) != '1') || (b == NULL))
	{
		return (0);
	}
	}
	j--;
	for (i = 0; b[i] ; i++)
	{
	if (b[i] == '1')
	x += 1 << j;
	j--;
	}
	return (x);

}
