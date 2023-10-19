#include "lists.h"

/**
 * _strlen - function
 * @s: string
 * Return: length
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * print_list - function prints elements of a list_t list.
 * @h: header
 * Return: size
*/

size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		m++;
	}
	return (m);
}
