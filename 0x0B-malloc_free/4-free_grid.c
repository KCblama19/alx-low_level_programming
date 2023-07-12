#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: 2D grid
 * @height: height dimension of the grid
 *
 * Description: frees the memory of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int num;

	for (num = 0; num < height; num++)
	{
		free(grid[num]);
	}
	free(grid);
}
