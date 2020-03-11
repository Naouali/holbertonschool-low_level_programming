#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to find the largest prime factors
 *
 * Return: zero on succes
 */

int main(void)
{
	long int i = 612852475143;
	long int j;
	long int prime;
	
	//int count = 0;
	for (j = 1; j < i; j++)
	{
		if (i % j == 0 && j > 1)
		{
			prime = i / j;
		       printf("%ld\n", prime);
		       break;
		}
	}
 	return 0;
}

