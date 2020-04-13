#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
  int i = strlen(str);
  list_t *node = malloc(sizeof(list_t));
  if (node == NULL)
    return NULL;
  list_t * temp = malloc(sizeof(list_t));
  temp = *head;
  node->str = strdup(str);
  /*  if (node->str == NULL)
    {
      free(node);
      return NULL;
      }*/
  node->str = strdup(str);
  node->len = i;
  node->next = NULL;
    if (*head == NULL)
    {
    *head = node;
    return node;
    }
  while(temp->next != NULL)
    {
      temp = temp->next;
    }
  temp->next = node;
  return node;
}
