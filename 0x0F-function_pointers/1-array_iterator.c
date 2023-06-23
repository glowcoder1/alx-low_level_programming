#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array
 * @array: array conatining int
 * @size: size of array
 * @action: action to perform
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || size == 0 || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
