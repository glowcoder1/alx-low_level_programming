#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to search
 * @size: size of array
 * @cmp: function to compare value
 * Return: index of value if found else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		int curr = array[i];

		if (cmp(curr))
			return (i);
	}

	return (-1);
}
