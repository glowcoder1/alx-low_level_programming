#include "main.h"

/**
 * _isdigit - checks if arg is a digit between 0 and 9
 * Description: if value is a digit returns 1 otherwise 0
 * Return: 1 or 0
 * @c: int arg
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
