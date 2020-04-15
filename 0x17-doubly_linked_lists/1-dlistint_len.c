#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - function to print length of doubly linked list
 * @h: head of the list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *p;

	p = h;
	while (p)
	{
		p = p->next;
		i++;
	}
	return (i);
}
