#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free up 2d grid
 * @grid: double pointer 2d grid
 * @height: grid  height
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
