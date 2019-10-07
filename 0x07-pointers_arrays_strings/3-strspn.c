#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string.
 * @accept: the bytes to accept.
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int len = 0;
	int k = 0;

	while (accept[len] != '\0')
	{
		len++;
	}

	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
	}
	return (k);
}
