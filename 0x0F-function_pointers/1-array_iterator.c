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
	size_t i;

	if (array == NULL || action == NULL)
		return;


	for (i = 0; i < size; i++)
		{
		action(array[i]);

		}

}
