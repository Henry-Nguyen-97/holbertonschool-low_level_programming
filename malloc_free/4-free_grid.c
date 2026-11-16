#include "main.h"

void free_grid/* For betty */(int **grid, int height)
{
	int index;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
