#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: NULL if str = NULL or if insufficient memory was available
 * if successful eturns a pointer to a new string which is a duplicate of
 * the string str
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
