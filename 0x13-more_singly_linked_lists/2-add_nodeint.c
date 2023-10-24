#include "list.h"

/**
 * *add_nodeint - adds a new node at the beginning of  list.
 * @head: pointer
 * @n: new number
 * Return: node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (!head || !tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	while (*head)
		tmp->next = *head;
	*head = tmp;
	return (tmp);
}
