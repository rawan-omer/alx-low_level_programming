#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: input character
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
