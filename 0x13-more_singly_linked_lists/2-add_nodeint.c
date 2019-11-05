#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function to  adds a new node
 * @head: douuble pointer
 * @n: integer
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
	return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
	return (NULL);

	p->n = n;
	p->next = *head;

	*head = p;
	return (p);
}
