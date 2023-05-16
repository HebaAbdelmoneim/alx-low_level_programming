#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of the array width
 * @height: number of the array height
 *
 * Return: 2d array of integers
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(width * height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (ar == NULL)
				return (NULL);
			ar[i][j] = 0;
		}
	}
	return (ar);
}
