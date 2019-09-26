#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void more_numbers(void)

{

	int z, i;

	i = 0;
while (i < 11)
{
	for (z = 0; z < 15; z++)
	{
	if (z <= 9)
	_putchar(z + '0');
	else
{

	_putchar(z / 10 + '0');
	_putchar(z % 10 + '0');
}
	}
i++;
_putchar('\n');
}


}

