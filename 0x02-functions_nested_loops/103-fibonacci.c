#include <stdio.h>

/**
 *main - function to print fibonnacci numbers
 *
 *Return: 0.
 */

int main(void)
{
        long i, a, b;
        long c = 0;
	int sum = 0;

        a = 0;
        b = 1;

        for (i = 0; i < 50; i++)
        {
        c = a + b;
        a = b;
        b = c;
        if (c % 2 == 0 && c < 4000000)
	sum += c;
        }
        printf("%d\n", sum);
        return (0);
}

