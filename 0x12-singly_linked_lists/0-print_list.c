#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements of a list
 * @h: pointer
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *p;
	unsigned int i;

	p = h;
	for (i = 0; p; i++)
{
	if (p->str)
	printf("[%u] %s\n", p->len, p->str);
	else
	printf("[%u] %s\n", 0, "(nil)");

	p = p->next;
}
	return (i);
}

