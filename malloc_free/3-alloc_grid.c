#include "main.h"

int **alloc_grid/* For betty */(int width, int height)
{
	int **table;
	int index, row, col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	table = malloc(sizeof(int *) * height);
	if (table == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (index < height)
	{
		table[index] = malloc(sizeof(int) * width);
		if (table[index] == NULL)
		{
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
