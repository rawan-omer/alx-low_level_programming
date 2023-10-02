#include "main.h"

/**
 * _isupper - function to check if character is uppercase
 *
 * @c: checkes input of function
 *
 * Return: returns 1 if 'c' uppercase otherwise always 0 (success)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
