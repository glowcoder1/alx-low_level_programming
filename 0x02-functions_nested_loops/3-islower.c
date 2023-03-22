#include "main.h"

/**
 * _islower - checks if value is lowercase
 * @c : param
 * Description: returns 1 if char is lower case and 0 otherwise;
 * Return: returns 1 id lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
