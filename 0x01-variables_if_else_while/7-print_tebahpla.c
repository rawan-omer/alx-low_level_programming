#include <stdio.h>
/**
 * main - Entry point
 *
 * Discreption: A C program that prints the alphabet in lowercase .
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar("\n");
	return (0);
}
