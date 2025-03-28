#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid
 * function
 * @grid: it will be freed up by us
 * @height: height of the grid
 * Return: Anything
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
			i++;
	}
	free(grid);
}
