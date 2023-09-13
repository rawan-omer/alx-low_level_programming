#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int r, s, n;

	for (r = 0; r <= 9; r++)
	{
		_putchar(48);
		for (s = 1; s <= 9; s++)
		{
			n = r * s;
			_putchar(',');
			_putchar(' ');
			if (n <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
