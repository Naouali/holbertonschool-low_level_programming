#include <stdio.h>
#include "holberton"



void print_alphabet_x10(void)

{
	int, i, a;


	a = 0;
	while ( a < 10)
{
	for (i = 'a'; i <= 'z';i++)
{
		_putchar(i);
		_putchar('\n');
}
	a++;
}
}
