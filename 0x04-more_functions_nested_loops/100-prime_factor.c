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
	int k;
	long int m;
	
	//int count = 0;
	for (j = 1; j < i; j++)
	{
		if (i % j == 0 && j > 1)
		{
			
			prime = i / j;
				for(k = 2; k < prime / 2; k++)
				{
					if (prime % k != 0 )
					{
						m = prime;
						printf("%ld\n", m);
					}
					continue;
				}
		       	
		}
	
	printf("%ld\n", m);
	break;	
	}
	
 	return 0;
}

