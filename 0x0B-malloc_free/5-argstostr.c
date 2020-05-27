#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function to concat argument
 *@ac: argument number
 *@av: array of argument
 *return concatinaed argument
 */

char *argstostr(int ac, char **av)
{
  int i, j, k;
  if (ac == 0 || av == NULL)
    return (NULL);
  
  j = 0;
  while(av)
  {
    j++;
  }
  char *m = malloc((sizeof(char) * j) + ac);
  for (i = 0; i <= ac; i++)
  { 
    for (k = 0; k <= i; k++)
    {
      m[i] = av[i][k];
    }
  }
    return m;
}
