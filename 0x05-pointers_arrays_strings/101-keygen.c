#include <stdio.h>
#include <stdlip.h>
#include <time.h>

/**
 * main - generates random valid passwords for program 101-crackme.
 * Return: 0
*/

int main(void)
{
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2645)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	putchar(2772 - s);
	return (0);
}
