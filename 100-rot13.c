#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13.
 * @s: string
 * Return: string
*/

char *rot13(char *s)
{
	char *p = s;
	int i;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

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
