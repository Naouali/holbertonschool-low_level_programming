#include <stdio.h>
#include "search_algos.h"
#include <string.h>
/**
 * binary_search - function to search an element in array using binary
 * search algorith
 * @array: array
 * @size: size of the array
 * @value: value to be searched for
 * Return: index of value or -1 if it does not exist
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i = 0;
	size_t middle;

	while (left < right)
	{
		printf("Seraching in array: ");
		for (i = left; i <= right; i++)

		{
			putchar(*(array + i) + '0');
			if (i < right)
			{
			putchar(',');
			putchar(' ');
			}
		}
		putchar('\n');
		middle = (left + right) / 2;

		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;

	}
	return (-1);
}

