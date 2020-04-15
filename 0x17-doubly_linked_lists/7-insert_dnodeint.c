#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert node
 * @h: head of the list
 * @idx: index of the node to add
 * @n: data to be hold by the node
 * Return: pointer to the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	unsigned int j = 0;
	dlistint_t *p, *nx, *len;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	len = *h;
	while(len)
	{
		len = len->next;
		j++;
	}
	if (idx > j)
		return (NULL);


	p = *h;
	while (i < idx)
	{
		p = p->next;
		i++;
	}
	nx = p->next;
	p->next = node;
	node->prev = p;
	node->next = nx;
	node->n = n;
	nx->prev = node;


	return (node);
}

