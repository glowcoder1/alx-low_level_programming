#include "main.h"

/**
 * print_line - prints line
 * Description: prints a straight line if number is greater than 0
 * followed by a new line
 * Return: void
 * @n: a number
 */

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
