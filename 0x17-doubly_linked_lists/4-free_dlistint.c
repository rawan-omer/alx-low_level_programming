#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the list
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	dlistint_t *new;

	while (cur)
	{
		new = cur->next;
		free(cur);
		cur = new;
	}
}
