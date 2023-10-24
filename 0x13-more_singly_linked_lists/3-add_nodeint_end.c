#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t.
 * @n: new node
 * @head: the head
 * Return: pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new;
	}
	return (new);
}

