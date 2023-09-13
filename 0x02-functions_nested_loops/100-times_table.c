#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: input number
*/

void print_times_table(int n)
{
	int r, s, mul;

	if (n <= 15 && n >= 0)
	{
		for (r = 0; r <= n; r++)
		{
			_putchar(48);
			for (s = 1; s <= n; s++)
				mul = r * s;
				if (mul <= 9)
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + 48);
				else if (mul <= 99)
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mul / 10) + 48);
					_putchar((mul % 10) + 48);
				else
					_putchar(',');
					_putchar(' ');
					_putchar((mul / 100) + 48);
					_putchar((mul / 10) + 48);
					_putchar((mul % 10) + 48);
		}
		_putchar('\n');
	}
}
