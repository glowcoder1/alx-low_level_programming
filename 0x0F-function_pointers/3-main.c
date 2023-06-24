#include "3-calc.h"

/**
 * main - main function
 * @argc: arg count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((op == op_div || op == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(a, b));
	return (0);
}
