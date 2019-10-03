#include "holberton.h"

/**
 * _strncpy - check the code for Holberton School students.
 *@dest: char
 *@src: char
 *@n: int
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	while (src[i] != 0)
{
	i++;
}

	for (j = 0; j < n; j++)
{
	if (src[n - 1] != '\0')
		dest[j] = 0;
	if (j > i)
		dest[j] = '\0';
	else
	dest[j] = src[j];

}
	return (dest);
}
