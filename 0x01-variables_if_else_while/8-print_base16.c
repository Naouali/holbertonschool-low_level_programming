#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, I;

	for (i = 0; i < 10 ; i++)
{
	putchar(i + '0');
}
	for (I = 'a'; I <= 'f' ; I++)
{
	putchar(I);
}
	putchar('\n');
	return (0);
}
