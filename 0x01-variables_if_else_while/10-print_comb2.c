#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i;

	for (i = 0; i < 100; i++)
{


	putchar(i  + 'o');
	putchar(i % 10 + 'o');
	if (i != 99)
{

	putchar(',');
	putchar(' ');
}

}
	return (0);
}
