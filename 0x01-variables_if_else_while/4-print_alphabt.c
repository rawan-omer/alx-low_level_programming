#include <stdio.h>
/**
 * main - Entry point
 *
 * Discreption: A C program that prints the alphabet in lowercas exipt e,q.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
