#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char
 * @size: size to allocate in byte
 * @c: char to initialize with
 * Return: NULL if size is 0 else a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
