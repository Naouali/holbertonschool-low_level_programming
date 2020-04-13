#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t print_list(const list_t *h)
{
  int nodes;
  while(h)
    {
      if (h->str == NULL)
	printf("[0] (nil)\n");
      else
	printf("[%d] (%s)\n", h->len, h->str);
      nodes++;
      h = h->next;
    }
  return nodes;
}
