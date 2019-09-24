#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)


{


	int A = 0;

	while (A < 10)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');

	A++;
}

}
