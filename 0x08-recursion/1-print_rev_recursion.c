#include "holberton.h"

/**
 * _print_rev_recursion - check the code for Holberton School students.
 *@s: is a string
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
        if (*s)
        {



        _puts_recursion(s + 1);
	_putchar(*s);

}
        else
        _putchar('\n');
}

