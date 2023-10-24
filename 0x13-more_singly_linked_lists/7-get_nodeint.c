#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a listint_t
 * @head: pointer
 * @index: the index
 * Return: node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	for (node = head, i = 0; node && i < index; node = node->next, i++)
		;
	return (node);
}
