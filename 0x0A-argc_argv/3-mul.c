#include "main.h"

/**
 * main - main function multiplies two number
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc - 1 >=  2)
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", res);
	return (0);
}
