#include "hash_tables.h"
/**
 * key_index - make index to key.
 * @key: hash key
 * @size: hash table's size
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);
}
