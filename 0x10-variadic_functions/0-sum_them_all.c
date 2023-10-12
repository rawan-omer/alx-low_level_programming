#include "variadic_functions.h"

/**
 * sum_them_all - function return the sum
 * @n: integer
 * @...: argument
 * Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, s = 0;

	va_start(arg, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		s += va_arg(arg, int);
	va_end(arg);
	return (s);
}
