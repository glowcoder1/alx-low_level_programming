#include "main.h"
/**
 * main - The entry point of my program
 *
 * Description: The program prints the alphabet in lowercase.
 *followed by a new line.
 *
 * Return: Return O if there is no error in main program
 */
int main(void)
{
	int n = 0;
	char alphabet[28] = "abcdefghijklmnopqrstuvwxyz";

	while (n < 28)
	{
		_putchar(alphabet[n]);
		n++;
	}
	_putchar('\n');

	return (0);
}
