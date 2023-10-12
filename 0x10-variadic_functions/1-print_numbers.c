#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers,
 * @separator: to separate
 * @n: elements number
 * @...: argument
 * Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;

	va_start(arg, n);
	if (n > 0)
		printf("%d", va_arg(arg, int));
	for (i = 1; i < n; i++)
		printf("%s%d", s, va_arg(arg, int));
	printf("\n");
	va_end(arg);
}
