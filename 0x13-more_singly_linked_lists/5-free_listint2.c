#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function to free  a list.
 * @head: double pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
	return;
	while (*head != NULL)
{
	p = (*head)->next;
	free(*head);
	*head = p;
}
}
