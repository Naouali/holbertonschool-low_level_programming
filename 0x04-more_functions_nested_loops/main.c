#include "prime.h"
#include <stdio.h>

int main(void)
{
	int k, d, c, a, b;

	k = is_prime(7);
	d = is_prime(13);
	c = is_prime(8);
	a = is_prime(21);
	b = is_prime(11);


	printf("%d\n", k);
	printf("%d\n", d);
	printf("%d\n", c);
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
