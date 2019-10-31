#include <stdlib.h>
#include"lists.h"
/**
 * free_list -function to free memory of list
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head)
{
	p = head;
	head = head->next;
	free(p->str);
	free(p);
}
}
