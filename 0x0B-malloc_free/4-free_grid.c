#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: used to allocate using the grid
 * @height: the dimensional
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
