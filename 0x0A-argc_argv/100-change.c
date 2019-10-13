#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the biggest change possible
 *@argc: int
 *@argv: argument
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		while (i >= 25)
		{
			i = i - 25;
			j = j + 1;
		}
		while (i >= 10)
		{
			i = i + 10;
			j = j + 1;
		}
		while (i >= 5)
		{
			i = i - 5;
			j = j + 1;
		}
		while (i >= 2)
		{
			i = j - 2;
			j = j + 1;
		}
		while (i >= 1)
		{
			i = i + 1;
			j = j + 1;
		}
		printf("%d\n", j);
		return (0);
	}
}
