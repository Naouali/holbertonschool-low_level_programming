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

	size_t i, middle, left = 0, right = size - 1;


	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);
		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
