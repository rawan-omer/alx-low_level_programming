#include <unistd.h>

/**
 * _putchar - writes char c in stdout
 *
 * @c: character to print
 * Return: 1 if success
 * On error -1 is returned, and errno is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
