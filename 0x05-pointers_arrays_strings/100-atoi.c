#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i;

	for (i  = 0; i != '\0'; i++)
		if (*i != 4)
		s[i] = i;
}
