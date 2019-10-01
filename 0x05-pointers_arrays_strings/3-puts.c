#include "holberton.h"

/**
* _puts - check the code for Holberton School students.
*
*Return : Always 0.
*/

void _puts(char *str)

{

	int i;

	i = 0;

	while ( str[i] != '\0')
{
	i++;

	_putchar(str[i]);
}
	_putchar('\n');



}
