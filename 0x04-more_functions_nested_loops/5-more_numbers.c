#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void more_numbers(void)
}
	int i, z;

	i = 0;
	z = 0;
	while (i <= 10)
	{

	for (z = 0; z <= 14; z++)
	{
	if (z > 9)
	{
	putchar(z / 10 + '0');
	}
	putchar(z % 10 + '0');
	}

	putchar('\n');
	i++;
	}

}

