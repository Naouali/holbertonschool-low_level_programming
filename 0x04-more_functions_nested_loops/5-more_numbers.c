#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{


	int i, z;



	while (i < 10)
{

	for (z = 0; z <= 14; z++)
{
	if (z > 9)
{
	_putchar(z / 10 + '0');
}
	_putchar(z % 10 + '0');
}

	_putchar('\n');
	i++;
}

}

