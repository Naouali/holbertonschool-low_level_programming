#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void free_list(list_t *head)
{
  list_t *temp;

  while(head)
    {
      temp = head;
      temp = temp->next;
      free(temp->str);
      free(temp);
    }
}
