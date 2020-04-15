#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index n
 * @head: head of the list
 * @index: index of the node to be deleted
 * Return: 1 on succes -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *n, *pv;
	unsigned int i = 0;

	p = *head;
	while(i <= index )
	{
		p = p->next;
		i++;
	}
	n = p->next;
	pv = p->prev;
	pv->next = n;
	free(p);

	return (0);
}
