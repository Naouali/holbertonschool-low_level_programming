#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatinate two strings
 *@s1: string1
 *@s2: string2
 * Return: p.
 */

char *str_concat(char *s1, char *s2)

{
	int is1 = 0;
	int is2 = 0;
	int iss, i = 0;
	char *p;

	if (*s1 != '\0')
{
	while (s1[is1] != '\0')
	is1++;
}
	if (*s2 != '\0')
{
	while (s2[is2] != '\0')
	is2++;
}
	iss = is1 + is2;

	p = malloc(sizeof(char) * (iss + 1));
	if (p == NULL)
	return (NULL);
	while (i < is1)
{
	p[i] = s1[i];
	i++;
}
	i = 0;
	while (i < is2)
{
	p[i + is1] = s2[i];
	i++;
}
	p[iss] = '\0';
	return (p);
}
