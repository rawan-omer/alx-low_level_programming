#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
*/

void more_numbers(void)
{
	int r, c;

	for (r = 0; r <= 10; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10 && c <= 14)
				_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}

