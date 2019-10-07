#include"holberton.h"
/**
 * _strspn - Counts bytes from accept in the prefix substring of s
 * @s: point
 * @accept: point
 * Return: n
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0, j = 0;

	while (*(s + i) !=  '\0')
{
	while (*(accept + j) != '\0')
{
	if (s[i] == accept[j])
	n = n + 1;
	i++;
	j++;
}
}
	return (n);
}
