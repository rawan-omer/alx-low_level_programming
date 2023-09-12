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
	int r = 0, s, o;

	while (r <= 9)
	{
		s = 0;
		while (s <= 9)
		{
			while (o <= 9)
			{
				if (r != s && r < s && s != o && s < o)
				{
					putchar(r + 48);
					putchar(s + 48);
					putchar(o + 48);
					if (r + s + O != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				o++;
			}
			s++;
		}
		r++;
	}
	putchar('\n');
	return (0);
}
