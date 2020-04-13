#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
  size_t count = 0;
  const listint_t *p = malloc(sizeof(const listint_t));
  if (p == NULL)
    return -1;
  p = h;
  while(p)
    {
      printf("%d\n", p->n);
      p = p->next;
      count++;
    }
  return count;
}
