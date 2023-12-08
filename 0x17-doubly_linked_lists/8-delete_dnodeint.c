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
	dlistint_t *deleteN = *head;
	unsigned int i, c = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		free(deleteN);
		if (*head)
			(*head)->prev = NULL;
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
		deleteN = node->next;
		if (deleteN->next)
			deleteN->next->prev = node;
		node->next = deleteN->next;
		free(deleteN);
		return (1);
	}

	return (-1);
}
