#include "main.h"

/* Print data from a 2D table */
void print_chessboard/* For betty */(char (*a)[8])
{
	int row;
	int col;

	row = 0;

	/* Nest collumn in row to print left to right, top to bottom */
	while (row < 8) /* While row is not the last row */
	{
		col = 0;

		while (col < 8) /*While collumn is not the last collumn */
		{
			_putchar(a[row][col]); /* Print char from an 2D table (array) */
			col++;
		}
		_putchar('\n');
		row++;
	}
}
