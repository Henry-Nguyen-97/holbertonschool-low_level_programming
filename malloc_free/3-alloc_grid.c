#include "main.h"

/* Allocate memory for a table, return NULL for any failure */
int **alloc_grid/* For betty */(int width, int height)
{
	int **table;
	int index, row, col;

	/* Check if input is > 0 */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate outer memory == height/row */
	table = malloc(sizeof(int *) * height);
	if (table == NULL)
	{
		return (NULL);
	}

	index = 0;
	/* Allocate inner memory for each slot of memory for row. It == width/collumn */
	while (index < height)
	{
		table[index] = malloc(sizeof(int) * width);
		if (table[index] == NULL)
		{
			/* If allocation fail, trace back and free all allocation before returning NULL */
			while (index > 0)
			{
				index--;
				free(table[index]);
			}
			free(table);
			return (NULL);
		}
		index++;
	}

	/* Pass 0 to all memory slot */
	row = 0;
	while (row < height)
	{
		col = 0;
		while (col < width)
		{
			table[row][col] = 0;
			col++;
		}
		row++;
	}
	return (table);
}
