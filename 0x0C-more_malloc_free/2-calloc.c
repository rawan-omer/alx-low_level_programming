#include "main.h"

/**
 * *_calloc - function that allocates memory for an array,
 * @nmemb: number of char
 * @size: the size
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *r;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = calloc(nmemb * sizeof(size));

	if (r == 0)
		return (NULL);
	for (i = 0; i < (nmemb * sizeof(size)); i++)
		r[i] = 0;
	return (r);
}
