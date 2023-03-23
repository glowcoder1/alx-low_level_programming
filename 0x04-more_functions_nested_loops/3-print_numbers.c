#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints number 0 - 9
 * Description: prints number 0123456789 followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
