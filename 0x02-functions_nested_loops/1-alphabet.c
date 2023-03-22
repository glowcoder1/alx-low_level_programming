#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Description: The program prints the alphabet in lowercase.
 *followed by a new line.
 *
 * Return: Return O if there is no error in main program
 */
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
 _putchar(n);
}
 _putchar('\n');
}
