#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to 2 dimensional array of int
 * @width: input
 * @height: input
 * Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int **g, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int *) *  height);

	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);

		if (g[i] == NULL)
		{
			for (; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			g[i][j] = 0;
	}

	return (g);
}
