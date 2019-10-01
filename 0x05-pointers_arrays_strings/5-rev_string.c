#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 *@s: string
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int box, far, i, j;

	i = 0;
	while (s[i] != '\0')
{
	i++;
}
	i--;

	j = 0;
	far = i / 2;
	while (i >= far)
{
	box = s[i];
	s[i] = s[j];
	s[j] = box;
	j++;
	i--;
}

}
