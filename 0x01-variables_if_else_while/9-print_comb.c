#include <stdio.h>
/**
 * main - Entry point
 *
 * Discreption: A C program that prints
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchaR(i + 48);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
