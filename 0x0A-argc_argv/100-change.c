#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: argoment count
 * @argv: argoment values
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i, c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i >= 25)
	{
		i -= 25;
		c++;
	}
	while (i >= 10)
	{
		i -= 10;
		c++;
	}
	while (i >= 5)
	{
		i -= 5;
		c++;
	}
	while (i >= 2)
	{
		i -= 2;
		c++;
	}
	if (i == 1)
		c++;
	printf("%d\n", c);
	return (0);
}
