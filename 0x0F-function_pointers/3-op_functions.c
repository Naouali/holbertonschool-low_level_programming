#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function to add two int
 * @a: int
 * @b: int
 * Return: int sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract b from a
 * @a: int
 * @b: int
 * Return: int sustraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply two ints
 * @a: int
 * @b: int
 * Return: int multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to peform a division
 * @a: int
 * @b: int
 * Return : int
 */

int op_div(int a, int b)
{
	if (b == 0)
		
	{
		printf("Error\n");
		return;
	}
	return (a / b);
}


/**
 * op_mod - function to perform modulo
 * @a: int
 * @b: int
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return;
	}
	return (a % b);
}
