#include "hash_tables.h"

/**
 * key_index - function to generate an index for a key
 * @key: key to which index is generated
 * @size: size of the hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
