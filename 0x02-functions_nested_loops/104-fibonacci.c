#include <stdio.h>

/**
* main - function to print 98 fibonacci
*
*Return: int
*/


int main(void)
{
	long i, a, b, c = 0;

	a = 0;
	b = 1;
	for (i = 0; i < 98; i++)
	{
	c = a + b;
	a = b;
	b = c;
	if (i < 88)
	printf("%lu, ", c);
	else if (i == 88)
	printf("%lu\n", c);
	}
	return (0);
}
