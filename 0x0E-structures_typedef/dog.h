#ifndef DOG_H
#define DOG_H


/**
 * struct dog - new structure called dog
 * @name: dog ' s name
 * @age: dog 's age
 * @owner: dog's owner name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);
