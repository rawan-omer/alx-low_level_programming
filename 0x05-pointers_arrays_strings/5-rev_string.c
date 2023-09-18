#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input
*/

void rev_string(char *s)
{
	int l, i;
	char t;

	for (l = 0; s[l] != '\0'; l++)
		;
	for (i = 0; i < l; i++)
	{
		t = s[i];
		s[i] = s[l - 1];
		s[l - 1] = t;
	}
}
