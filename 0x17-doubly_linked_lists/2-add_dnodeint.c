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
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head != NULL)
	{
		(*head)->prev = node;
	}
	node->next = (*head);
	node->prev = NULL;
	(*head) = node;

	return (node);
}
