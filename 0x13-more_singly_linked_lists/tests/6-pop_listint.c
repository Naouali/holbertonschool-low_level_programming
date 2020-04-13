#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


int pop_listint(listint_t **head)
{
  int i;
  i = *head->n;
  *head->next = *head;
  free(*head);
  return i;
}
