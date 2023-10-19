#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: head of list
 * @str: string
 * Return: new list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));

	if (!head || !n)
		return ("NULL");
	if (str)
	{
		n->str = strdup(str);
		if (!n->str)
		{
			free(n);
			return ("NULL");
		}
		n->len = _srtlen(n->str);
	}
	n->next = *head;
	*head = n;
	return (n);
}
