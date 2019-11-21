#include "holberton.h"
#include <stdlib.h>

/**
 * set_bit - function to set a bit at a given index
 * @n: number to be modified
 * @index: index in which bits are going to be set
 * Return: 1 on succes -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 32)
		return (-1);

	*n |= 1 << index;

	return (1);
}
