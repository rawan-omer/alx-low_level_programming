#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer
 * Return: the length
*/
size_t list_len(const list_t *h)
{
	int m = 0;

	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}
