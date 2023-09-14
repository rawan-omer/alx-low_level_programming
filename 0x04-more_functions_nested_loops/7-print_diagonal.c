#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: input number
*/

void print_diagonal(int n)
{
	int r, s;

	if (n > 0)
	{
		for (r = 1; r <= n; r++)
		{
			for (s = 1; s <= n; n++)
				_putchar(' ');
			_putchar(92);
		}
	}
	_putchar('\n');
}
