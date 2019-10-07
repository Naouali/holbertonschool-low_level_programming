#include "holberton.h"

/**
 * _strstr - check the code
 * @haystack: str
 * @needle: substring
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;


	int oc = 0;
	char *plus;

	while (haystack[i] != '\0')
	{
		if (needle[0] == haystack[i] && haystack[i] != '\0')
		{
			plus = &haystack[i];
			j = 0;
			while (needle[j] == haystack[i])
			{
				oc = 1;
				i++;
				j++;
			}
		}
		if (oc == 1)
		{
			return (plus);
		}
		plus = 0;
		oc = 0;
		i++;
	}
	return (0);
}
