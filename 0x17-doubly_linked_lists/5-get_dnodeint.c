#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint - function to get node at ith index
 * @head: head of the list
 * @index: index of the node to retrive
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i = 0;

	p = head;
	while (p != NULL)
	{
		if (index == i)
			return (p);
		p = p->next;
		i++;
	}
	return (NULL);
}
