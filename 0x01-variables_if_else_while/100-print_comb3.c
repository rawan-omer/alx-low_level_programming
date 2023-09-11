#include <stdio.h>
/**
 * main - Entry point
 *
 * Discreption: A C program that prits numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int r = 0, s;

	while (r < 9)
	{
		s = 0;
		while (s <= 9)
		{
			if (r != s && r < s)
			{
				putchar(r + 48);
				putchar(s + 48);
				if (r != 8 && s != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s++;
		}
		r++;
	}
	putchar('\n');

	return (0);
}
