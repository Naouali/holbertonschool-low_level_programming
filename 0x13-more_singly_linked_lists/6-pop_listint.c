#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function
 * @head: double pointer
 * Return: data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (head == NULL || *head == NULL)
	return (0);
	p = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(p);
	return (n);
}
