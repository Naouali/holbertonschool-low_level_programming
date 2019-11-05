#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function to add new node at the end of a list.
 * @head: douuble pointer
 * @n: integer
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *h;

	if (head == NULL)
	return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
	return (NULL);
	p->n = n;
	p->next = NULL;
	if (*head == NULL)
{
	*head = p;
	return (p);
}

	h = *head;
	while (h->next != NULL)
	h = h->next;

	h->next = p;
	return (p);
}
