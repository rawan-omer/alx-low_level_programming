#include "main.h"

/**
 * _isalpha - check if character is a letter
 *
 * @c: takes input from other function
 *
 * Return: 1 is c is true else 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
