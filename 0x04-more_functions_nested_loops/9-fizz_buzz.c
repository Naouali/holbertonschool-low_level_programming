#include <stdio.h>
#include "holberton.h"

/**
* main - Fizz Buzz
*
* Return: Always 0
*/

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)

{
	if ((i % 3 == 0) && (i % 5 == 0))
	printf("FizzBuzz ");
	else if (i % 3 == 0)
	printf("Fizz ");
	else if (i % 5 == 0)
	printf("Buzz ");
	else
	printf("%d ", i);
}

	while (i == 100)
{
	printf("\n");
	i++;
}

	return (0);
}
