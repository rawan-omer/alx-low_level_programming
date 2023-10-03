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
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			while (*argv[i] != 0)
			{
				if (*argv[i] < '0' || *argv[i] > '9')
				{
					printf("Erorr\n");
					return (1);
				}
				argv[i]++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
