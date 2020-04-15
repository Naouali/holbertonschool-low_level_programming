#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - function to perform a jump search
 * @array: array to be searched
 * @size: size of the array
 * value: value to be looking for
 * Return: first index of the value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t m = sqrt(size);
	size_t i = 0;
	size_t jump = 0;

	while (i <= size)
	{
		if (value == array[i])
			return (i);
		else if (value == array[m])
			return (m);
		if (value > array[i] && value > array[m])
//			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		{
			 printf("Value checked array[%ld] = [%d]\n", i, array[i]);

			jump++;
			i = i + m;
			m = m * jump;
		}
		if (m >= size)
			m = size;
		if (value > array[i] && value < array[m])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, m);
			i = i + 1;
		}
	}

	return (-1);
}
