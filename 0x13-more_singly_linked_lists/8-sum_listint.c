#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint  - functon to count sum of n in linked list
 * @head: head of the list
 * Return: int / sum
 */

int sum_listint(listint_t *head)
{
	listint_t *p;
	int i = 0;

	p = head;
	while (p->next)
	{
		p = p->next;
		i += p->n;
	}
	return (i);
}
