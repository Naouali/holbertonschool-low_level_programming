#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function to print the length
 * @h: header
 * Return: number of elements in the list
 */
size_t  listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
{
	i++;
	h = h->next;
}
return (i);
}
