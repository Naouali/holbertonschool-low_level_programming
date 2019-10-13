#include <stdio.h>

/**
 * main - a function that prints it's number of arguments
 *@argc: int
 *@argv: array
 *Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])

{
	printf("%d\n", argc - 1);
	return (0);
}
