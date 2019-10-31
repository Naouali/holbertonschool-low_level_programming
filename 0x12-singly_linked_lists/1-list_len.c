#include "lists.h"
/**
 * list_len - function to print lenght of list
 * @h: pointer
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	const list_t *p;
	unsigned int i;

	p = h;
	for (i = 0; p; i++)
	p = p->next;
	return (i);
}
