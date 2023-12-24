#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, flag = 0;
	hash_node_t *new;

	if (!ht)
		return;
	putchar('{');
	for (; i < ht->size; i++)
	{
		new = ht->array[i];
		if (new)
		{
			while (new)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", new->key, new->value);
				flag = 1;
				new = new->next;
			}
		}
	}
	putchar('}');
	putchar('\n');
}
