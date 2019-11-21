

#include "holberton.h"
#include <stdlib.h>

/**
 * clear_bit - function to clear a bit at a given index
 * @n: number to be modified
 * @index: index in which bits are going to be cleard
 * Return: 1 on succes -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n &=~ (1 << index);
	return (1);
}



