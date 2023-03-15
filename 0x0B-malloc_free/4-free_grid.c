#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_grid - entry of prototype function
 * @grid: variable pointer
 * @height: variable parameter
 * function that frees a 2 dimensional grid previuosly created
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
