#include "main.h"
/**
 * main - Entry point
 *
 * Discreption: A C program that prits with putchar prototype.
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
