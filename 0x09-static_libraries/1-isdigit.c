#include"main.h"
/**
 * _isdigit - function to check if character is digit
 *
 * @c: checkes input of function
 *
 * Return: returns 1 if 'c' digit otherwise always 0 (success)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
