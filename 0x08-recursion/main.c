#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{

	if(*s)
    {
      _print_rev_recursion(s + 1);
      printf("%c", *s);
    }
}

int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
