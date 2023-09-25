#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals of matrix of integers.
 * @a: integers array
 * @size: array size
*/

void print_diagsums(int *a, int size)
{
	int i, n, sum = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		sum += a[i];
	}
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	{
		sum2 += a[n];
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}
