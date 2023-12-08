#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the first list.
 * @index: the node.
 * Return: nth node, or NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i;

	for (i = 0; node != NULL; i++)
	{
		if (i == index)
			return (node);
		node = node->next;
	}
	return (NULL);
}
