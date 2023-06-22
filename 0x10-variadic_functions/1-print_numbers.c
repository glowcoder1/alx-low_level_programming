#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: n is the number of integers passed to the function
 * @...: the numbers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *temp_separator;

	va_start(args, n);

	if (separator == NULL)
		temp_separator = "";
	else
		temp_separator = separator;

	for (i = 0; i < n; i++)
	{
		int curr = va_arg(args, int);

		if ( i == n - 1)
			printf("%d", curr);
		else
			printf("%d%s", curr, temp_separator);
	}
	va_end(args);
	printf("\n");
}
