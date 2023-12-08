#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint_t
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t i;

	for (i = 0; node != 0; i++)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
	return (i);
}
