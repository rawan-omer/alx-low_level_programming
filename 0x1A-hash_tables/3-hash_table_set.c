#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to hash table.
 * @ht: the hash table
 * @key: input key
 * @value: number set to hash table
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new, *set;

	if (!key || strcmp(key, "") == 0 || !ht)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup((char *)key);
	new->value = strdup((char *)value);
	new->next = NULL;
	if (!(ht->array[i]))
		ht->array[i] = new;
	else
	{
		set = ht->array[i];
		if (strcmp(set->key, key) == 0)
		{
			new->next = set->next;
			ht->array[] = new;
			free(set->key);
			free(set->value);
			free(set);
			return (1);
		}
		while (set->next && strcmp(set->next->key, key) != 0)
			set = set->next;
		if (set->next && strcmp(set->key, key) == 0)
		{
			new->next = set->next->next;
			free(set->next->key);
			free(set->next->value);
			free(set->next);
			set->next = new;
		}
		else
		{
			new->next = ht->array[i];
			ht->array[i] = new;
		}
	}
	return (1);
}
