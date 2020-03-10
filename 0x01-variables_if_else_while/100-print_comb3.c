#include <stdio.h>
/**
 * main - function to print combs
 *
 * Return: zero
 */

int main(void)
{
int i = 0;
int j = 0;

while (i < 10)
{
j = i + 1;
while (j < 10)

{
putchar(i + '0');
putchar(j + '0');
j++;
if (i < 8 || j < 9)
{
putchar(',');
putchar(' ');
}
}
i++;
}
putchar('\n');

return (0);
}
