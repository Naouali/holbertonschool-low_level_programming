#include "holberton.h"
/**
 * cap_string - capitalize string
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int i;
	int j;


	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (s[j] == '\n' || s[j] == '\t' || s[j] == ' ' || s[j] == '.'
		    || s[j] == ';' || s[j] == ',' || s[j] == '!' || s[j] == '?'
		    || s[j] == '"' || s[j] == '(' || s[j] == ')' || s[j] == '{'
		    || s[j] == '}')
		{
			if (s[j + 1] >= 'a' && s[j + 1] <= 'z')

				s[j+1] = s[j] - 32;
		}
	}
	return (s);
}
