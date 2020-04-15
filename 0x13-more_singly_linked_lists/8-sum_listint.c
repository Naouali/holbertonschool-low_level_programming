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
	listint_t *p = head;
	int i = 0;

	while (p != NULL)
	{
		i += p->n;
		p = p->next;
	}
	return (i);
}
