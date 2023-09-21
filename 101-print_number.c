#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer
*/

void print_number(int n)
{
	int r = n;

	if (n < 0)
	{
		_putchar('-');
		r = -n;
	}

	if ((r / 10) != 0)
	{
		print_number(r / 10);
	}
	_putchar((r % 10) + '0');
}

