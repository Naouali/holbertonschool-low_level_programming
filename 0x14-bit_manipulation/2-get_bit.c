#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - function to return the value of bit at a given index
 *@n: long int
 *@index: the index in the binary number of n
 *Return: the value of the bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if (n == 0)
		return (0);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}

