#include "main.h"

/**
 * *_realloc - function that reallocates a memory block
 * @ptr: pointer
 * @old_size: the old one
 * @new_size: the new
 * Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *r;

	if (ptr == NULL)
	{
		r = malloc(new_size);
		return (r);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	r = malloc(new_size);
	if (r == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)r + i) = *((char *) ptr + i);
	free(ptr);
	return (r);
}

