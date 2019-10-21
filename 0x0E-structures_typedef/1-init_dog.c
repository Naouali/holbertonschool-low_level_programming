#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialize a struct variable
 *@d: name of a variable of type struct dog
 *@name: nome of the dog
 *@age: age of the dog
 *@owner: the owner of the dog
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
