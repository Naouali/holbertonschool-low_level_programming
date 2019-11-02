#include <stdio.h>

/**
 *main - function to print fibonnacci numbers
 *
 *Return: 0.
 */

int main(void)
{
	int i, a, b;
	unsigned int c;


	a = 0;
	b = 1;

	for (i = 0; i <= 50; i++)
	{
	c = a + b;
	a = b;
	b = c;
	printf("%u\n", c);
	}
	return (0);
}
