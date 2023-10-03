#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argoment count
 * @argv: argoment values
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi (argv[i]);
		printf("%d\n", mul);
			return (0);
	}
	printf("Error\n");
	return (1);
}
