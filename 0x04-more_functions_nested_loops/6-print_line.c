#include "main.h"

/**
 * print_line -  a function that draws a straight line in the terminal.
 *
 * @n: input number
*/

void print_line(int n)
{
	int r;

	if (n > 0)
	{
		for (r = 1; r <= n; r++)
			_putchar('_');
	}
	_putchar('\n');
}

