#inlude "main.h"

/**
 * _isalpha - checks if value is alphabet
 *@c : value
 * Description: checks if param is alphabets
 * Return: 1 if alphabet, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
