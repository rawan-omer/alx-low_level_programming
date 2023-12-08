#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * @head: pointer to first node
 * Return: sum of all data in the lis
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int i = 0;

	while (node->next)
	{
		i += node->n;
		node = node->next;
	}
	return (i);
}
