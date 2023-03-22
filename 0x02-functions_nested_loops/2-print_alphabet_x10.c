#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Description: The program prints alphabets 10 times.
 * followed by a new line
 * Return: 0 if function  in main executes correctly
 */

void print_alphabet_x10(void)
{
	int n;

	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
