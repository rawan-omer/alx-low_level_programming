#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: to saparate
 * @n: number of argument
 * @...: arguments
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s, *p;
	va_list arg;

	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;
	va_start(arg, n);
	if (n > 0)
		printf("%s", va_arg(arg, char *));

	for (i = 1; i < n; i++)
	{
		p = va_arg(arg, char *);
		if (p == NULL)
			p = "(nil)";
		printf("%s%s", s, p);
	}
	printf("\n");
	va_end(arg);
}
