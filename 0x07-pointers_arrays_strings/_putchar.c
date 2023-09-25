#include <unistd.h>

/**
 * _putchar - writes the char c
 * @c: the char to print
 * Return: on seccess 1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
