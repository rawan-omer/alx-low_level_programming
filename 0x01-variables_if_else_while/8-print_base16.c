#include <stdio.h>
/**
 * main - Entry point
 *
 * Discreption: A C program that prints.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int r = 48;
	int a = 97;

	while (r <= 57)
	{
		putchar(r);
		r++;
	}
	while (a <= 102)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
