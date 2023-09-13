#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *
 * @n: input
*/

void print_to_98(int n)
{
	int r;

	if (n < 98)
	{
		for (r = n; r <= 98; r++)
		{
			printf("%d, ", r);
		}
	}
	else if (n > 98)
	{
		for (r = n; r <= 98; r--)
		{
			printf("%d, ", r);
		}
	}
	else
		printf("98\n");
}
