#include <stdio.h>
#include "search_algos.h"
/**
 * interpolation_search - Use interpolation search algo
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	int position, low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = (int)size - 1;
	position = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	while (high >= low && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%d] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return ((int)position);
		if (array[position] > value)
			high = position - 1;
		else if (array[position] <  value)
			low = position + 1;
		position = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
	}
	printf("Value checked array[%d] is out of range\n", position);
	return (-1);
}
