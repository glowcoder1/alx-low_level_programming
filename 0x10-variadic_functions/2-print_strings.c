#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: n is the number of strings passed to the function
 * @...: strings to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *temp_separator;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
		temp_separator = "";
	else
		temp_separator = separator;

	for (i = 0; i < n; i++)
	{
		char *curr = va_arg(args, char *);

		if (curr == NULL)
			curr = "(nil)";
		if (i < n - 1)
			printf("%s%s", curr, temp_separator);
		else
			printf("%s", curr);
	}
	va_end(args);
	printf("\n");
}
