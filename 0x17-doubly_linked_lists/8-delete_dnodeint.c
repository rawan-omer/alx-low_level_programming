#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index in a dlistint_t list.
 * @head: pointer to first node
 * @index: index of deleted node.
 * Return: 1 or  -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	dlistint_t *delete = *head;
	unsigned int i, c = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		free(delete);
		if (*head)
			*head->prev = NULL;
		return (1);
	}

	i = index - 1;
	while (node && c != i)
	{
		node = node->next;
		c++;
	}

	if (node && c == i)
	{
		delete = node->next;
		if (delete->next)
			delete->next->prev = node;
		node->next = delete->next;
		free(delete);
		return (1);
	}

	return (-1);
}
