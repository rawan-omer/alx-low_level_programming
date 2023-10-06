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
	void *r;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = calloc(nmemb * sizeof(int));

	if (r == 0)
		return (NULL);
	for (i = 0; i < (nmemb * sizeof(int)); i++)
		r[i] = 0;
	return (r);
}
