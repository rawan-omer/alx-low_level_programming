#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string pointer
 * Return: the converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int s = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			s = s * 2 + (*b++ - '0');
		}
		else
			return (0);
	}
	return (s);
}
