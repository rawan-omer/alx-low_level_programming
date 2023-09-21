#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 * @s: string
 * Return: new string
*/

char *leet(char *s)
{
	char *p = s;
	int i;
	char a[] = {'A', 'E', 'O', 'T', 'L'};
	int r[] = {4, 3, 0, 7, 1};

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] + 32)
				*s = r[i] + 48;
		}
		s++;
	}
	return (p);
}
