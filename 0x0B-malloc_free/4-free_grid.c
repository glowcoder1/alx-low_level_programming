#include "main.h"
#include <stdio.h>
#include <stdllib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid containing integers
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
