#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: 0 or pointer
*/

int **alloc_grid(int width, int height)
{
	int **t, i, j;

	t = malloc(sizeof(*t) * height);
	if (height <= 0 || width <= 0 || t == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(**t) * width);
		if (t[i] == 0)
		{
			while (i--)
				free(t[i]);
			free(t);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}
	return (t);
}
