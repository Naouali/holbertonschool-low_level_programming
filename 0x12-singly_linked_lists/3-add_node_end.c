#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function to  add new node
 * @head: pointer
 * @str: string
 * Return: pointer to the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *n, *p;

	if (str == NULL)
	return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
	return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
	free(n);
	return (NULL);
}
	for (i = 0; n->str[i]; i++)
	n->str = strdup(str);
	n->len = i;
	n->next = NULL;
	if (*head == NULL)
{
	*head = n;
	return (n);
}
	p = *head;
	while (p->next)
	p = p->next;
	p->next = n;
	return (n);
}
