#include <stdio.h>
#include "prime.h"
/**
 * main - function to print highst prime factor
 *
 * Return: zero on succes
 */

int main(void)
{
	long int i = 612852475143;
	long int j;
	unsigned int k;
	unsigned int prime;
	for(j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			prime = i / j;
			k = is_prime(prime);
			if (k != 0)
			{
				printf("%d\n", k);
					break;
			}
		}
	}
	return 0;
	}
#include <stdio.h>
#include "prime.h"

/**
 *
 *
 */
int is_prime(int n)
{
        int i, c = 0;


        for (i = 1; i <= n; i++)
        {
                if (n % i == 0)
                {
                        c++;
                }
        }

        if (c == 2)
        {
                return n;
        }

        else
                return 0;
}


