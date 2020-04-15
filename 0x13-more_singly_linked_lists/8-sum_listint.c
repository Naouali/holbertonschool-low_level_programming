#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * sum_listint  - functon to count sum of n in linked list
 * @head: head of the list
 * Return: int / sum
 */

int sum_listint(listint_t *head)
{
	listint_t *p;
	int i = 0;

	if (head == NULL)
		return (0);

	p = head;
	while (p->next)
	{
		i+= p->n;
		p = p->next;
	}
	return (i);
}
