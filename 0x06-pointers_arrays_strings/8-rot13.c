#include "holberton.h"

/**
 *rot13 - check the code for Holberton School students.
 *@s: string
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
{
	i++;
}
	for (i = 0;  s[i] != '\0'; i++)
{
	if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
{
	s[i] = s[i] + 13;
}
	else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))

	s[i] = s[i] - 13;
}
	return (s);
}
