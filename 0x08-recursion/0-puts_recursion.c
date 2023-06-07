#include "main.h"

/**
 * _puts_recursion - prints character by character recursively
 *@str: string to print
 *
 * Return: nothing
 */

void _puts_recursion(char *str)
{
	if (*str)
	{
		_putchar(*str);
		_puts_recursion(++str);
	}
	else
		_putchar('\n');
}
