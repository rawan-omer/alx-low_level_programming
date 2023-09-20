#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: character
 * @src: character
 *
 * Return: pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int c, r;

	c = 0;
	while (dest[c])
		c++;

	for (r = 0; src[r] ; r++)
		dest[c++] = src[r];

	return (dest);
}
