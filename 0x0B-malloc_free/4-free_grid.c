#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: 2d array
 * @height: number of the array height
 *
 * Return: 2d array of integers
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
