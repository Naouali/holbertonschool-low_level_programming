#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get a node at the nth index
 * @head: head of the list
 * @index: index of the node
 * Return: pointer to the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *p;

	p = head;


	while (p != NULL)
	{
		if (i == index)
			return (p);
		i++;
		p = p->next;
	}


		return (NULL);
}
