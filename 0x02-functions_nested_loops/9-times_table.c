#include "holberton.h"

void times_table(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
{
	for (a = 0; a < 10; a++)
{
	int s = i * a;

	if (s / 10 != 0 )
{
	_putchar(s / 10 + '0');
}
	_putchar(s % 10 + '0');
	if ( a != 9 )
{
	_putchar(',');
	_putchar(' ');
}
}
	_putchar('\n');
}

}

