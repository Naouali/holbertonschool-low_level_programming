#include <stdio.h>
#include "holberton.h"


void print_times_table(int n)
{
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
        if (n >= 0 && n < 15)  
        { 
            if (i * j <= 9)
           {
             if ( j != 0)   
                {
                    _putchar(' ');
                     _putchar(' ');
                    _putchar(' ');
                }
               
                _putchar((i * j) + '0');
                if ( j != n)
                {
                _putchar(' ');
                
                }
               
           }
           else if ( i * j < 100)
           
           {
            if (j != 0)
            
               {
                    _putchar(' ');
                    _putchar(' ');
               }
               
                _putchar(i * j / 10  + '0');
                _putchar(i * j % 10  + '0');
                if (j != n)
                {
                    _putchar(',');
                    
                }
               
            }
            else 
           {
            if (j != 0)
            
               {
                    _putchar(' ');
                    
               }
                _putchar(i * j / 100 + '0');
                int x = i * j % 100;
                _putchar(x / 10  + '0');
                _putchar(i * j % 10  + '0');
                if (j != n)
                {
                    _putchar(',');
                    
                }
               
            }
        }    
        }
        _putchar('\n');
    }
}
