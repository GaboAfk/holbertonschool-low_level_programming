/*
 * File: 4-free_grid.c
 * Auth: Gabriel Morffe
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 *					by alloc_grid function.
 * @grid: grid to free.
 * @height: grid's height.
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
