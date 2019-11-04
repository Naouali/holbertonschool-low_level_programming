#include <stdio.h>

/**
* main - function to print 98 fibonacci
*
*Return: int
*/


int main(void)
{
	unsigned int i, a, b, c = 0;

	a = 0;
	b = 1;
	for (i = 1; i < 97; i++)
	{
	c = a + b;
	a = b;
	b = c;
	if (i != 96)
	printf("%u, ", c);
	else
	printf("%u", c);
	}
	printf("\n");
	return (0);
}
