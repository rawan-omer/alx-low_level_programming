#include "lists.h"

/**
 * dlistint_len - returns the elements in a linked dlistint_t
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t i;

	for (i = 0; node != 0; i++)
		node = node->next;

	return (i);
}
