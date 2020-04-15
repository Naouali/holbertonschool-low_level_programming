#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at the index
 * @head: head of the list
 * @idx: index
 * @n: data to be added
 * Retrun: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *p, *nx;
	unsigned int i = 1;

	if (node == NULL)
		return (NULL);
	p = *head;
	while (i < idx)
	{
		p = p->next;
		i++;
	}
	nx = p->next;
	p->next = node;
	node->n = n;
	node->next = nx;

	return (node);
}
