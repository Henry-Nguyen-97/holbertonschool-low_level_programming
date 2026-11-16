#include "main.h"

/*Free up memory */
void free_grid/* For betty */(int **grid, int height)
{
	int index;

	/* Free memory reserved for each row */
	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	/* Then free momory reseved for the rows */
	free(grid);
}
