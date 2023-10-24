#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *n, *tmp;

	if (!head)
		return;
	n = *head;
	while (n)
	{
		tmp = n;
		n = n->next;
		free(tmp);
	}
	*head = NULL;
}
