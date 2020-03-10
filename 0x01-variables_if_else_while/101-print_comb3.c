#include <stdio.h>
/**
 * main - function to print combs
 *
 * Return: zero
 */

int main(void)
{

int i = 0;

while (i < 10)
    {
    int j = i + 1;
    while (j < 10)

    {
        int c = j + 1;
        while (c < 10)
            {   
                int d = c + 1;
                while (d < 10)
                    {
                        putchar(i + '0');
                        putchar(j + '0');
                        putchar(' ');
                        putchar(c+ '0');
                        putchar(d + '0');
                        if ( i < 7 || j < 8 || c < 9)
                        {
                            putchar(',');
                            putchar(' ');
                        }
                        d++;
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
