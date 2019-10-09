#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{

	return (sqrcheker(0, n));


}


int sqrcheker(int i, int n)

{



	if (i * i == n)
	return (i);

	else if (i < n)
	return (sqrcheker(i + 1, n));

	else
	return (-1);
}
