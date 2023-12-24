#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves value with a key
 * @ht: the hash table
 * @key: input hash key
 * Return: string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *cur;

	if (strcmp(key, "") == 0 || !key || !ht)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[i];
	if (!cur)
		return (0);
	while (strcmp(cur->key, key) && cur)
		cur = cur->next;
	if (!cur)
		return (0);
	else
		return (cur->value);
}
