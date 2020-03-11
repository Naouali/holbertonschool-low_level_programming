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
