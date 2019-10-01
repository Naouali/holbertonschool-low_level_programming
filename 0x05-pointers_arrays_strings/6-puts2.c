#include "holberton.h"

/**
*puts2 - check the code
*@str: string
*Return : Always 0
*/

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
{


	i = i + 2;

	_putchar(str[i]);

}
	_putchar('\n');


}
