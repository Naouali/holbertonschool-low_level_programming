#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the array
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p; 
	p->array = malloc(sizeof(hash_table_t*) * size);
	p->size = size;
	return p;
}
