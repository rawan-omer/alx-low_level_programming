#include "lists.h"
/**
 * delete_nodeint_at_index - insert new node
 * @head: pointer
 * @index: index
 * Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tmp;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			tmp->next = node->next;
			free(node);
			return (1);
		}
		i++;
		tmp = node;
		node = node->next;
	}
	return (-1);
}
