#include "main.h"
/**
 * main - Entry point
 *
 * Discreption: A C program that prits with putchar prototype.
 *
 * Return: Always 0 (Success)
 *
 * print_alphabet - utilizes on the _putchar function to print alphabet a - z
 *
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
