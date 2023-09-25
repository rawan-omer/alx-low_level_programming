#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals of matrix of integers.
 * @a: integers array
 * @size: array size
*/

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum);
	printf("%d", sum2);
}
