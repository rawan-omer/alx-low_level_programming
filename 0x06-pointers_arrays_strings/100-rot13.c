#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13.
 * @s: string
 * Return: string
*/

char *rot13(char *s)
{
	int i;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char d[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == a[i])
			{
				*s == d[i];
				break;
			}
		}
		s++;
	}
	return (p);
}
