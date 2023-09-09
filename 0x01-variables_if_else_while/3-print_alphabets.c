#include <stdio.h>
/**
 * main - Entry point
 *
 * Discreption: program that prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c = 'a';
	char ch = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
