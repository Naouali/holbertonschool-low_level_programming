#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat - concatinate strings
  * @s1: String
  * @s2: String
  * @n: unisgned integer
  * Return: pointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, len1 = 0, len2 = 0, j;
	char *k;

	if (s1 != NULL)
	{
	while (s1[len1])
		len1++;
	}
	if (s2 != NULL)
	{
	while (s2[len2])
		len2++;
	}
	if (n < len2)
		len2 = n;

	j = len1 + len2;

		j++;
		k = malloc(j * sizeof(char));
		if (k == NULL)
			return (NULL);
		for (i = 0; i < len1; i++)
			k[i] = s1[i];
		for (i = 0; i < len2; i++)
		{
			k[i + len1] = s2[i];
		}
		k[j - 1] = '\0';

	return (k);
}
