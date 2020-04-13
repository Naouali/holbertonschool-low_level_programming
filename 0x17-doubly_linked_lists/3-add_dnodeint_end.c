#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - function to add node at the end
 *@head : head at the node
 *@n: n data to add to the node
 *Return: pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *p;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = node;
	node->prev = p;
	return (node);
}
