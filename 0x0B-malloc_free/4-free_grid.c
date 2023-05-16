#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: grid of memories
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}
	free(grid);
}
