#include <stdio.h>
#include "holberton.h"

/**
 * main - function to print all it s argument one in each line
 *@argc: int
 *@argv: char
 *Return: 0.
 */

int main(int argc, char *argv[])

{
	int i;


	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
