#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * Description: a function that draws a diagonal line on the terminal
 * if the arg is greater than 0.
 * Return: void
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i;

	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}
