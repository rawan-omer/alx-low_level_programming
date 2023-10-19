#include "3-calc.h"

/**
 * main - contain your main function only.
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y;
	int (*res)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	res = get_op_func(argv[2]);

	if (!res)
		printf("Error\n"), exit(99);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && !y)
		printf("Error\n"), exit(100);
	printf("%d\n", res(x, y));

	return (0);
}
