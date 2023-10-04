#include "main.h"

/**
 * *str_concat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: 0 or pointer
*/

char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *p;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	p = malloc((size1 + size2) * sizeof(char) + 1);
	if (p == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			p[i] = s1[i];
		else
			p[i] = s2[i - size1];
	}
	p[i] = '\0';
	return (p);
}
