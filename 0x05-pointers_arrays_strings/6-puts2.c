#include "holberton.h"

/**
*puts2 - check the code
*@str: string
*Return : Always 0
*/

void puts2(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
{
	i++;
}
	len = i;

	for (i = 0; i < len; i++)
{
	if ( i % 2 ==0)
	_putchar(str[i]);



}
	_putchar('\n');


}
