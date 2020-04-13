#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - fucntion to print all elemnnt of DLlist
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p = malloc(sizeof(dlistint_t));
	int i = 0;

	p = h;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
