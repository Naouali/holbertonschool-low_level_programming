#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node in linked list
 * @head: head of the list
 * @index: index of the list
 * Return 1 on succes else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, nx = NULL;
	unsigned int i, j = 0;

	p = *head;
	while(p)
	{
		j++;
	}
	if (index > j)
		return (-1);
	while(i <= index)
	{
		p = p->next;
		i++;
	}
	nx->next = p->next;
	return (1);
}

