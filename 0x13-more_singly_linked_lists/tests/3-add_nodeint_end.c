#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *temp, *node = malloc(sizeof(listint_t));
  if (node == NULL)
    return NULL;

  if(*head == NULL)
    {
      *head = node;
      return node;
    }

  temp = *head;
  while(temp->next != NULL)
    {
      temp = temp->next;
    }
  node->n = n;
  node->next = NULL;

  temp->next = node;

  return node;
}
