# include "main.h"

/**
 * _isupper - takes one arg
 * Description: returns 1 or 0 depending on the arg
 * Return: 1 if arg is uppercase and 0 if otherwise
 * @c: int
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
