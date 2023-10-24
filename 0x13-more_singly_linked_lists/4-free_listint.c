#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer
*/
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
