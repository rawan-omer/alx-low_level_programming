#include "main.h"

/**
 * print_square -  a function that print a squares
 *
 * @size: input number
*/

void print_square(int size)
{
	int r, s;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (s = 1; s <= size; s++)
				_putchar('#');
		_putchar('\n');
		}
	}
	else
		 _putchar('\n');
}
