#include <stdio.h>

/**
 * main - function to print combs
 *
 * Return: zero on succes
 */

int main(void)
{
	int i = 0;
	while (i < 10)
	{
		int j = 0;
		while (j < 10)
		{
			int c = 0;
			while ( c < 10)
			{
				int d = c + 1;
				while (d < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					d++;
					if (i < 9 || j < 9 || c < 8 || d < 9)
					{
					putchar(',');
					putchar(' ');
					}
				}
			c++;
			}
		j++;
		}
	i++;
}
	putchar('\n');

	return (0);
}

