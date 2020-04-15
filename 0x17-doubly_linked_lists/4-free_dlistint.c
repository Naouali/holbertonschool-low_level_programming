#include "lists.h"
#include <stdlib.h>

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
		store = head->next;
		free(head);
		head = store;
	}

}
