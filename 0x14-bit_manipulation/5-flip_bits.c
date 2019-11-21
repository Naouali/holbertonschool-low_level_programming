#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * flip_bits - function the number of bits to flip from n to m
 * @n:unsigned long int
 * @m: unsigned log int
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int y = 0;

	x = n ^ m;
	while (x)
	{
		y += x & 1;
		x >>= 1;
	}

	return (y);
}
