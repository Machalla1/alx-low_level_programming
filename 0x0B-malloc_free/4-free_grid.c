#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * @grid: 2d grid
 * free_grid - frees 2d array
 * @height: height size of grid
 * Description: make more memory of grid available
 * Return: null
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}


