#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: min value
 * @max: max value
 * Return: If min > max, return NULL
 * If malloc fails, return NULL
 * else return the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int len = (max - min) + 1;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
