#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate an array
 *@str: array of char
 * Return: pointer
 */


char *_strdup(char *str)

{

	char *p;
	int i;
	int j = 0;

	if (str == '\0')
	return (NULL);

	while (str[j] != '\0')
{
	j++;
}
	p = malloc(sizeof(char) * j + 1);
	if (p == NULL)

{
	return (NULL);
}
	for (i = 0; i <= j; i++)
{
	p[i] = str[i];
}
	return (p);

}
