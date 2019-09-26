#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - check the code for Holberton School students.
 *@c: integer
 * Return: Always 0.
 */

int _isdigit(int c)

{

	if ((c > 0) && (c < 10))
{
	return (1);
}

	return (0);
}
