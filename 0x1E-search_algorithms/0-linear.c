#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - function to find an value in array
 * @array: array of integers
 * @size: size of the array
 * @value: value to be searched
 * Return: first index of the element or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{

			return ((int)i);
		}


	}
	return (-1);
}

