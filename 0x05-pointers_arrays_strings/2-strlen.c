#include "holberton.h"

/**
 * _strlen - check the code for Holberton School students.
 * @s: string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;


	i = 0;
	while (s[i] != '\0')
{
	i++;
}
	return (i);
}
