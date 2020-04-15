#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - function a count sum of data in a list
 * @head: head of the list
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *p = malloc(sizeof(dlistint_t));

	p = head;
	while (p)
	{
		i += p->n;
		p = p->next;
	}
	return (i);
}
