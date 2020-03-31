#include "holberton.h"

/**
 * print_number -  function to print an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int count;
	int i;
	//int j = 10;
	int lenght;

	if (n < 10)
		_putchar(n + '0');
	else if (n < 10 && n < 0)
	{
		_putchar('-');
		_putchar(n + '0');
	}
	else
		for(i = 0; i < n; i++)
		{
			lenght = n % 10;
			count++;
		}
			_putchar(n / 10 + '0');
		for(i = 0; i <= count; i++)
		{
			_putchar(n % 10 + '0');
		}
}

