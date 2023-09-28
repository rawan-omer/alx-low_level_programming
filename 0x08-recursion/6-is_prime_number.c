#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer
 * @r: integer
 * Return: the result
*/

int prime(int n, int r);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - function to chech
 * @n: integer
 * @r: another integer
 * Return: if the number is prime
*/

int prime(int n, int r)
{
	if (r >= n && n > 1)
		return (1);
	else if (n % r == 0 || n <= 1)
		return (0);
	else
		return (prime(n, r + 1));
}
