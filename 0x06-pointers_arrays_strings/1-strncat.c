#include "holberton.h"

/**
 * _strncat - check the code for Holberton School students.
 *@dest: char
 *@src: char
 *@n: int
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	while (dest[i] != 0)
{
	i++;
}
	for (j = 0 ; j < n ; j++)
{
	dest[i] = src[j];
	i++;
}
	return (dest);
}
