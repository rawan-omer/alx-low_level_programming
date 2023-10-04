#include "main.h"

/**
 * *_strdup - contains a copy of the string given as a parameter.
 *
 * @str: string
 * @*str: pointer to string
 * Return: 0 or the pointer
*/

char *_strdup(char *str)
{
	int i, size;
	char *p;

	for (size = 0; str[size] != '\0'; size++)
		;
	p = malloc(size * sizeof(char) + 1);
	if (str == NULL || p == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = str[i];
	return (p);
}
