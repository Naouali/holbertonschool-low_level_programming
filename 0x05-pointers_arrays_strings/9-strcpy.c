#include "holberton.h"

/**
 *_strcpy - check the code for Holberton School students.
 *@dest: string
 *@src: string
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
{
	i++;
}
	for (j = 0; j <= i; j++)
	dest[j] = src[j];

	return (&dest[0]);
}
