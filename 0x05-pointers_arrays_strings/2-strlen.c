#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: character
 * Return: thr length
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;
	return (c);
}
