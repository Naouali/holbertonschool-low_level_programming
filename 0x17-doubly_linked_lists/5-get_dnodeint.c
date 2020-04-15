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
	dlistint_t *p = head;
	unsigned int i = 0;

	while (p != NULL)
	{
		if (index == i)
			return (p);
		i++;
		p = p->next;
	}
	return (NULL);
}
