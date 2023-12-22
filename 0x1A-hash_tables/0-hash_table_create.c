#include "hash_tables.h"

/**
 * hash_table_create - function that make a hash table.
 * @size: input size
 * Return: pointer to the newly hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *h = malloc(sizeof(hash_table_t));

	if (!h)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (0);
	}

	h->size = size;
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (0);
	}

	for (i = 0; i < size; i++)
		h->array[i] = NULL;
	return (h);
}
