#include <stdio.h>
#include "dog.h"

/**
 *print_dog - function to print elements of a struct
 *@d: pointer to a struct
 *Return: NULL or char
 */

void print_dog(struct dog *d)

{
	if (d == NULL)
		return;

	if (((*d).name == NULL) || ((*d).owner == NULL))
	printf("(nil)");


	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
