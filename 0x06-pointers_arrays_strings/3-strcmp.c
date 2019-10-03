#include "holberton.h"

/**
 *_strcmp - check the code for Holberton School students.
 *@s1: string
 *@s2: string
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)

{

	int i, k;

	i = 0;
	while (s1[i] != '\0')
{
	i++;
}
	k = 0;
	while (s2[k] != '\0')
{
	k++;
}

{
	for (i = 0; i < k; i++)
{
	if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
}
	return (0);
}
}
