#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given index in dlistint_t
 * @h: pointer to the first node
 * @idx: the index of the node.
 * @n: the integer
 * Return: the address of the new node,or NULL
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h, *new;
	unsigned int i, c = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	i = idx - 1;
	while (node && c != i)
	{
		node = node->next;
		c++;
	}
	if (node && c == i)
	{
		new->prev = node;
		new->next = node->next;
		if (node->next)
			node->next->prev = new;
		node->next = new;
		return (new);

	}
	free(new);
	return (NULL);
}
