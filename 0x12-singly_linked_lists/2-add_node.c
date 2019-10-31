#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - function to add nodes to the list
 * @head: lointer
 * @str: str
 * Return: int
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *n = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

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
	n->next = *head;
	*head = n;
	return (n);
}
