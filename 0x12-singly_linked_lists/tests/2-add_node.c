#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
  unsigned int i = strlen(str);
  list_t * node = malloc(sizeof(list_t));

  if (node == NULL)
    return NULL;

  if (str == NULL)
    return NULL;

  node->str = strdup(str);
  if(node->str == NULL)
    {
      free(node);
      return NULL;
    }

      node->str = strdup(str);
      node->len = i;
      node->next = *head;
    
  *head = node;
    
  return node;
    
}
