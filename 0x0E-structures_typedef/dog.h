#ifndef DOG_H
#define DOG_H


/**
 * struct dog - new structure called dog
 * @name: dog ' s name
 * @age: dog 's age
 * @owner: dog's owner name
 *
 *Description: manipulating structures.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
dog_t *new_dog(char *name, float age, char *owner);
