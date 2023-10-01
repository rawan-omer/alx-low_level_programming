#include "main.h"
#include <string.h>

/**
 * check - function returns 1 if a string palindrome ,0 if not
 * @s: string to check
 * @l: integer
 * @r: integer
 * Return: 1 if palindrome,0 if not
*/

int check(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	else if (s[l] == s[r])
		return (check(s, l + 1, r - 1));
	else
		return (0);
}
/**
 * is_palindrome - function returns 1 if a string palindrome ,0 if not
 * @s: string to check
 * Return: 1 if palindrome,0 if not
*/

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0 || length == 1)
		return (1);

	return (check(s, 0, length - 1));
}
