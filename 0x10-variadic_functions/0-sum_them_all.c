#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - hat returns the sum of all its parameters
 * @n: number of args
 * @...: args to sum
 * Return: sum of n args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}

	va_end(args);
	return (sum);
}
