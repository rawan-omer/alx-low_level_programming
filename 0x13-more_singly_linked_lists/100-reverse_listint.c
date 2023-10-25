#include "lists.h"

/**
 * reverse_listint - function with one argument
 * @head: pointer to head pointer of linked list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre *cur;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	pre = *head;
	cur = pre->next;
	*head = cur->next;
	pre->next = NULL;
	while ((*head)->next != NULL)
	{
		cur->next = pre;
		pre = cur;
		cur = (*head);
		*head = (*head)->next;
	}
	(*head)->next = cur;
	cur->next = pre;
	return (*head);
}
