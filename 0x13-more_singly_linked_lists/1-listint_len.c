#include "list.h"

/**
 * listint_len -  prints all the elements of a listint_t list.
 * @h: pointer
 * Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		h = h->next;
		m++;
	}
	return (m);
}
