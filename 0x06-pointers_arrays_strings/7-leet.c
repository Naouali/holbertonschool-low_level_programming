#include "holberton.h"
/**
 * leet - check the code for Holberton School students.
 * @ch: character
 * Return: Always 0.
 */

char *leet(char *ch)
{

	int i, j;
	char s[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; ch[i] != '\0'; i++)
{
	for (j = 0; s[j] != '\0'; j++)
{
	if (ch[i] == s[j])
	ch[i] = s2[j];
}

}
return (ch);

}
