#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free the memory allocated
 *@d: pointer to structure data type
 *Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
