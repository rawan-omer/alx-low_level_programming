#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: number of times to print diagonal line
 *
 * Return: empty
*/

void print_diagonal(int n)
{
	int r, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (s = 1; s < r; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
