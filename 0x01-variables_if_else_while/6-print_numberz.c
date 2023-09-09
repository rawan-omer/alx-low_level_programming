#include <stdio.h>
/**
 * main - Entry point
 *
 * Discreption: program that prins numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
