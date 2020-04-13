#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function to free alist
 * @head: head of the list
 * Return; nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *store, *p;

	p = head;
	while (p)
	{
		store = p->next;
		free(p);
		p = store;
	}
	free(p);
}
