#include "holberton.h"

/**
 *swap_int - check the code for Holberton School students.
 *@a:int
 *@b:int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
