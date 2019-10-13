#include "holberton.h"
#include <stdio.h>

/**
 * main - function that print a new name without recompiling in the shell
 *@argc: count of the argument
 *@argv: array
 * Return: Always a 0.
 */


int main(int argc, char *argv[])

{
	if (argc > 1)
	printf("%s\n", argv[0]);


	return (0);
}
