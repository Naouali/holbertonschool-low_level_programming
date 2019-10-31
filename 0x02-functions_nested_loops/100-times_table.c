#include "holberton.h"

/**
 *  
 * 
 * 
 */    


void print_times_table(int n)
{
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        if (n <= 15 && n > 0)
        {
            if (i * j <= 9)
            {
                if ( j != 0)
                _putchar(' ');
                _putchar((i * j) + '0');
                if ( j != n)
                _putchar(',');
                if (n * j > 9)
                _putchar(' ');
                else {
                _putchar(' ');
                _putchar(' ');
                }
                if (i * j > 9)
                _putchar(' ');
            }
                else if (i * j > 9)
         
                {
                _putchar((i * j /10) + '0');
                _putchar((i * j % 10) + '0');
                if (j != n)
                _putchar(',');
                if (i * j > 9)
                _putchar (' ');
                else {
                    _putchar(' ');
                    _putchar(' ');
                }
                }
                
        }
        
            _putchar('\n');
            
        
    }
    _putchar('\n');
}