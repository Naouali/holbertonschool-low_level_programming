#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - function to add a node to a D linked list
 * @head: head of the list
 * @n: data of the new node
 * Return: pointer to the new node or NULL it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p, *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	p = *head;
	node->n = n;
	node->next = p;
	node->prev = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	*head = node;
	return (node);
}
