#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function to fulfill an array
 *@array: array
 *@size: size_t
 *@action: array
 *Return: array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	size_t i;
		for (i = 0; i < size; i++)
		{
		action(array[i]);

		}

}
