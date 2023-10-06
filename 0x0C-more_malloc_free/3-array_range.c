#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: integer
 * @max: intger
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int *r, i;

	if (min > max)
		return (NULL);
	r = malloc((max - min + 1) * sizeof(int));
	if (r == 0)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		r[i] = min;
		min++;
		i++;
	}
	return (r);
}
