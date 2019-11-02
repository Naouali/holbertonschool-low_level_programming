#include <stdio.h>

/**
 *main - function to print fibonnacci numbers
 *
 *Return: 0.
 */

int main(void)
{
	long i, a, b;
	long c = 0;


	a = 0;
	b = 1;

	for (i = 0; i < 50; i++)
	{
	c = a + b;
	a = b;
	b = c;
	if (i != 49)
	printf("%ld, ", c);
	else
	printf("%ld", c);

	}
	printf("\n");
	return (0);
}
