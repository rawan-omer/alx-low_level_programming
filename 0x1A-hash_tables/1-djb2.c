#include "hash_tables.h"

/**
 * hash_djb2 - hash function
 * @str: the input string
 * Return: number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int i;
	int c;

	i = 5381;
	while ((c = *str++))
	{
		i = ((i << 5) + i) + c;
	}
	return(i);
}
