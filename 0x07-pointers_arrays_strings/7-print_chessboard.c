#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array
 * Return: void
*/
void print_chessboard(char (*a)[8])

{
	int i, j = 0;

	while (j < 8)
{
	i = 0;
	while (i < 8)
	_putchar(a[j][i++]);
	_putchar('\n');
	j++;
}
}
