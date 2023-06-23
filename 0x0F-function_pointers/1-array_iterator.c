#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array
 * @array: array conatining int
 * @size: size of array in bytes
 * @action: action to perform
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int len;
	unsigned int i;

	if (action == NULL || size == 0 || array == NULL)
		return;
	len = size / 4;

	for (i = 0; i < len; i++)
	{
		action(array[i]);
	}
}
