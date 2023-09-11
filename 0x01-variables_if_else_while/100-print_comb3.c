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
	int r, s;

	for (r = '0'; r < '9'; r++)
	{
	for (s = r + 1; s < '10'; s++)
	{
	if (r != s)
	{
	putchar(r);
	putchar(s);
	if (r == '8' && s == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
