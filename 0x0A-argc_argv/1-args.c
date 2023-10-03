#include <stdio.h>

/**
 * main - program that prints the number of arguments.
 * @argc: argoment count
 * @argv: argoment values
 * Return: 0
*/

int main(int argc, const char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
