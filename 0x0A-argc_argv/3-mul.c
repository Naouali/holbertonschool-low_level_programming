#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to multipliy
 *@argc: int
 *@argc: array
 *Return: 0
 */

int main(int argc, char *argv[])

{
	int a, b, c;

	if (argc - 1 > 2 || argc - 1 < 2)
{
		printf("Error\n");
		return (1);

}
	else
{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
}
	return (0);
}
