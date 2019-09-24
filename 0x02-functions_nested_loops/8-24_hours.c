#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int i, a;

	for (i = 0; i < 24; i++)

{
	for (a = 0; a < 60; a++)
{
	_putchar(i / 10 + '0');
	_putchar(i % 10 + '0');
	_putchar(':');
	_putchar(a / 10 + '0');
	_putchar(a % 10 + '0');
	_putchar('\n');
}


}
}
