#include "list.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: pointer
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
