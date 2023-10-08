#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: firest string
 * @s2: second string
 * @n: number of char from s2
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, size1, size2;
	char *r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	r = malloc(size1 + n + 1);
	if (r == 0)
		return (NULL);

	for (i = 0; i < size1 ; i++)
		r[i] = s1[i];
	if (n >= size2)
	{
		for (j = 0; j < size2; j++)
		{
			r[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			r[i] = s2[j];
			i++;
		}
	}
	r[i] = '\0';
	return (r);
}
