#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int intcheker(char *str);

/**
 * main - function to add numbers.
 *@argc: int
 *@argv: char
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, j;
	char *str;
	int len;
	int sum = 0;

	for (i = 1; i < argc; i++)
{
		str = argv[i];
		len = 0;
		while (str[len] != '\0')
			len++;
		for (j = 0; j < len; j++)
{
			if (isdigit(str[j]) == 0)
			{
			printf("Error\n");
			return (1);
			}
}
		sum = sum + atoi(argv[i]);
}
	printf("%d\n", sum);
	return (0);
}
