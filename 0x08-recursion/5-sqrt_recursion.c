#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root.
 * @n: integer
 * @r: integer
 * Return: the result of square root
*/

int sqr(int n, int r);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - function to fine square root
 * @n: the square
 * @r: the root
 * Return: the result
*/

int sqr(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r < n)
		return (sqr(n, r + 1));
	else
		return (-1);
}
