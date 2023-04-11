#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - fress a 2 dimeensional grid
 * previously created.
 * @grid: pointer to the array created previously
 * @height: height of the array.
 * Return: nothing
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
