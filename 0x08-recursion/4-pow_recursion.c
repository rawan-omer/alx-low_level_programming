#include "main.h"

/**
 * _pow_recursion - function returns the x raised to the power of y
 * @x: integer
 * @y: integer
 * Return: the result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
