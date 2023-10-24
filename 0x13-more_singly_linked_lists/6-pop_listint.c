#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer
 * Return: data int
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int d;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	d = (*head)->n;
	free(*head);
	*head = node;
	return (d);
}
