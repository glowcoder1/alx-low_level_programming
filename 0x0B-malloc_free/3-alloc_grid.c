#include "main.h"

/**
 * alloc_grid - that returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to a 2 dimensional array of integers or NULL
 */

int **alloc_grid(int width, int height)
{
	int **ptr_w;
	int i;
	int j;

	if (width == 0 || height == 0)
		return (NULL);
	ptr_w = malloc(height * sizeof(int *));

	if (ptr_w == NULL)
	{
		free(ptr_w);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr_w[i] = (int *)malloc(width * sizeof(int));

		if (ptr_w[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr_w[j]);
			}
			free(ptr_w);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr_w[i][j] = 0;
		}
	}
	return (ptr_w);
}
