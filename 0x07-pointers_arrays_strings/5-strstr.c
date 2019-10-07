#include "holberton.h"
/**
 * _strstr - check the code
 * @haystack: string.
 * @needle: substring
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	int occ = 0;
	char *plus;

	while (haystack[i] != '\0')
	{
		if (needle[0] == haystack[i] && haystack[i] != '\0')
		{
			plus = &haystack[i];
			j = 0;
			while (needle[j] != '\0')
			{
				if (needle[j] == haystack[i])
				{
					occ = 1;
					i++;
					j++;

				}
				else
				{
					occ = 0;
					break;
				}
			}
		}
		if (occ == 1)
		{
			return (plus);
		}


		i++;
	}
	return (0);
}
