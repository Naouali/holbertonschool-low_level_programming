#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dlistint - function to free alist
 * @head: head of the list
 * Return; nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *store = NULL;

	while (head != NULL)
	{
		store = head;
		free(store);
		head = head->next;	
	}

}
