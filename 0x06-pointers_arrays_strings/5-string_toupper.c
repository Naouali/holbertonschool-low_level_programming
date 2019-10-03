#include "holberton.h"

/**
 *string_toupper - check the code for Holberton School students.
 *@s: string
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
{
	j++;
}

	for (i = 0; i < j; i++)
{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
}
	return (s);
}
