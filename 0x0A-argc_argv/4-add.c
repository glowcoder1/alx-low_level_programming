#include "main.h"

/**
 * main - main function
 * @argc: number of argument
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int sum = 0, i = 1, k = 0, l = 0;
	char j;

	for (i; i < argc; i++)
	{
		l = strlen(argv[i]);
		k = 0;
		while (k < l)
		{
			j = argv[i][k];
			if (j < '0' || j > '9')
			{
				printf("Error\n");
				return (1);
			}
			k++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
